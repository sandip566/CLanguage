#include <stdio.h>
int main(){
    int a,b;
    printf("Enter your first num");
    scanf("%d",&a);
    printf("Enter your second num");
    scanf("%d",&b);
    int c;
    c=a;
    a=b;
    b=c;
    printf("after swaping a %d\n",a);
    printf("after swaping b %d\n",b);
    return 0;
}