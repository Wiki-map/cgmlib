#pragma once

#include <ostream>

#ifndef PI
    #define PI 3.14159265358979323846f
#endif

#ifndef EPSILON
    #define EPSILON 0.000001f
#endif

#ifndef DEG2RAD
    #define DEG2RAD (PI/180.0f)
#endif

#ifndef RAD2DEG
    #define RAD2DEG (180.0f/PI)
#endif

struct vec2 {
    float x,y;

    vec2();
    vec2(float all);
    vec2(float x,float y);

    vec2 operator +(const vec2 &b);
    vec2 operator -(const vec2 &b);
    vec2 operator *(float r);
    vec2 operator /(float r);

    vec2& operator +=(vec2 r);
    vec2& operator -=(vec2 r);

    vec2& operator *=(float r);
    vec2& operator /=(float r);

    bool operator ==(vec2 r);
    bool operator !=(vec2 r);

    friend std::ostream& operator<<(std::ostream &os,const vec2& val);

    void normalize();
    float lenght();
};

struct vec3 {
    float x,y,z;

    vec3();
    vec3(float all);
    vec3(float x,float y,float z);
    vec3(vec2 a,float z);

    vec3 operator +(const vec3 &b);
    vec3 operator -(const vec3 &b);
    vec3 operator *(float r);
    vec3 operator /(float r);

    vec3& operator +=(vec3 r);
    vec3& operator -=(vec3 r);

    vec3& operator *=(float r);
    vec3& operator /=(float r);

    bool operator ==(vec3 r);
    bool operator !=(vec3 r);

    friend std::ostream& operator<<(std::ostream &os,const vec3& val);

    void normalize();
    float lenght();
};


struct mat4;

struct vec4 {
    float x,y,z,w;

    vec4();
    vec4(float all);
    vec4(float x,float y,float z,float w);
    vec4(vec3,float w);
    vec4(vec2,float z,float w);

    vec4 operator +(const vec4 &b);
    vec4 operator -(const vec4 &b);
    vec4 operator *(float r);
    vec4 operator *(mat4 r);
    vec4 operator /(float r);

    vec4& operator +=(vec4 r);
    vec4& operator -=(vec4 r);

    vec4& operator *=(float r);
    vec4& operator /=(float r);

    bool operator ==(vec4 r);
    bool operator !=(vec4 r);

    friend std::ostream& operator<<(std::ostream &os,const vec4& val);

    void normalize();
    float lenght();
};

struct mat4 {
    float v[16];

    mat4();
    mat4(float id);
    mat4(
        float m0,float m1,float m2,float m3,
        float m4,float m5,float m6,float m7,
        float m8,float m9,float m10,float m11,
        float m12,float m13,float m14,float m15
    );

    vec4 operator *(vec4 r);
    mat4 operator *(mat4 r);
    mat4& operator *=(mat4 r);

    bool operator ==(mat4 r);
    bool operator !=(mat4 r);

    friend std::ostream& operator<<(std::ostream &os,const mat4& val);
};

float radians(float deg);
float degrees(float rad);

float dot(vec2 a,vec2 b);
float dot(vec3 a,vec3 b);
float dot(vec4 a,vec4 b);

vec3 cross(vec3 a,vec3 b);

mat4 translate(float x,float y,float z);
mat4 scale(float x,float y,float z);

mat4 ortho(float left,float right,float top,float bot,float near,float far);
mat4 perspectiv(float fov,float aspect,float near,float far);

mat4 view(vec3 pos, vec3 target,vec3 up);