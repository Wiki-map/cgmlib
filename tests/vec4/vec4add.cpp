#include "cgm.h"

int main() {
    vec4 a = vec4(1,2,3,4);
    vec4 b = vec4(2,3,4,5);

    if (a + b != vec4(3,5,7,9)) return 1;
    a += b;
    if (a != vec4(3,5,7,9)) return 1;
    return 0;
}