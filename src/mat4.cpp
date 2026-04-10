#include "cgm.h"

mat4::mat4() {
    for (int i=0; i<16; i++) {
        v[i] = 0;
    }
}

mat4::mat4(float d) {
    for (int i=0; i<16; i++) {
        v[i] = 0;
    }
    v[0] = d;
    v[5] = d;
    v[10] = d;
    v[15] = d;
}

mat4::mat4(
    float m0,float m1,float m2,float m3,
    float m4,float m5,float m6,float m7,
    float m8,float m9,float m10,float m11,
    float m12,float m13,float m14,float m15
) {
    v[0] = m0;
    v[1] = m1;
    v[2] = m2;
    v[3] = m3;
    v[4] = m4;
    v[5] = m5;
    v[6] = m6;
    v[7] = m7;
    v[8] = m8;
    v[9] = m9;
    v[10] = m10;
    v[11] = m11;
    v[12] = m12;
    v[13] = m13;
    v[14] = m14;
    v[15] = m15;
}

vec4 mat4::operator *(vec4 r) {
    return {
        v[0] * r.x + v[1] * r.y + v[2] * r.z + v[3] * r.w,
        v[4] * r.x + v[5] * r.y + v[6] * r.z + v[7] * r.w,
        v[8] * r.x + v[9] * r.y + v[10] * r.z + v[11] * r.w,
        v[12] * r.x + v[13] * r.y + v[14] * r.z + v[15] * r.w
    };
}

mat4 mat4::operator *(mat4 r) {
    mat4 rez = mat4();
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            for (int k=0; k<4; k++) {
                rez.v[i*4+j] += v[i*4+k] * r.v[k*4+j];
            }
        }
    }
    return rez;
}

mat4& mat4::operator *=(mat4 r) {
    mat4 rez = mat4();
    for (int i=0; i<4; i++) {
        for (int j=0; j<4; j++) {
            for (int k=0; k<4; k++) {
                rez.v[i*4+j] += v[i*4+k] * r.v[k*4+j];
            }
        }
    }

    for (int i=0; i<16; i++) {
        v[i] = rez.v[i];
    }

    return *this;
}

bool mat4::operator ==(mat4 r) {
    for (int i=0; i<16; i++) {
        if (v[i] != r.v[i]) return false;
    }
    return true;
}

bool mat4::operator !=(mat4 r) {
    for (int i=0; i<16; i++) {
        if (v[i] != r.v[i]) return true;
    }
    return false;
}

std::ostream& operator<<(std::ostream &os,const mat4& val) {
    os<<"[\n";
    for (int i=0; i<4; i++) {
        os<<"[";
        for (int j=0; j<4; j++) {
            os<<val.v[i*4+j];
            if (j != 3) os<<',';
        }
        os<<']\n';
    }
    os<<"]";
    return os;
}

mat4 translate(float x,float y,float z) {
    return mat4(
        1,0,0,x,
        0,1,0,y,
        0,0,1,z,
        0,0,0,1
    );
}

mat4 scale(float x,float y,float z) {
    return mat4(
        x,0,0,0,
        0,y,0,0,
        0,0,z,0,
        0,0,0,1
    );
}

mat4 ortho(float left,float right,float top,float bot,float near,float far) {
    mat4 rez = mat4();

    float rl = right - left;
    float tb = top - bot;
    float fn = far - near;

    rez.v[0] = 2.0f/rl;
    rez.v[5] = 2.0f/tb;
    rez.v[10] = -2.0f/fn;
    rez.v[3] = -(left + right)/rl;
    rez.v[7] = -(top + bot)/tb;
    rez.v[11] = -(far + near)/fn;
    rez.v[15] = 1.0f;

    return rez;
}

mat4 perspectiv(float fov,float aspect,float near,float far) {
    mat4 rez = mat4();

    float top = near*std::tan(fov*0.5);
    float bot = -top;
    float right = top*aspect;
    float left = -right;

    float rl = right - left;
    float tb = top - bot;
    float fn = far - near;

    rez.v[0] = (near*2.0f)/rl;
    rez.v[5] = (near*2.0f)/tb;
    rez.v[3] = (right + left)/rl;
    rez.v[6] = (top + bot)/tb;
    rez.v[10] = -(far + near)/fn;
    rez.v[14] = -1.0f;
    rez.v[11] = -(far*near*2.0f)/fn;

    return rez;
}

mat4 lookat(vec3 eye, vec3 target,vec3 up) {
    vec3 dir = eye - target;
    dir.normalize();
    vec3 right = cross(up,dir);
    vec3 upp = cross(dir,right);

    return mat4(
        right.x,right.y,right.z,-dot(right,eye),
        upp.x,upp.y,upp.z,-dot(upp,eye),
        dir.x,dir.y,dir.z,-dot(dir,eye),
        0,0,0,1
    );
}