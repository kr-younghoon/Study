#include <stdio.h>

int main () {
    int n;
    int sum = 1;
    int i;

    // 변수 선언
    n = 5;

    for (i = 1; i <= n; i++) {
        sum = sum * i;
    }
    printf("%d", sum);
    return 0;
}