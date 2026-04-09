#include "cgm.h"

int main() {
    vec2 a = vec2(1,2);

    if (!(a != vec2(3,2))) return 1;
    return 0;
}