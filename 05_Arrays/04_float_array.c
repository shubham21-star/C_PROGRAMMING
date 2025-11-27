#include <stdio.h>
int main() {
    float a[5] = {1.1, 2.2, 3.3, 4.4, 5.5};

    for(int i = 0; i < 5; i++) {
        printf("%.1f ", a[i]);
    }
    return 0;
}
