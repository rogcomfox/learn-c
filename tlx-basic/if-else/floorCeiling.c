#include <stdio.h>
#include <stdbool.h>

bool isDigit(double num){
    int trunc = (int) num;
    return(num == trunc);
}

int main(){
    double num;
    scanf("%lf", &num);
    if(isDigit(num) == 1){
        printf("%d %d", (int)num, (int)num);
    }
    else {
        if(num < 0){
            printf("%d %d", (int)num-1, (int)num);
        }
        else{
            printf("%d %d", (int)num, (int)num+1);
        }
    }
    return 0;
}