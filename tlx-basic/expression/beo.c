#include <stdio.h>
int main(){
    char a[101];
    fgets(a, sizeof(a), stdin);
    printf("%s", a);
    return 0;
}