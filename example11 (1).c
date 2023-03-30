//Write a program to accept a number from user and
// print it's square & cube in c language

#include <stdio.h>
int main(){
    int n,square ,cube;
    printf("Enter Number :");
    scanf("%d",&n);
    square=n*n;
    cube=n*n*n;
    printf("\n square : %d \n cube : %d",square ,cube );
    return 0;
}