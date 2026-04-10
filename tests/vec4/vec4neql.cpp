#include "cgm.h"

int main() {
    vec4 a = vec4(1,2,3,1);

    if (!(a != vec4(1,3,3,1))) return 1;
    return 0;
}