#include "cgm.h"

int main() {
    vec3 a = vec3(1,2,3);
    vec3 b = vec3(2,3,4);

    if (a + b != vec3(3,5,7)) return 1;
    a += b;
    if (a != vec3(3,5,7)) return 1;
    return 0;
}