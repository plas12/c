#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	//sizeof str = �迭�� ���̸� �����ϴ� �Լ� 
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
	
	puts("������ �Է��ϼ��� : ");
	gets(sentence);//�� �� get / s (���ڿ�)
	puts(sentence);//��� put / s(���ڿ�)
	printf("%s", sentence);//���
	
//	|||||
	
	char word[20];
	
	printf("�ܾ �Է��ϼ��� : ");
	scanf("%s", word);
	printf("�Է��Ͻ� �ܾ�� %s �Դϴ�", word);

	
	char str1[15] = "Coding is fun";//���ڿ��� "" �� ���θ� ���� �ڵ����� null�� ������ 
	char str2[] = "Coding is fun";
	
	printf("%s\n", str1);
	printf("%s\n", str2);
	
	
	char str1[ ] = {'H', 'i', ' ', 'C', '3', ' ', 'C', 'o', 'd', 'i', 'n', 'g'}; // ���ڹ迭  
	char str2[ ] = {'H', 'i', ' ', 'C', '3', ' ', 'C', 'o', 'd', 'i', 'n', 'g', '\0'};// ���ڹ迭 / ���ڿ� - \0�� �־�ߵ�(nurr) 
	
	printf("%s\n", str1);
	printf("%s\n", str2);
// %s�� ���ڿ� 

	
	char ch;
	
	printf("���ڸ� �Է��ϼ��� : ");
	ch = getchar();//���ڸ� �ֿܼ� ����ϴ� �Լ� 
	putchar(ch);//Ű����(_getchar();_) �Է����� ���ڸ� �޾ƿ��� �Լ� 
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

