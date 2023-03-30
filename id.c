#include<stdio.h>
int main(){
    int id;
    int password;
    printf("enter your id ");
    scanf("%d",&id);
   
    switch(id){
        case 1:
        printf("enter your password");
        scanf("%d",&password);
   
switch(password){
       case 2:
            printf("login in success");
            break;

        default:
           printf("enter your wrong password");
           break;
        } 
break;
    default:
    printf("enter your worng id");
    }
    
        return 0;
    }

