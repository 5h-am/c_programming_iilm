#include<stdio.h>

int main() {
    int n, a=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while (n)
        {
        a = (a*10) + n%10;
        n /= 10;
        }
    printf("Reverse value is %d",a);
    return 0;
}
