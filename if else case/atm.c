#include<stdio.h>
int main()
{
    int a,amount,balance,pin;
    

    printf("\nWelcome To The ATM machine ");
    printf("\nEnter your pin to verify your account\n");
    scanf("%d",&pin);
    switch(pin)
    {
        case 1234:
           printf("\nYour account is verified\n");
        printf("\n1.check your balance\n2.withdraw cash\n");
        scanf("%d",&a);
         switch(a)
        {
            case 1:printf("\nyour balance =20000"); 
                   break;
            case 2:
                   printf("\nenter amount you want to withdraw");
                   scanf("%d",&amount);
                   if(20000>amount)
                   {
                   printf("\nSucessfully withdrawal!!");
                   }
                   else
                   {
                    printf("\nBalance not exist");
                   }
                   break;
        }
    
        break;

        default: printf("Wrong password");
    }

    
        
    
    

    }
