#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	//sizeof str = 배열의 길이를 측정하는 함수 
	char str[ ] = "Coding is computer programming";
	int a = 0;
	
	while(str[a] != '\0'){
		a++;	
	}
	for(int i = 1; i <= a; i++){
		printf("%c", str[a - i]);
	}
	
	/*
	int a = 0;
	char str[ ] = {'H', 'i', ' ', 'C', '3', ' ', 'C', 'o', 'd', 'i', 'n', 'g', '\0'}; 
	
	while(str[a] != '\0'){
		printf("%c", str[a]);
		a++;
	} 
	

	char sentence[80];
	
	puts("문장을 입력하세요 : ");
	gets(sentence);//입 력 get / s (문자열)
	puts(sentence);//출력 put / s(문자열)
	printf("%s", sentence);//출력
	
//	|||||
	
	char word[20];
	
	printf("단어를 입력하세요 : ");
	scanf("%s", word);
	printf("입력하신 단어는 %s 입니다", word);

	
	char str1[15] = "Coding is fun";//문자열을 "" 로 감싸면 끝에 자동으로 null이 생성됨 
	char str2[] = "Coding is fun";
	
	printf("%s\n", str1);
	printf("%s\n", str2);
	
	
	char str1[ ] = {'H', 'i', ' ', 'C', '3', ' ', 'C', 'o', 'd', 'i', 'n', 'g'}; // 문자배열  
	char str2[ ] = {'H', 'i', ' ', 'C', '3', ' ', 'C', 'o', 'd', 'i', 'n', 'g', '\0'};// 문자배열 / 문자열 - \0을 넣어야됨(nurr) 
	
	printf("%s\n", str1);
	printf("%s\n", str2);
// %s는 문자열 

	
	char ch;
	
	printf("문자를 입력하세요 : ");
	ch = getchar();//문자를 콘솔에 출력하는 함수 
	putchar(ch);//키보드(_getchar();_) 입력으로 문자를 받아오는 함수 
	printf("\n");
	printf("%c %d\n", ch, ch);
	
	
	char ch1, ch2;	
	int a;
	
	ch1 = 'A';
	ch2 = 'a';
	a = ch2 - ch1;
	
	printf("%d %d\n", ch1, ch2);
	
	ch1 = ch1 + a;
	ch2 = ch2 - a;
	
	printf("%c %c", ch1, ch2);
	

	char ch1, ch2;
	
	ch1 = 'A';
	ch2 = 'a';
	printf("%c %c\n", ch1, ch2);
	printf("%d %d\n", ch1, ch2);
	
	printf("%c %c\n", 66, 98);
	printf("%d %d\n", 66, 98);
	*/
	return 0;
}

