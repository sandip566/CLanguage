#include<stdio.h>
int main(){
    int age;
    printf("enter the your age");
    scanf("%d",&age);
    switch(age>18){
        case 1:
        printf(" not elagible to vote");
        break;
    }
        switch(age <18){
            case 0:
            printf(" elagible to vote");
            break;
            default:
            printf("invalid input");
            break;
        }
    
    
    return 0;
}