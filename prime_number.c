#include <stdio.h>

int isprime (int n) {
    for(int x = 2; x < n; x++) {
        if (n %x == 0) {
            return 0;
        }
        return 1;
    }
}

int main () {
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    if (isprime(n)) {
        printf("%d is a Prime Number", n);
    } else {printf("%d is not a Prime Number", n);}
    printf("\n");
    return o;

}