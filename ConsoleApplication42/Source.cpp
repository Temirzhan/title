#include<stdio.h>
#include<locale.h>
#include<math.h>
#include<time.h>
#include<string>
#include"Header.h"
char f;
void main()
{
	do {
		setlocale(LC_ALL, "rus");
		int N;
		printf("������� N\n");
		scanf("%d", &N);
		switch (N)
		{
		case 1:
		{
			/*������ �������. ����� �������� ��������� ����������� ����� ��� ������������� strcpy, strlen � ������ �� ��������. ������� ������ - ������ ��������� �� ������, �������������� �����, � ��������� �� destination �������.
*/
			char *z = "���� �� ������ ��������� ������ �� ���� �� � ����\0";
			printf("�� ��� � �������� \"%s\"", z);
			char z2[51];
			for (int i = 0; i < 51; i++)
			{
				*(z2 + i) = *(z + i);
			}
			printf("�� ��� � ���������� \"%s\"", z2);
		}
			break;
		case 2:
		{
			/*������ �������: "����������" ������ ��� �����������. �� ����, ���� � ��� ���� "abcdef", �� ����� ���������� ��������� �� ������ �������� "fedcba". � �������� ������� ������ - ��������� �� ������ � ����� ��������������� strlen.
*/
			char *z = "abcdef";
			const int sctr = strlen(z)-1;
			printf("�� ��� � �������� \"%s\"", z);
			char z2[7];
			for (int j=0;j < sctr; j++)
			{
				*(z2 + j) = *(z +(sctr-j));
			}
			*(z2 + (sctr)) = '\0';
			printf("�� ��� � ���������� � �������� \"%s\"\n", z2);
		}
		break;
		}
		printf("������� f\n");
		scanf("%c", &f);
	} while (f == 'y');
}