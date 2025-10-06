#include<stdio.h>
#include<string.h>

// int main(){
//     char name[]="hiii";  // '\0 automatically add hoga ye
//     for(int i=0;name[i]!='\0';i++){
//     printf(" %c",name[i]);
//     }
//     return 0;
// } 

// int main(){
//     char name[]={"hiii"};
//     int i=0;
       
//     while(name[i]!='\0'){
//         printf("%c\n",name[i]);
//         i++;
//     }
// }  

// int main(){
//     char name[]="hiii";
//     int i=0;
//     int ln= strlen(name);
//     printf("%d",ln);
// }


int main(){
    char name[]="hiii";
    char data[10];

    for(int i=0;name[i]!='\0';i++){
        data[i]=name[i];
    }
    for(int i=0;name[i]!='\0';i++){
        printf("%c ",data[i]);
    }
}