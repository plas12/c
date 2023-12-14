#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	
	char a[80];
	int b = 0;
	
	gets(a);

	for(int i = 0; i <= strlen(a); i++){
		if(a [i] == ' '){
			b++;
		}
	}
	
	printf("%d", b + 1);
	
	/*
	char a[ ] = " ";
	
	scanf("%s", &a);
	int b = strlen(a);

	for(int i = b; i >= 0; i--){
		printf("%c", a [i]);
	}
	
	
	char a[ ] = " ";
	
	scanf("%s", &a);
	
	for(int i = 0; i < strlen(a); i++){//strlen(a)괄호 않의 배열 길이 알아내는 함수  
		printf("%c", a [i] - 32);
	}
	
	
	int a = 65;
	
	for(int i =0; i < 2; i++){
		for(int ia =0; ia < 26; ia++){
			printf("%c", a + ia);
		}
		printf("\n");
		a = a + 32;
	}
	
	
	char a = 'a';
	
	scanf("%c", &a);
	
	if(a < 91){
		printf("%c", a + 32);
	}
	if(96 < a){
		printf("%c", a - 32);
	}
	*/
	return 0;
}
