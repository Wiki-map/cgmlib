#include "cgm.h"

vec4::vec4() {
    x = 0;
    y = 0;
    z = 0;
    w = 0;
}

vec4::vec4(float all) {
    x = all;
    y = all;
    z = all;
    w = all;
}

vec4::vec4(float x,float y,float z,float w) {
    this->x = x;
    this->y = y;
    this->z = z;
    this->w = w;
}

vec4::vec4(vec2 a,float z,float w) {
    this->x = a.x;
    this->y = a.y;
    this->z = z;
    this->w = w;
}

vec4::vec4(vec3 a,float w) {
    this->x = a.x;
    this->y = a.y;
    this->z = a.z;
    this->w = w;
}

vec4 vec4::operator+(const vec4 &b) {
    return {x + b.x,y + b.y,z + b.z,w + b.w};
}

vec4 vec4::operator-(const vec4 &b) {
    return {x - b.x,y - b.y,z - b.z,w - b.w};
}


vec4& vec4::operator +=(vec4 r) {
    x += r.x;
    y += r.y;
    z += r.z;
    w += r.w;
    return *this;
}

vec4& vec4::operator -=(vec4 r) {
    x -= r.x;
    y -= r.y;
    z -= r.z;
    w -= r.w;
    return *this;
}


vec4 vec4::operator *(float r) {
    return {x*r,y*r,z*r,w*r};
}
vec4 vec4::operator /(float r) {
    return {x/r,y/r,z/r,w/r};
}

vec4& vec4::operator *=(float r) {
    x *= r;
    y *= r;
    z *= r;
    w *= r;
    return *this;
}

vec4& vec4::operator /=(float r) {
    x /= r;
    y /= r;
    z /= r;
    w /= r;
    return *this;
}


bool vec4::operator ==(vec4 r) {
    return x == r.x && y == r.y && z == r.z && w == r.w;
}
bool vec4::operator !=(vec4 r) {
    return x != r.x || y != r.y || z != r.z || w != r.w;
}

std::ostream& operator<<(std::ostream &os,const vec4& val) {
    os << '[' << val.x << ','<< val.y << ',' << val.z << ',' << val.w << ']';
    return os;
}

float vec4::lenght() {
    return std::sqrt(x*x + y*y + z*z + w*w);
}

void vec4::normalize() {
    float len = lenght();
    x /= len;
    y /= len;
    z /= len;
    w /= len;
}

float dot(vec4 a,vec4 b) {
    return a.x*b.x + a.y*b.y + a.z*b.z + a.w*b.w;
}

vec4 vec4::operator *(mat4 r) {
    return {
        r.v[0] * x + r.v[1] * y + r.v[2] * z + r.v[3] * w,
        r.v[4] * x + r.v[5] * y + r.v[6] * z + r.v[7] * w,
        r.v[8] * x + r.v[9] * y + r.v[10] * z + r.v[11] * w,
        r.v[12] * x + r.v[13] * y + r.v[14] * z + r.v[15] * w
    };
}

vec4& vec4::operator *=(mat4 r) {
    x =  r.v[0] * x + r.v[1] * y + r.v[2] * z + r.v[3] * w;
    y = r.v[4] * x + r.v[5] * y + r.v[6] * z + r.v[7] * w;
    z =  r.v[8] * x + r.v[9] * y + r.v[10] * z + r.v[11] * w;
    w = r.v[12] * x + r.v[13] * y + r.v[14] * z + r.v[15] * w;
    return *this;
}

vec4 normalize(vec4 a) {
    float len = a.lenght();
    return {a.x/len,a.y/len,a.z/len,a.w/len};
}

float* valueptr(vec4 *a) {
    void* p = a;
    float* r = (float*)a;
    return r;
}