#include "cgm.h"

vec3::vec3() {
    x = 0;
    y = 0;
    z = 0;
}

vec3::vec3(float all) {
    x = all;
    y = all;
    z = all;
}

vec3::vec3(float x,float y,float z) {
    this->x = x;
    this->y = y;
    this->z = z;
}

vec3::vec3(vec2 a,float z) {
    this->x = a.x;
    this->y = a.y;
    this->z = z;
}

vec3 vec3::operator +(const vec3 &b) {
    return {x + b.x,y + b.y,z + b.z};
}
vec3 vec3::operator -(const vec3 &b) {
    return {x - b.x, y - b.y, z - b.z};
}
vec3 vec3::operator *(float r) {
    return {x * r,y * r,z * r};
}
vec3 vec3::operator /(float r) {
    return {x/r,y/r,z/r};
}

vec3& vec3::operator +=(vec3 r) {
    x += r.x;
    y += r.y;
    z += r.z;
    return *this;
}
vec3& vec3::operator -=(vec3 r) {
    x -= r.x;
    y -= r.y;
    z -= r.z;
    return *this;
}

vec3& vec3::operator *=(float r) {
    x *= r;
    y *= r;
    z *= r;
    return *this;
}
vec3& vec3::operator /=(float r) {
    x /= r;
    y /= r;
    z /= r;
    return *this;
}


bool vec3::operator==(vec3 r) {
    return x == r.x && y == r.y && z == r.z;
}

bool vec3::operator!=(vec3 r) {
    return x != r.x || y != r.y || z != r.z;
}

std::ostream& operator<<(std::ostream &os,const vec3& val) {
    os << '[' << val.x << ','<< val.y << ',' << val.z << ']';
    return os;
}

float vec3::lenght() {
    return std::sqrt(x*x + y*y + z*z);
}

void vec3::normalize() {
    float len = lenght();
    x /= len;
    y /= len;
    z /= len;
}

float dot(vec3 a,vec3 b) {
    return a.x*b.x + a.y*b.y + a.z*b.z;
}

vec3 cross(vec3 a,vec3 b) {
    return {a.y*b.z - a.z*b.y, a.z*b.x - a.x*b.z, a.x*b.y - a.y*b.x};
}

vec3 normalize(vec3 a) {
    float len = a.lenght();
    return {a.x/len,a.y/len,a.z/len};
}

float* valueptr(vec3 *a) {
    void* p = a;
    float* r = (float*)a;
    return r;
}