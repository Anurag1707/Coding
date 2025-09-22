#include<stdio.h>
int main(){
    //
    int a[5]={5,1,2,8,4};
    int temp;
    int i=0;
    for( i=0;i<5-1;i++){
        for(int j=0;j<5-1-i;j++){
        if(a[j]>a[j+1]){
            temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
        }
        
    }
    }
    for(int k=0;k<5;k++){
        printf("%d",a[k]);
    }
}