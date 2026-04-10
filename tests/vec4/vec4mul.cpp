#include "cgm.h"

int main() {
    vec4 a = vec4(1,2,3,4);

    if (a * 2 != vec4(2,4,6,8)) return 1;
    a *= 2;
    if (a != vec4(2,4,6,8)) return 1;
    return 0;
}