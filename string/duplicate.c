#include<stdio.h>
#include<string.h>
int main(){
    char name[]="madam";
    int i,j;
    for(i=0;name[i]!='\0';i++){
        for(j=0;j<i;j++){
            if(name[i]==name[j]){
                break;
            }
        }
            if(i==j){
                for(j=i+1;name[j]!='\0';j++){
                    if(name[i]==name[j]){
                        printf("%c\n",name[j]);
                        break;
                    }
                }
            }
        
    }

}

