#include <stdio.h>
#include <math.h>

int isPrime(int n){
    if(n<=1){
        return 0;
    }
    if(n==2 || n==3){
        return 1;
    }
    if (n % 2 == 0 || n % 3 == 0){
        return 0;
    }
    for (int i = 5; i <= sqrt(n); i = i + 6){
        if (n % i == 0 || n % (i + 2) == 0){
            return 0;
        }
    }
    return 1;
}

int main(){
    int n;
    scanf("%d", &n);
    if(n>=1 && n<=100){
        if(isPrime(n) == 1 && n < 7){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
    return 0;
}