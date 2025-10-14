#include<stdio.h>
#include<string.h>

struct student
{
   char name[50];
   int roll;
   int age;
};

int main(){
    struct student s1;
    
    strcpy(s1.name,"Anurag");
    s1.roll=123;
    s1.age=18;
    printf("Name= %s\n",s1.name);
    printf("roll= %d\n",s1.roll);
    printf("age= %d",s1.age);
}