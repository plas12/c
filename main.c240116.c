#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	FILE *in = fopen("NumberFile.txt", "r");
	int n, m;
	double d1, d2;
	
	if(in == NULL){
		printf("���Ͼ���\n");
		exit(1);
	}
	
	printf("������ �ΰ� �Է��մϴ�.\n");
	fscanf(in, "%d %d", &n, &m);
	printf("�Ǽ��� �ΰ� �Է��մϴ�.\n");
	fscanf(in, "%lf %lf", &d1, &d2);
	
	printf("\n�Է� ���� ������ ��� ����մϴ�.\n");
	printf("%d %d\n", n, m);
	printf("%lf %lf\n", d1, d2);
	printf("\n\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
	printf("��� �Է� �޾��� ���?\n");
	
	fclose(in);
	
	/*
	FILE *out = fopen("NumberFile.txt", "w");
	int n, m;
	double d1, d2;
	
	if(out == NULL){
		printf("���Ͼ���\n");
		exit(1);
	}
	
	printf("������ �� �� �Է��ϼ��� : ");
	scanf("%d %d", &n, &m);
	printf("�Ǽ��� �� �� �Է��ϼ��� : ");
	scanf("%lf %lf", &d1, &d2);
	
	printf("\n\n\n�Է� ���� ������ ��� ��µǾ����ϴ�.\n");
	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
	printf("�� �ֿܼ��� ã������?");//�ܼ��� ������Ʈ ���۽� �ߴ� ���� â 
	
	fprintf(out, "%d %d\n", n, m);
	fprintf(out, "%lf %lf", d1, d2);
	
	fclose(out); 
	
	
	FILE *in = fopen("StringFlie.txt", "r");
	char str1[30];
	char str2[30];
	char str3[30];
	
	if(in == NULL){
		printf("���Ͼ���");
		exit(1);
	} 
	
	fgets(str1, sizeof(str1), in);
	fgets(str2, sizeof(str2), in);
	fgets(str3, sizeof(str3), in);
	
	puts(str1);//ȭ�鿡 ��� 
	printf("%s", str2);
	
	fputs(str3, stdout);//stdout�� ȭ�� 
	fclose(in);
	
	
	FILE *out = fopen("StringFlie.txt", "w");
	char str1[] = "Hello C3coding";
	char str2[] = "�ȳ��ϼ��侾ť���ڵ��Դϴ�.\n";
	
	if(out == NULL){
		printf("���Ͼ���\n");
		exit(1);
	}
	
	//s�� ���ڿ�(string), c�� ����(char), put�� �Է�, get�� ��������  
	fputs("���ڿ�������մϴ�\n", out);
	fputs(str1, out);
	fputs("\n", out);
	fputs(str2, out);
	
	fclose(out);	
	
	
	FILE *fp;
	char ch;
	
	fp = fopen("Charout.txt", "r");
	
	if(fp == NULL){
		printf("���Ͼ���\n");
		exit(1);
	}
	
	//�ϳ� �������� Ŀ���� �Ѱ� ������ [���͵� ����]
	ch = fgetc(fp);
	printf("%c", ch);
	ch = fgetc(fp);
	putchar(ch);
	ch = fgetc(fp);
	printf("%c", ch);
	ch = fgetc(fp);
	putchar(ch);
	ch = fgetc(fp);
	putchar(ch);
	
	fclose(fp);
	

	FILE *fp;
	
	fp = fopen("Charout.txt", "w");
	
	if(fp == NULL){
		printf("���Ͼ���\n");
		exit(1);
	}
	
	fputc('A', fp);
	fputc('B', fp);
	fputc('\n', fp);
	fputc(97, fp);
	fputc(98, fp);
	
	fclose(fp);
	

	FILE *fp = fopen("dataflie.txt", "r"); w/r
	
	if(fp == NULL){//NULL�� �ƹ��͵� ���°� 
		printf("������ �����ϴ�.");
		exit(1);
	}
	
	fclose(fp);
	
	return 0;
	*/
}
