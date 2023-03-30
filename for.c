#include <stdio.h>
int main(){
    char days [7][12]={"sun","mon","tue","wed","thu","fri","sat"};
    for (int i=0;i<=6;i++){
    printf("%s \t",days[i]);
    }
    return 0;
}