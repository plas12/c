#include <stdio.h>
#include <stdlib.h>
#include <conio.h>//(�ܼ� ��ǲ �ƿ�ǲ)


int main(int argc, char *argv[]) {
	char ch;
	
	while(1){
		scanf("%c", &ch);//���۾��� ���ڰ� �׿��ִ°� ��� ch�� ���� ����Ѵ�. 
		if(ch == '\n'){
			break;
		}
		printf("%c", ch);
	}
	
	
	/*
	9
	int n = 0;
	
	while(1){
		printf("%d%c", n, 13);//13(\r) - Ŀ���� ������ ���� ���� ���������, 10(enter), 32(space)
		n++;
	}
	
	
	8
	char ch;
	
	ch = _getche();
	printf("\nch = %d : %c\n, ch, ch");
	putchar(ch);
	
	
	7
	char str[80];
	
	gets(str);//get�Է�(enter�� �Է¹����� �Է��� ������ ���ۿ��� enter�� \0���� �ٲ��) 
	printf("%s\n", str);
	puts(str);//put��� 
	
	
	6
	char str1[20], str2[15];
	
	scanf("%s", str1);
	printf("str1 = %s\n", str1);
	scanf("%s%s", str1, str2);
	printf("str1 = %s\n", str1);
	printf("str2 = %s\n", str2);scanf�Է��� ������ ������ ������ �Է��̳�����. 
	
	
	5
	char str[20];�Ѱ��� �ܾ ��� ����(������ ������ ��) 
	
	scanf("%s", str);
	printf("%s", str);
	
	
	4
	int a;
	char b, c;
	
	scanf("%df", &a);
	c = getchar();�߿� 
	scanf("%c", &b);
	printf("%d %c %d", a, b, c);
	
	
	3
	int a;
	char b;
	
	scanf("%d", &a);
	scanf("%c", &b);
	printf("%d %c", a, b);
	
	
	2
	char ch;
	
	scanf("%c", &ch);
	printf("%c %d", ch, ch);
	
	
	1
	int a, b, c;
	
	scanf("%d", &a);
	printf("a = %d\n", a);
	scanf("%d%d", &a, &b);
	printf("a = %d b = %d\n", a, b);
	scanf("%d%d%d", &a, &b, &c);
	printf("a = %d b = %d c = %d\n", a, b, c);
	*/
	return 0;
}
