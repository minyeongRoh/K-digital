#include<stdio.h>
//������ Ǯ��
void printmonth(int month)
{
	switch (month)
	{
	case 12:
	case 1:
	case 2:
		printf("�ܿ�\n");
		break;
	case 3:
	case 4:
	case 5:
		printf("��\n");
		break;
	case 6:
	case 7:
	case 8:
		printf("����\n");
		break;
	case 9:
	case 10:
	case 11:
		printf("����\n");
		break;

	default:
		printf("����\n");
		break;
	}
}
int main()
{
	int month;
	printf("q3:���?");
	scanf_s("%d", &month);
	printmonth(month);
	return 0;
}