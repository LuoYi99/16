/*
题目：
编写一个程序，先输入一个字符串str（长度不超过20），
再输入单独的一个字符ch，然后程序会把字符串str当中出现的所有的ch字符都删掉，
从而得到一个新的字符串str2，然后把这个字符串打印出来。
*/
/*
思路：
将字符数组str复制到str2上，当str中出现ch字符，则不执行复制
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