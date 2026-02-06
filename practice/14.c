#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30};
    int *p = arr;   // array name is address of first element

    for(int i = 0; i < 3; i++) {
        printf("arr[%d] = %d\n", i, *(p + i));
    }

    return 0;
}
