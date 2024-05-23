#include <stdio.h>
#include <string.h>

int main(void)
{
	FILE *fp;
	char fname[256];
	char buffer[256];
	char word[256];
	
	int line = 0;
	
	printf("Enter the file name : ");
	scanf("%s", fname);
	
	printf("Enter the search word : ");
	scanf("%s", word);
	
	if((fp = fopen(fname, "r")) == NULL)
	{
		fprintf(stderr, "can not open %s.\n", fname);
		return 0;
	}
	
	while(fgets(buffer, 256, fp)) // 파일을 한 줄씩 읽으면서 버퍼에 저장해나간다.
	{
		line++; // 라인 하나씩 증가
		if(strstr(buffer, word)) // 탐색할 단어가 버퍼에 포함되어 있다면
		{
			printf("line %d : word = %s.\n"); // 출력
		}
	}
	
	fclose(fp);
	return 0;
}