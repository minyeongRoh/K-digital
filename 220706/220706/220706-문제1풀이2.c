#include<stdio.h>
int main()
{
	//2.
	char sentense1[1024];
	char sentense2[1024];
	printf("문자열1 입력");
	gets(sentense1);
	printf("문자열2 입력");
	gets(sentense2);

	int i = 0;//for 바깥으로 뺌
	for (int i = 0; sentense1[i] != '\0' && sentense2[i] != '\0'; i++)
	{
		if (sentense1[i] != sentense2[i])
		{
			i = -1;
			printf("이 문장은 다릅니다.\n");
			break;
		}
	}
	if (i != -1)
		printf("둘은 똑같다. %s %s\n", sentense1, sentense2);






	return 0;
}