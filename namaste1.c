#include <stdio.h>
void namaste();
void bonjour();

int main(){
printf("Enter i for you (indian) and f for you (french) ");
char ch;
scanf("%d",&ch);
if(ch=='i'){
    namaste();
}
else{
    bonjour();
}




    return 0;
    
}
void namaste(){
    printf("Namste");
}
void bonjour(){
    printf("Bonjour");
}