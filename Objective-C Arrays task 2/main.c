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
    for (int i = 0; i < N; ++i) {
      for (int j = N; j >= 0; --j) {
        if (A[i] == A[j]) {
          c++;
        }
      }
    }

    if (c == 2*N) {
        printf("Polindrom");
    }
    else {
        printf("Ne polindrom");
    }


    getchar(); getchar();
    return 0;
}
