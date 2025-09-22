#include<stdio.h>
int sum(int *a,int *b){
    *a=20;
    *b=10;
    int sum= *a + *b;
    return sum;
}
int main(){
    int a=5,b=10;
    int data= sum(&a,&b);
    printf("%d",data);
    printf("\n%d",a+b);
}