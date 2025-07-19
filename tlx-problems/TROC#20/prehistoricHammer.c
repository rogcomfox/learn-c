#include <stdio.h>
#include <math.h>
int main(){
    int x, y;
    scanf("%d %d", &x, &y);
    if(x>=1 && y>=1 && x <= 10000 && y <= 10000){
        if(x - y > 0){
            printf("YES");
        }
        else {
            printf("NO");
        }
    }
    return 0;
}