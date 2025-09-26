#include<stdio.h>
int main(){
    int a[]={1,2,3,4,5};
    int msum=1;
    int wsum;
    int n=sizeof(a)/4;
    int k=2;
    for(int i=0;i<k;i++){
        wsum+=a[i];
    }
    for(int i=k;i<n;i++){
        wsum+=a[i]-a[i-k];
        if(wsum>msum){
            msum=wsum;
        }
    }printf("%d",msum);
}