#include <stdio.h>
int main(){
    int i;
    scanf("%d", &i);
    if (i > 0){
        if (i % 2 == 0){
            printf("%d",i);
        }
    }
    
    return 0;
}