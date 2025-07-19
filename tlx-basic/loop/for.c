#include <stdio.h>
int main(){
    int num, sum = 0;
    scanf("%d", &num);
    for(int i = 1; i <= num; i++){
        int temp;
        scanf("%d", &temp);
        sum += temp;
    }
    printf("%d", sum);
}