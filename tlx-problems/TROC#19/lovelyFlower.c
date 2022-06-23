#include <stdio.h>
int main(){
    int p, q;
    scanf("%d %d", &p, &q);
    if(p >= 0 && p <= 100 && q >= 0 && q <= 100){
        int c = (p*p) + (q*q) + 1;
        if(c % 4 == 0){
            printf("%d", c/4);
        } else {
            printf("%d", -1);
        }
    }
    return 0;
}