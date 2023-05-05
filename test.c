#include <stdio.h>
#include <stdlib.h>

int main(){
    int times;
    int *arr;

    // 버퍼 비우기
    while (getchar() != '\n');

    scanf("%d", &times);

    arr = (int *)malloc(sizeof(int)*times);
    int input_a, input_b;
    int first=0, rear=0;

    for(int i = 0; i < times; i++){
        printf("in(0) / out(1) : ");
        scanf("%d", &input_a);

        if(input_a == 0)
        {
            printf("insert : ");
            scanf("%d", &input_b);
            arr[rear] = input_b;
            rear++;
        }
        else
        {
            printf("pop : %d\n", arr[first]);
            first++;
        }
    }

    free(arr);
    return 0;
}
