#include<stdio.h>
int main(){
    // int a[]={12,-1,-7,8,-15,30,16};
    // int n=sizeof(a)/4;
    // int k=2;
    // for(int i=0;i<n-k;i++){
    //     int found=0;
    //     for(int j=i;j<i+k;j++){
    //         if(a[j]<0){
    //             printf("%d",a[j]);
    //             found=1;
    //             break;
    //         }
    //     }if(!found){
    //         printf("0");
    //     }
    // }
   

    int a[]={1,3,-1,-3,5,3,6,7};
    int n=sizeof(a)/4;
    int k=2;
    for(int i=0;i<=n-k;i++){
        int max=a[i];
        for(int j=1;j<k;j++){
            if(a[i+j]>max){
                max=a[i+j];
            }
            printf("%d ",max);
        }
    } 
   printf("\n");
}