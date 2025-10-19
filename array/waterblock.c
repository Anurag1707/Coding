#include<stdio.h>
int main(){
  int arr[]={0,1,0,2,1,0,1,3,2,1,2,1};
   int rmax[12];
   int lmax[12];
   int max=0;
   for(int i=0;i<11;i++){
    
    if(max<arr[i]){
        max=arr[i];
    }
      rmax[i]=arr[i]>max?arr[i]:max;
      
    //   printf("%d ",rmax[i]);
   }
   max=0;
   for(int i=11;i>=0;i--){
    if(max<arr[i]){
        max=arr[i];
    }
      lmax[i]=arr[i]>max?arr[i]:max;
      // printf("%d ",lmax[i]);
   }
//    for(int i = 0;i<12;i++){
//     printf("%d ",lmax[i]);
//    }
   int trapWater=0;
   for(int i=0;i<12;i++){
    int min = lmax[i]>rmax[i]?rmax[i]:lmax[i];
    // printf("%d ",min);
    trapWater = trapWater + min - arr[i];
   }
   printf("%d",trapWater);

}