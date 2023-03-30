#include<stdio.h>
int main(){
    int a1,b1;
    printf("enter the first number");
    scanf("%d",&a1);
    printf("enter the second number");
    scanf("%d",&b1);
    switch(a1>=b1){
        case 1:
        printf("Number1 greater then equle to Number2");
        scanf("%d",&a1);
    }
        switch(a1<=b1){
        case 1:
        printf("Number1 less then equle to Number2");
        scanf("%d",&b1);

    }
    return 0;
}