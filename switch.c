#include <stdio.h>
int main(){
    int num;
    printf("enter any num");
        scanf("%d",&num);

// switch(num>0){

// case 1:
// printf("Positive");

// break;
// }

// switch(num<0){

// case 1 :
// printf("Negative");

// break;
// }



// switch(num==0){
// case 1:
//     printf("Number is ZERo");
// }




switch(num){

case 1 || 2 || 3 || 4:
printf("Positive");

break;


case (2):
printf("Negative");

break;



default:
    printf("Number is ZERo");
}








return 0;
}