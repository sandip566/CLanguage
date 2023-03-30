#include<stdio.h>
int main(){
int month;
 printf("enter month");
 scanf("%d", &month) ;

 switch(month){
    case 1:
    printf("jan 31 day");
    break;

  case 2:
    printf("fab 30 day");
    break;
  case 3:
    printf("mar 31 day");
    break;

  case 4:
    printf("apr 30 day");
    break;

  case 5:
    printf("may 31 day");
    break;

  case 6:
    printf("jun 30 day");
    break;

  case 7:
    printf("july 31 day");
    break;
  case 8:
    printf("aug 30 day");
    break;

  case 9:
    printf("sep  31 day");
    break;

  case 10:
    printf("oct 30 day");
    break;

  case 11:
    printf("nov 31 day");
    break;

  case 12:
    printf("dec 30 day");
    break;
 } 
 return 0;
}