#include <stdio.h>

int main(void)
{
	FILE *fp = NULL;
	fp = fopen("output.txt", "w");
	// w = 쓰기, r = 읽기
	if(fp == NULL)
	{
		printf("failed open file.\n");
	}
	else
	{
		printf("succeed open file.\n");
	}
	fputc('H', fp);
	fputc('E', fp);
	fputc('L', fp);
	fputc('L', fp);
	fputc('O', fp);
	fclose(fp);
	
	return 0;
}