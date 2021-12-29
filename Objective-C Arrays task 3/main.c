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
    printf("\n");
    for (int i = 0; i < N; ++i) {
      if (A[i] % 2 == 0) {
        printf("%d", A[i]);
        printf(" ");
      }
    }
    for (int i = 0; i < N; ++i) {
      if (A[i] % 2 != 0) {
        printf("%d", A[i]);
        printf(" ");
      }
    }

    return 0;
}