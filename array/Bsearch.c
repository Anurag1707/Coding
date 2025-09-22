#include<stdio.h>
int Bsearch(int a[5]){
    int s=0;
    int e=4;
    int t=4;
    while(s<=e){
        int mid=(s+e)/2;
        if(a[mid]==t){
            return mid;
        }else if(a[mid]<t){
            s=mid+1;
        }else{
            e=mid-1;
        }
    }
    return -1;
}
int main(){
    int a[5]={1,2,3,4,5};
    int n= Bsearch(a);
    printf("%d",n);
}