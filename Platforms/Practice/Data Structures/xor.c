#include<stdio.h>

int main() {
    int a = 56;
    int b = 78;

    a = a^b;
    b = a^b;
    a = a^b;
    printf("%d %d\n",a,b);
}