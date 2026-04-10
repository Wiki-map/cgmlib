#include "cgm.h"

int main() {
    vec4 a = vec4(1,1,1,1);
    a.normalize();

    if (a != vec4(1.0f/2.0f,1.0f/2.0f,1.0f/2.0f,1.0f/2.0f)) return 1;
    return 0;
}