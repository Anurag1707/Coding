#include<stdio.h>
int main()
 {
    int p=1;
    int i=2;
    int n=5;
    if(n<=1){
      printf("nahii");
    }

    
    while(i<=n){
      if(n%i==0){
        p=0;
        break;
      }
    }

    if(p)
    {
      printf("nhi h");
    }else{
      printf("hai");
    }

  }     