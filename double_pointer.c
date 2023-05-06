#include <stdio.h>

void main() {
    char *ptrArray[2];
    char **ptrptr;
    int i;

    ptrArray[0] = "Korea";
    ptrArray[1] = "Seoul";

    ptrptr = ptrArray;
    printf("\n ptrArray[0]의 주소 (&ptrArray[0]) = %u(%%u)", &ptrArray[0]);
    printf("\n ptrArray[0]의 값 (ptrArray[0]) = %u(%%u)", ptrArray[0]);
    printf("\n ptrArray[0]의 참조값 (*ptrArray[0]) = %c(%%c)", *ptrArray[0]);
    printf("\n prtArray[0]의 참조 문자열(*ptrArray[0]) = %s(%%s) \n", *ptrArray);

    printf("\n ptrArray[1]의 주소 (&ptrArray[1]) = %u(%%u)", &ptrArray[1]);
    printf("\n ptrArray[1]의 값 (ptrArray[1]) = %u(%%u)", ptrArray[1]);
    printf("\n ptrArray[1]의 참조값 (*ptrArray[1]) = %c(%%c)", *ptrArray[1]);
    printf("\n ptrArray[1]의 참조 문자열 (*ptrArray[1]) = %s(%%s) \n", *(ptrArray + 1));

    printf("\n ptrptr의 주소(&ptrptr) = %u(%%u)", &ptrptr);
    printf("\n ptrptr의 값 (ptrptr) = %u(%%u)", ptrptr);
    printf("\n ptrptr의 1차 참조값 (*ptrptr) = %u(%%u)", *ptrptr);
    printf("\n ptrptr의 2차 참조값 (**ptrptr) = %c(%%c)", **ptrptr);
    printf("\n ptrptr의 2차 참조 문자열 (**ptrptr) = %s(%%s)", *ptrptr);

    printf("\n\n *ptrArray[0] : ");
    for (i = 0; i < 5; i++)
        printf("%c", *(ptrArray[1] + i));
    printf("\n **(ptrptr + 1) : ");
    for (i = 0; i < 5; i++)
        printf("%c", *(*(ptrptr + 1) + i));
    
    getchar();
}