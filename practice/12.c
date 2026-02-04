#include <stdio.h>

int main() {
    int a = 10;
    int *p;      // pointer declaration

    p = &a;      // store address of a

    printf("Value of a = %d\n", a);
    printf("Address of a = %p\n", &a);
    printf("Value stored in pointer p = %p\n", p);
    printf("Value at address p = %d\n", *p);  // dereferencing

    return 0;
}
