#include <stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int res = a / b;
    int mod = a % b;
    printf("masing-masing %d\n", res);
    printf("bersisa %d\n", mod);
    return 0;
}