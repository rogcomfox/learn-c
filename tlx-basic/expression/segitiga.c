#include <stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    float res = (float) (a * b) / 2;
    printf("%.2f", res);
    return 0;
}