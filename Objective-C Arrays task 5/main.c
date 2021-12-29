#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Vvedite dlinu massiva:");
    int N = 0, c = 0;
    scanf("%d", &N);
    if (N>100) {
        printf("Error");
        return 0;
    }

    int A[N];

    for (int i = 0; i < N; ++i) {
        printf("Vvedite chislo:");
        scanf("%d", &A[i]);
    }

    for (int i = 0; i < N; ++i) {
        printf("%d ", A[i]);
    }
    printf("\n");
    for (int i = 0; i < N; i++) {
      if (A[i] < A[N - 1] && A[i] > A[0]) {
        c = 1;
      }
    }
    printf("\n");
    if (c==0) {
      printf("0");
    }
    else {
      printf("1");
    }



    getchar(); getchar();
    return 0;
}