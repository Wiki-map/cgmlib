#include "cgm.h"

int main() {
    vec4 a = vec4(1,2,3,1);
    mat4 b = mat4(
        1,0,0,1,
        0,1,0,1,
        0,0,1,1,
        0,0,0,1
    );

    if (b * a != vec4(2,3,4,1)) return 1;
    return 0;
}