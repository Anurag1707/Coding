#include <stdio.h>
int main()
{
     int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<3;i++){
        for(int j=2;j>=0;j--){
            if(i==0){
                printf(" %d",a[i][j]);
                
            }else if(i==1){
                printf(" %d",a[i][j]);
               
            }else{
                printf(" %d",a[i][j]);
                
            } 
        }printf("\n"); 
    }
    
}