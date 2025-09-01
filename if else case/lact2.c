// #include<stdio.h>
// int main()
// {
//     int a;
//     int b; 
//     printf("Enter two no.");
//     scanf("%d %d",&a, &b);

//    if (a>75 && m>85){
//     printf("Grade A");
//    }else if(a>75 && m<=85 && m>75){
//     printf("Grade B");
//    }else if(a>60 && m<=75 && m>65){
//     printf("Grade C");
//    }
//     return 0;
// }

#include <stdio.h>
int main(){



    int m;
    printf("enter a marks of student");
    scanf("%d",&m);

    if(m>85){
        printf("Grade A");
    }
    else if(m<=85 && m>=75)
    {
        printf("Grade B");
    }
        else if(m<75 && m>=65)
         {
            printf("Grade C");
         }
         else if(m<65 && m>=30)
          {
            printf("Grade D");
          }
          else if(m<30)
           {
            printf("Fail hai aap!!");
           }
            else{
                printf(" End");
            }
    return 0;
}
    
   
   
    
    

