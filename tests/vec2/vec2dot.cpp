#include "cgm.h"

int main() {
    vec2 a = vec2(1,2);
    vec2 b = vec2(3,4);

    if (dot(a,b) != 11) return 1;
    return 0;
}