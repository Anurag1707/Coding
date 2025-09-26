#include <stdio.h>
int main(){
//      int a[5]={1,2,3,4,5};
//     for(int i=0;i<5;i++){
//         printf("%d",a[i]);
//     }

    // int a[5]={1,2,3,4,5};
    // for(int i=4;i>=0;i--){
    //     printf("%d",a[i]);
    // }



    // int a[5]={1,2,3,4,5};
    // int sum=0;
    // for (int i=0;i<5;i++){
    //     sum=sum+a[i];
    // }
    // printf("%d",sum);



    // int a[5]={10,40,50,69,25};
    // int max=0;
    // for(int i=0;i<5;i++){
    //     if(max<a[i]){
    //         max=a[i];
    //     }
    // }
    //     printf("%d",max);


        //  int a[5]={10,40,50,69,25};
        //  int i;
        //  int min=a[0];
        //  for( i=0;i<5;i++){
        //     if(min>a[i]){
        //         min=a[i];
        //     }
        //  }
        //  printf("%d",min);

   
      int a[5];
      for(int j=0;j<5;j++){
        scanf("%d",&a[5]);
      }
      int max=0;
      for(int i=0;i<5;i++){
           if(a[i]<a[i+1]){
            max=a[i+1];
           }
      }  printf("%d",max);
    
}