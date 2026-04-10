#include "cgm.h"

int main() {
    vec4 a = vec4(1,1,1,1);
    vec4 b = vec4(2,2,2,2);

    if (dot(a,b) != 8) return 1;
    return 0;
}