#include "cgm.h"

int main() {
    vec3 a = vec3(1,2,3);

    if (a * 2 != vec3(2,4,6)) return 1;
    a *= 2;
    if (a != vec3(2,4,6)) return 1;
    return 0;
}