#include<stdio.h>
#include<string.h>
int main(){
    int arr[6]={-3,4,6-7,-9,9};
    int a[3];
    int b[3];
    int c[6];
    for(int i=0;i<6;i++){
        if(arr[i]<0){
            a[i]=arr[i];
        }else{
            b[i]=arr[i];
        }      
    }
    for(int i=0;i<3;i++){
        c[i]=a[i];
    }
    for(int i=3;i<6;i++){
        c[i]=b[i];
    }
    for(int i=0;i<6;i++){
        printf("\n%d",c[i]);
    }
}