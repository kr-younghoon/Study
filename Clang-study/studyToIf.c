#include <stdio.h>

int main() {
    int input;

    printf("my pet \n");
    printf("무엇을 할꺼야?\n");
    printf("1. EAT\n");
    printf("2. CLEAN\n");
    printf("3. SLEEP\n");

    scanf("%d", &input);

    if (input == 1) {
        printf("아이 맛있어 \n");
    } else if (input == 2) {
        printf("아이 시원해 \n");
    } else if (input == 3) {
        printf("zzz \n");
    } else {
        printf("무슨 명령인지 못알아 듣겠어 왈왈");
    }
    return 0;
}