#include "cgm.h"
#include <cmath>

vec2::vec2() {
    x = 0;
    y = 0;
}

vec2::vec2(float all) {
    x = all;
    y = all;
}

vec2::vec2(float x,float y) {
    this->x = x;
    this->y = y;
}

vec2 vec2::operator+(const vec2 &b) {
    return {x+b.x,y+b.y};
}
vec2 vec2::operator-(const vec2 &b) {
    return {x-b.x,y-b.y};
}
vec2 vec2::operator *(float r) {
    return {x*r,y*r};
}
vec2 vec2::operator /(float r) {
    return {x/r,y/r};
}


vec2& vec2::operator +=(vec2 r) {
    x += r.x;
    y += r.y;
    return *this;
}
vec2& vec2::operator -=(vec2 r) {
    x -= r.x;
    y -= r.y;
    return *this;
}
vec2& vec2::operator *=(float r) {
    x *= r;
    y *= r;
    return *this;
}
vec2& vec2::operator /=(float r) {
    x /= r;
    y /= r;
    return *this;
}

bool vec2::operator==(vec2 r) {
    return x == r.x && y == r.y;
}

bool vec2::operator!=(vec2 r) {
    return x != r.x || y != r.y;
}

std::ostream& operator<<(std::ostream &os,const vec2& val) {
    os << "["<<val.x<<","<<val.y<<"]";
    return os;
}

float vec2::lenght() {
    return std::sqrt(x*x + y*y);
}

void vec2::normalize() {
    float len = lenght();
    x /= len;
    y /= len;
}

float dot(vec2 a,vec2 b) {
    return a.x * b.x + a.y*b.y;
}

vec2 normalize(vec2 a) {
    float len = a.lenght();
    return {a.x/len,a.y/len};
}

float* valueptr(vec2 *a) {
    void* p = a;
    float* r = (float*)a;
    return r;
}