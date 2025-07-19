#include <stdio.h>
#include <regex.h>

int main(){
    regex_t myRegex;
    char pass[21], comp[100];
    scanf("%s", pass);
    comp = regcomp(&myRegex, "^(?=.*[a-z])(?=.*[A-Z])(?=.*\d)(?=.*[@$!%*?&])[A-Za-z\d@$!%*?&]{8,}$", 0);
    comp = regexec(&myRegex, pass, 0, NULL, 0);
    if(comp)
}