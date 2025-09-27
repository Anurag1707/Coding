#include <stdio.h>
int main()
  {
  int a[5]={1,2,3,4,-5};
    int k=2;
    int n= sizeof(a)/sizeof(a[0]);
    int windowSum=0;
    for(int i=0;i<k;i++){
        windowSum=windowSum+a[i];
    }
    int maxSum=windowSum;
    for(int j=k;j<n;j++){
        windowSum=windowSum+a[j]-a[j-k];
        if(windowSum>maxSum){
            maxSum=windowSum;
        }
    }
    printf("%d",maxSum);
}