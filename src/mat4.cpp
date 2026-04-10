#include "cgm.h"

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