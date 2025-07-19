#include <stdio.h>
#include <stdlib.h>

int bag[20001];

void generatePrimeNumber(){
    
}

void primeNumber(int number){
    int position[200001], pos;
    position[0] = -1, position[1] = -1;

    for(int i = 2; i <= 20000; i++){
        if (position[i] == 0)
        {
            position[i] = ++pos;
            for (int j = i * 2; j <= 20000; j += i)
                position[j] = -1;
        }
    }
    printf("%d\n", position[number]);
}

int main(){
    // int inp, i, nInput[20000], inputs;
    // scanf("%d", &nInput);
    int numInput, *input;
    scanf("%d", &numInput);

    input = malloc(numInput * sizeof(int));
    
    for (int i = 0; i < numInput; i++){
        scanf("%d", &input[i]);
    }

    for (int i = 0; i < numInput; i++){
        primeNumber(input[i]);
    }

    free(input);

    return 0;
}