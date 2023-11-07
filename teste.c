#include <stdio.h>

void solution(int N) {
 int enable_print = 0; // Initialize to 0
    while (N > 0) {
        if (enable_print == 0 && N % 10 != 0) {
            enable_print = 1;
        }
        if (enable_print == 1) {
            printf("%d", N % 10);
        }
        N = N / 10;
    }
}

int main(){
    solution(1230);

    return 0;
}