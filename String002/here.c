#include <stdio.h>

//char* sgets(char* st, int max);
////2.��д�����ȡn���ַ���ֹͣæ�����ڶ���һ���հף����з���ֹͣ���ĸ��������ĸ�ֹͣ
//int main()
//{
//	int max = 30;
//	printf("�����룺\n");
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

//3.���һ����������һ�������а�һ�����ʶ���һ�������У��������������е������ַ����ú���Ӧ��������һ���ǿ��ַ�ǰ������пհ�
//���Ը����ʶ���Ϊû�пհף����з����ַ�����
char* sgets(char* st, int max);
int main()
{
	int ct = 0;
	int w = 0;
	char words[100][100];
	printf("�����룺(stop means end)\n");
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