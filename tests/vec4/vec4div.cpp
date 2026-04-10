#include "cgm.h"

int main() {
    vec4 a = vec4(1,2,3,4);

    if (a / 2 != vec4(0.5,1,1.5,2)) return 1;
    a /= 2;
    if (a != vec4(0.5,1,1.5,2)) return 1;
    return 0;
}