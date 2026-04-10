#include "cgm.h"

int main() {
    vec3 a = vec3(1,2,2);

    a.normalize();

    if (a != vec3(1.0f/3.0f,2.0f/3.0f,2.0f/3.0f)) return 1;
    return 0;
}