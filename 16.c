/*
��Ŀ��
��дһ������������һ���ַ���str�����Ȳ�����20����
�����뵥����һ���ַ�ch��Ȼ��������ַ���str���г��ֵ����е�ch�ַ���ɾ����
�Ӷ��õ�һ���µ��ַ���str2��Ȼ�������ַ�����ӡ������
*/
/*
˼·��
���ַ�����str���Ƶ�str2�ϣ���str�г���ch�ַ�����ִ�и���
*/
#include<stdio.h>
#include<string.h>
void main()
{
	char str[21],str2[21],ch;
	int i,j;
	gets(str);
	scanf("%c",&ch);
	for(i=0,j=0;i<20;i++)
		if(str[i]!=ch)
		{
			str2[j]=str[i];
			j++;
		}
	puts(str2);
}