#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	FILE* fp;
	char c;
	
	fp=fopen("sample.txt","r");
	if (fp==NULL)
		printf("can't read\n");
		
	//한 글자 읽은 거시 파일의 마지막이 아니라면
	while ((c=fgetc(fp) )!= EOF)
	{
		//한글자 출력
		putchar(c);
		 
	 } 
	
	
	
	fclose(fp);
	return 0;
}
