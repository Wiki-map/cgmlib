#include "cgm.h"

int main() {
    vec3 a = vec3(1,2,3);
    vec3 b = vec3(2,3,4);

    if (dot(a,b) != 20) return 1;
    return 0;
}