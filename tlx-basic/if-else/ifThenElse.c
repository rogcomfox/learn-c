#include <stdio.h>
int main(){
    int i;
    scanf("%d", &i);
    if(i>0){
        printf("positif");
    }
    else if(i == 0){
        printf("nol");
    }
    else {
        printf("negatif");
    }
    return 0;
}