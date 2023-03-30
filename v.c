#include<stdio.h>
int main(){
 char op;
 int a,b,c;
 
 printf("enter op +,-,/,*");
 scanf("%c %d %d",&op,&a,&b);
 switch(op){
    case'+':
    c=a+b;
    printf("add%d",c);
 break;
case'-':
c=a-b;
    printf("sub%d",c);
    
    break;
      case'*':
       c=a*b;
    printf("mul%d",c);
   
    break; 
     case'/':
     c=a/b;
    printf("div%d",c);
    
    break;
 }
   return 0; 

}