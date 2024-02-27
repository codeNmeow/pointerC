#include <stdio.h>

int main(){

    int n;
    int *ptr = &n;
    printf("enter: ");
    scanf("%d", &n);
    printf("printed= %d \n",n);
    printf("address: %p", &n );
    printf("\n &PTR address: %p", &ptr);
    printf("\nPTR *& address: %p", *&ptr);
    printf("\nPTR : %p", ptr);
    printf("\n*PTR : %d", *ptr);

    return 0;
} 