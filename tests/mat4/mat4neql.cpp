#include "cgm.h"

int main() {
    mat4 b = mat4(
        1,0,0,2,
        0,1,0,2,
        0,0,1,2,
        0,0,0,1
    );

    if (!(b != translate(2,3,2))) return 1;
    return 0;
}