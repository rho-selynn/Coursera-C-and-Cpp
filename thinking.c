#include <stdio.h>
int foobar(int*n){
    *n = *n + 1;
    return *n;
}

int main(void){
    /*int i = 0, j = 1, k =2;
    printf("%d\n", !!i); // prints 0
    printf("%d\n", !i); // prints 1
    printf("%d\n", i || !k); // prints 0
    printf("%d", (i && (j=k)) || (k>j)); // prints 1
    */
    int k = 6;
    printf("foobar(k) = %d\n", foobar(&k));
    printf("k = %d\n", k);
    {
        int k = 12;
        printf("%d\n", k);
    }
    int p = 7, q = 91, r;
    if ((r = p % q) == 0)
        return q;
        printf("%d\n", r);
    printf("%d\n", q % p);

    int data[5] = {0, 1, 2, 3, 4}, sum = 0, i;
    for (i = 0; i < 5; i++)
        sum = sum + data[i];
    printf("%d\n", sum);
}


