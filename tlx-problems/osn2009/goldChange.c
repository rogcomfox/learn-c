#include <stdio.h>

int gold(int n){
    if(n<=11) return n;
    else return gold(n/2) + gold(n/3) + gold(n/4);
}

int main(){
    int n;
    scanf("%d", &n);
    printf("%d", gold(n));
    return 0;
}