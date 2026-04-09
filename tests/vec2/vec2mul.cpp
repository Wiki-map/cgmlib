#include "cgm.h"

int main() {
    vec2 a = vec2(1,2);

    if (a * 2 != vec2(2,4)) return 1;
    a *= 2;
    if (a  != vec2(2,4)) return 1;
    return 0;
}