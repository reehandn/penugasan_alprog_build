#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void bubbleSort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int N;


    scanf("%d", &N);

    int nilai[N];


    for (int i = 0; i < N; i++) {
        scanf("%d", &nilai[i]);
    }


    bubbleSort(nilai, N);


    for (int i = 0; i < N; i++) {
        printf("%d\n", nilai[i]);
    }

return 0;
}
