#include "cgm.h"

int main() {
    vec2 a = vec2(3,4);
    a.normalize();

    if (a != vec2(0.6f,0.8f)) return 1;
    return 0;
}