#include<stdio.h>

int main(){
    int a[5]={1,-3,4,-32,4};
    int maxSum=0;
    for(int i=0;i<5;i++){
        int currSum=0;
        for(int j=i;j<5;j++){
            currSum=currSum+a[j];
              if(currSum>maxSum){
            maxSum=currSum;
            }
        }
    }
    printf("%d",maxSum);

}