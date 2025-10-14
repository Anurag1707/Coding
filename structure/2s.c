#include<stdio.h>
#include<string.h>

struct address
{
    int pinCode;
};

struct student
{
   char name[50];
   int roll;
   int age;
   struct address s2;
  
   
};

int main(){
    struct student s1;
    
    strcpy(s1.name,"Anurag");
    s1.roll=123;
    s1.age=18;
    s1.s2.pinCode=48004;

    printf("Name= %s\n",s1.name);
    printf("roll= %d\n",s1.roll);
    printf("age= %d\n",s1.age);
    printf("Pin= %d",s1.s2.pinCode);
}