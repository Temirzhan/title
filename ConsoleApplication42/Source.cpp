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
		printf("¬ведите N\n");
		scanf("%d", &N);
		switch (N)
		{
		case 1:
		{
			/*ѕервый вариант. Ќужно написать программу копировани€ строк без использовани€ strcpy, strlen и прочих им подобным. ¬ходные данные - только указатель на строку, оканчивающуюс€ нулем, и указатель на destination область.
*/
			char *z = "≈сли не можешь придумать ничего то флаг те в руки\0";
			printf("то что € напаисал \"%s\"", z);
			char z2[51];
			for (int i = 0; i < 51; i++)
			{
				*(z2 + i) = *(z + i);
			}
			printf("то что € скопировал \"%s\"", z2);
		}
			break;
		case 2:
		{
			/*¬торой вариант: "развернуть" строку при копировании. “о есть, если у нас есть "abcdef", то после выполнени€ программы мы должны получить "fedcba". ¬ качестве входных данных - указатель на строку и можно воспользоватьс€ strlen.
*/
			char *z = "abcdef";
			const int sctr = strlen(z)-1;
			printf("то что € напаисал \"%s\"", z);
			char z2[7];
			for (int j=0;j < sctr; j++)
			{
				*(z2 + j) = *(z +(sctr-j));
			}
			*(z2 + (sctr)) = '\0';
			printf("то что € скопировал в оборотку \"%s\"\n", z2);
		}
		break;
		}
		printf("¬ведите f\n");
		scanf("%c", &f);
	} while (f == 'y');
}