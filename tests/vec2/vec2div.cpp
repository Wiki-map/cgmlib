#include "cgm.h"

int main() {
    vec2 a = vec2(1,2);

    if (a / 2 != vec2(0.5f,1)) return 1;
    a /= 2;
    if (a  != vec2(0.5f,1)) return 1;
    return 0;
}