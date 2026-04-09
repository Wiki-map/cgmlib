#include "cgm.h"

int main() {
    vec2 a = vec2(1,2);
    vec2 b = vec2(2,3);

    if (a - b != vec2(-1,-1)) return 1;
    a -= b;
    if (a  != vec2(-1,-1)) return 1;
    return 0;
}