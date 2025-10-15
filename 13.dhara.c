#include <stdio.h>
#include <math.h>

int main() {
    int N, i;
    double sum = 0.0; //double type ta ektu longer range er jonno

    printf("Enter number of terms (N): ");
    scanf("%d", &N);

    for(i = 1; i <= N; i++) {
        int denom = 2 * i + 1;  // Generates 3, 5, 7, 9, ...
        sum += 2.0 / pow(denom, 3);
    }

    printf("Sum of the series = %.6lf\n", sum); //6 ghor ektu tulanomulok long eijonno float..
    //..na diye double use kora hoise

    return 0;
}
