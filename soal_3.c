#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <stdbool.h>

bool cekPrima(int N) {
    if (N <= 1) {
        return false;
    }

    
    for (int i = 2; i * i <= N; i++) {
        if (N % i == 0) {
            return false; 
        }
    }

    return true;
}

int main() {
    int N;

    scanf("%d", &N);
   
    if (cekPrima(N)) {
        printf("PRIMA", N);
    } else {
        printf("BUKAN", N);
    }

return 0;
}
