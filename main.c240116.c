#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	FILE *in = fopen("NumberFile.txt", "r");
	int n, m;
	double d1, d2;
	
	if(in == NULL){
		printf("파일없음\n");
		exit(1);
	}
	
	printf("정수를 두개 입력합니다.\n");
	fscanf(in, "%d %d", &n, &m);
	printf("실수를 두개 입력합니다.\n");
	fscanf(in, "%lf %lf", &d1, &d2);
	
	printf("\n입력 받은 수들은 모두 출력합니다.\n");
	printf("%d %d\n", n, m);
	printf("%lf %lf\n", d1, d2);
	printf("\n\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
	printf("어디서 입력 받았을 까요?\n");
	
	fclose(in);
	
	/*
	FILE *out = fopen("NumberFile.txt", "w");
	int n, m;
	double d1, d2;
	
	if(out == NULL){
		printf("파일없음\n");
		exit(1);
	}
	
	printf("정수를 두 개 입력하세요 : ");
	scanf("%d %d", &n, &m);
	printf("실수를 두 개 입력하세요 : ");
	scanf("%lf %lf", &d1, &d2);
	
	printf("\n\n\n입력 받은 수들은 모두 출력되었습니다.\n");
	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
	printf("왜 콘솔에서 찾으세요?");//콘솔은 프로젝트 시작시 뜨는 꺼먼 창 
	
	fprintf(out, "%d %d\n", n, m);
	fprintf(out, "%lf %lf", d1, d2);
	
	fclose(out); 
	
	
	FILE *in = fopen("StringFlie.txt", "r");
	char str1[30];
	char str2[30];
	char str3[30];
	
	if(in == NULL){
		printf("파일없음");
		exit(1);
	} 
	
	fgets(str1, sizeof(str1), in);
	fgets(str2, sizeof(str2), in);
	fgets(str3, sizeof(str3), in);
	
	puts(str1);//화면에 출력 
	printf("%s", str2);
	
	fputs(str3, stdout);//stdout은 화면 
	fclose(in);
	
	
	FILE *out = fopen("StringFlie.txt", "w");
	char str1[] = "Hello C3coding";
	char str2[] = "안녕하세요씨큐브코딩입니다.\n";
	
	if(out == NULL){
		printf("파일없음\n");
		exit(1);
	}
	
	//s는 문자열(string), c는 문자(char), put은 입력, get은 꺼내오기  
	fputs("문자열을출력합니다\n", out);
	fputs(str1, out);
	fputs("\n", out);
	fputs(str2, out);
	
	fclose(out);	
	
	
	FILE *fp;
	char ch;
	
	fp = fopen("Charout.txt", "r");
	
	if(fp == NULL){
		printf("파일없음\n");
		exit(1);
	}
	
	//하나 가져오면 커서가 한개 움직임 [엔터도 문자]
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
		printf("파일없음\n");
		exit(1);
	}
	
	fputc('A', fp);
	fputc('B', fp);
	fputc('\n', fp);
	fputc(97, fp);
	fputc(98, fp);
	
	fclose(fp);
	

	FILE *fp = fopen("dataflie.txt", "r"); w/r
	
	if(fp == NULL){//NULL은 아무것도 없는것 
		printf("파일이 없습니다.");
		exit(1);
	}
	
	fclose(fp);
	
	return 0;
	*/
}
