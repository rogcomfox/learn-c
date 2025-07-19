#include <stdio.h>
int rectCount(int n){
    return (n * (n + 1) / 2) * (2 * n + 1) / 3;
}
int main(){
    int n;
    scanf("%d", &n);
    printf("%d", rectCount(n));
    return 0;
}