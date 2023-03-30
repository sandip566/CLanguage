#include<stdio.h>
int main(){
    int a;
    printf("enter the hour");
    scanf("%d",&a);
    switch(a>=6&&a<=12){
        case 1 :
        printf("good morning");
        break
    }
    switch( a>=12&&<=17){
     case 1:
     printf("good afternune");
     break;
}
switch( a>=17&&<=21){
     case 3 :
     printf("good evening");
     break;
}
switch( a>=21&&<=24){
     case 4:
     printf("good night");
     break;
         }
         return 0;
}