#include "cgm.h"

int main() {
    mat4 a = scale(2,2,2);
    mat4 b = scale(3,3,3);

    if (a*b != scale(6,6,6)) return 1;
    a *= b;
    if (a != scale(6,6,6)) return 1;
    return 0;
}