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
		
	//�� ���� ���� �Ž� ������ �������� �ƴ϶��
	while ((c=fgetc(fp) )!= EOF)
	{
		//�ѱ��� ���
		putchar(c);
		 
	 } 
	
	
	
	fclose(fp);
	return 0;
}
