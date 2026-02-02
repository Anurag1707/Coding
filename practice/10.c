#include<stdio.h>
int main(){
    int x=5;
    int *a=&x;
    printf("\n%d",x);
    printf("\n%d",&x);
    printf("\n%d",a);
    printf("\n%d",*a);
}