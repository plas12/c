#include <stdio.h>
#include <stdlib.h>
#include <conio.h>//(콘솔 인풋 아웃풋)


int main(int argc, char *argv[]) {
	char ch;
	
	while(1){
		scanf("%c", &ch);//버퍼안의 숫자가 쌓여있는게 계속 ch에 들어가고 출력한다. 
		if(ch == '\n'){
			break;
		}
		printf("%c", ch);
	}
	
	
	/*
	9
	int n = 0;
	
	while(1){
		printf("%d%c", n, 13);//13(\r) - 커서가 앞으로 가고 수가 덮어써진다, 10(enter), 32(space)
		n++;
	}
	
	
	8
	char ch;
	
	ch = _getche();
	printf("\nch = %d : %c\n, ch, ch");
	putchar(ch);
	
	
	7
	char str[80];
	
	gets(str);//get입력(enter를 입력받으면 입력이 끝나고 버퍼에서 enter가 \0으로 바뀐다) 
	printf("%s\n", str);
	puts(str);//put출력 
	
	
	6
	char str1[20], str2[15];
	
	scanf("%s", str1);
	printf("str1 = %s\n", str1);
	scanf("%s%s", str1, str2);
	printf("str1 = %s\n", str1);
	printf("str2 = %s\n", str2);scanf입력을 받을땐 공백이 나오면 입력이끝난다. 
	
	
	5
	char str[20];한개의 단어만 사용 가능(공백이 나오면 끝) 
	
	scanf("%s", str);
	printf("%s", str);
	
	
	4
	int a;
	char b, c;
	
	scanf("%df", &a);
	c = getchar();중요 
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
