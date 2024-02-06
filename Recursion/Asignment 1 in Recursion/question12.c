#include <stdio.h>
int sum_of_digits(int n){
    if(n<0){
        return (-(n));
    }
    if(n<=9){
        return n;
    }
    return n%10+sum_of_digits(n/10);
}

int main() {
    int x;
    scanf("%d",&x);
    int r=sum_of_digits(x);
    printf("%d",r);
    

    return 0;
}