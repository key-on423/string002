#include <stdio.h>

//char* sgets(char* st, int max);
////2.编写程序读取n个字符后停止忙，或在读到一个空白，换行符是停止，哪个先遇到哪个停止
//int main()
//{
//	int max = 30;
//	printf("请输入：\n");
//	char arr[30];
//	sgets(arr, max);
//	fputs(arr, stdout);
//	return 0;
//
//}
//char* sgets(char* st, int max)
//{
//	char* ret;
//	int i = 0;
//	ret = fgets(st, max, stdin);
//	if (ret)
//	{
//		while (st[i] != '\n' && st[i] != '\0')
//			i++;
//		if (st[i] == '\n')
//			st[i] = '\0';
//		else
//			while (getchar() != '\n')
//				continue;
//	}
//	return ret;
//}

//3.设计一个函数，从一行输入中把一个单词读入一个数组中，并丢弃输入行中的其余字符。该函数应该跳过第一个非空字符前面的所有空白
//将以个单词定义为没有空白，换行符的字符序列
char* sgets(char* st, int max);
int main()
{
	int ct = 0;
	int w = 0;
	char words[100][100];
	printf("请输入：(stop means end)\n");
	while (sgets(words[ct], 100) != NULL && strcmp(words[ct], "stop") != 0)
	{
		ct++;
	}
	for (w = 0;w < ct;w++)
		printf("%s ", words[w]);
	return 0;
}
char* sgets(char* st, int max)
{
	char* ret;
	int i = 0;
	ret = fgets(st, max, stdin);
	if (ret)
	{
		while (st[i] != '\n' && st[i] != '\0'&&st[i]!=' ')
			i++;
		if (st[i] == '\n'||st[i]==' ')
			st[i] = '\0';
		else
			while (getchar() != '\n')
				continue;
	}
	return ret;
}