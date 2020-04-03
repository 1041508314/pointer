#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5 };
//	short *p = (short*)arr;
//	int i = 0;
//	for (i = 0; i<4; i++)
//	{
//		*(p + i) = 0;
//	}
//
//	for (i = 0; i<5; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}
//#include <stdio.h>
//int main()
//{
//	int a = 0x11223344;
//	char *pc = (char*)&a;
//	*pc = 0;
//	printf("%x\n", a);
//	return 0;
//}
//
//#include <stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
//	int* p = arr;
//	for (int i = 0; i < 10; i++){
//		printf("%d ", *(p + i));
//	}
//	system("pause");
//	return 0;
//}



#include<stdio.h>
#include<stdlib.h>
//#include<string.h>
//int main() 
//{
//    char str[1000] ; 
//	scanf("%1000s", &str);
//   
//    int size = strlen(str);
//    char* p = str;
//    int a = size / 2;
//    int b = 0;
//    int i = 0;
//    for (i; i < a; i++) 
//	{
//       int tmp;
//       tmp = *(p + i);
//       *(p + i) = *(p + size - 1 - i);
//       *(p + size - 1 - i) = tmp;
//    }
//    puts(str);
//    system("pause");
//    return 0;
//}

//#include<stdio.h>
//#include<string.h>
//main()
//{
//	char a[10]; int i, j;
//	scanf("%s", a);
//	j = strlen(a);
//	for (i = j - 1; i >= 0; i--)
//		printf("%c", a[i]);
//	printf("\n");
//	return 0;
//}


//void Reverse(char* str)
//{
//	char* left = str;
//	char* right = str + strlen(str) - 1;
//	while (left < right)
//	{
//		char temp = *left;
//		*left = *right;
//		*right = temp;
//		++left;
//		--right;
//	}
//}

//
//int main()
//{
//	char str[] = "hello bit";
//	//在这里完成下面函数，参数自己设计，要求：使用指针
//	Reverse(str);
//	return 0;
//}


//#define _CRT_SECURE_NO_WARNINGS 1
//
//#include<stdio.h>
//#include<stdlib.h>
//int main()
//{
//	int i, m;
//	int Sn = 0, temp = 0;
//	scanf("%d", &m);
//	for (i = 1; i <= 5; i++)
//	{
//		temp = temp * 10 + m;				
//		Sn += temp;							
//	}
//	printf("Sn=%d\n", Sn);
//
//	system("pause");
//	return 0;
//}



//#include<math.h>
//int main()
//{
//	int i = 0;
//	for (i = 0; i <= 1000000; i++)
//	{
//		int n = 1;
//		int sum = 0;
//		int tmp = i;
//		while (tmp / 10)
//		{
//			n++;
//			tmp /= 10;
//		}
//		tmp = i;
//		while (tmp)
//		{
//			sum += pow(tmp % 10, n);
//			tmp /= 10;
//		}
//		if (sum == i)
//		{
//			printf("%d ", i);
//		}
//	}
//    return 0;
//}
//


//#include <stdio.h>
//#include <stdlib.h>
//void PrintPattern() 
//{ 
//	for (int i = 0; i < 7; i++) 
//	{
//		for (int j = 0; j < 7 - i; j++) 
//		{
//			printf(" ");
//		}
//		for (int k = 0; k < 2 * i + 1; k++) 
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	for (int l = 1; l <= 6; l++) {
//		for (int m = 0; m < l + 1; m++) 
//		{
//			printf(" ");
//		}
//		for (int n = 0; n < 13 - l * 2; n++) 
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//}
//int main() 
//{
//	PrintPattern();
//	return 0;
//}

void Reverse(char* str)
{
	char* left = str;
	char* right = str + strlen(str) - 1;
	while (left < right)
	{
		char temp = *left;
		*left = *right;
		*right = temp;
		++left;
		--right;
	}
	printf("%s\n", str);
}


int main()
{
	char str[] = "nishizhu 123";
	Reverse(str);
	return 0;
}