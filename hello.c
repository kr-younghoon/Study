#include <stdio.h>

/**
 * @fn		main(void)
 * @date	2023-04-28
 * 
 * @brief	모두의 코드 : 7. 뱅글 뱅글(for, while)	: 문제 2
 * @detail	N 줄인 역삼각형을 출력한다. 단, 사용자로 부터 임의의 N 을 입력 받는다.
 * 
 * @param	void
 * @return	0 (고정 값)
 *	
 * @version	23.04.28	: 1.0.0		: 코드 생성
 */
int main(void) {
	/* 변수 선언 */
	unsigned int uiColumn = true;  // 행 개수를 셀 변수
	unsigned int uiSpaceNum = true;  // 공백 문자 출력 개수를 셀 변수
	unsigned int uiStarNum = true;  // '*' 문자 출력 개수를 셀 변수
	unsigned int uiUserInput = 0;  // 사용자가 입력한 역삼각형 크기를 저장할 변수

	/* 역삼각형 크기 입력 받음 */
	printf("만들 역삼각형의 크기를 입력하세요(1 ~ 4294967295 사이의 정수) : ");
	scanf_s("%u", &uiUserInput);

	/* 사용자 입력 검사 */
	if (uiUserInput)
	{
		/* 입력받은 크기 만큼 출력할 행 개수 설정 */
		for (uiColumn = 0; uiColumn < uiUserInput; uiColumn++)
		{
			/* 좌측 공백 출력 */
			for (uiSpaceNum = 0; uiSpaceNum < uiColumn; uiSpaceNum++)
			{
				printf(" ");
			}

			/* '*' 출력 */
			for (uiStarNum = uiColumn; uiStarNum < ((2 * uiUserInput - 1) - uiColumn); uiStarNum++)
			{
				printf("*");
			}

			/* 1개 행 출력 후 개행 */
			printf("\n");
		}
	}
	else
	{
		/* 숫자가 아니거나 0 입력 시 아래 문구 출력 */
		printf("잘못 입력하셨습니다. 프로그램을 종료합니다.\n");
	}

	/* 출력 완료 시 리턴 후 종료 */
	return 0;
}