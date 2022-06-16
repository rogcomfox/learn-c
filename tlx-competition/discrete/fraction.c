#include <stdio.h>
#include <math.h>

long long gcm(long long a, long long b){
    long long gcm, remainder;
    while(a != 0){
        remainder = b % a;
        b = a;
        a = remainder;
    }
    gcm = b;
    return gcm;
}

int main(){
    long long a, b, c, d, e, f;
    scanf("%lld %lld", &a, &b);
    scanf("%lld %lld", &c, &d);
    e = (a * d) + (b * c);
    f = b * d;
    long long newE = e / gcm(e, f);
    long long newF = f / gcm(e, f);

    printf("%lld %lld", newE, newF);
    return 0;
}