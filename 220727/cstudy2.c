#include<stdio.h>
//선생님 풀이
void season()
{
	int month;
	printf("몇월생?");
	scanf_s("%d", &month);
	if (month == 12 || month == 1 || month == 2)
		printf("겨울\n");
	else if (month == 3 || month == 4 || month == 5)
		printf("봄\n");
	else if (month >= 6 && month <= 8)
		printf("여름\n");
	else if (month >= 9 && month <= 11)
		printf("가을\n");
	else
		printf("오류\n");
}

int main()
{
	season();
	return 0;
}