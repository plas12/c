#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]) {
	int ar[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};//int�� �Ѱ��� ���� 4����Ʈ �̱� ������ 1���� ���� 4���� ũ�⸦ ������. 
	int i;
	int *pr;
	
	printf("%d %d %d\n", sizeof(ar), sizeof(ar[0]), sizeof(int));
	
	for(i = 0; i < sizeof(ar) / sizeof(ar[0]); i++){
		printf("%d", ar[i]);
	}
	
	pr = (int*)malloc(sizeof(int) * 20);
	
	printf("\n");
	
	for(i = 0; i < sizeof(pr) / sizeof(int) ; i ++){//�׳� sizeof(pr)�� 80byte�̰� sizeof(int)�� 4byte �̴�.  
		pr[i] = i + 1;
		printf("%d ", pr[i]);
	}
	
	free(pr);
	
	/*
	6
	int *p;
	
	p = (int*)malloc(sizeof(int) * 5);//�ڵ尡 ������ free������ �����ִ� 5ĭ ¥�� �迭 
	
	for(int i = 0; i < 5; i++){
		p[i] = i;
		printf("%d", p[i]);
	}
	printf("\n");
	
	for(int i = 0; i < 5; i++){
		printf("%d", *p + i);//��ȣ�� ���� �ʳ־ �ȴ�. 
	}
	
	free(p);//free�� �ٿ��� ���� (�޸� �Ҵ�) ������ �������. 
	
	
	5
	char start[15] = "C3";
	char end[15] ="coding";
	int len;
	
	printf("start = %s %d\n", start, strlen(start));//strlen ���ڿ��� ���̸� ������ (\0 �� ������ ����) 
	printf("end = %s %d\n", end, strlen(end));
	
	strcat(start, end);//strcat ���ڿ�a�� ���ڿ�b�� ��ģ��(���ڿ�a = ���ڿ�a + ���ڿ� b)  
	len = strlen(start);
	printf("%s %d\n", start, len);
		
	
	4
	char * sp = "C3coding";
	char str[] = "C3coding";
	int res;
	
	res = strcmp(sp, str);//strcmp�� �ΰ��� ���ڿ��� �����ӿ��� ������ ������ ������ 0�� ������ a�� ������ -1, b�� ������ 1�� ������ �Լ�. 
	printf("%d\n", res);
	res = strcmp(sp, "C3coding");
	printf("%d\n", res);
	res = strcmp("C3coding", "C3coding");
	printf("%d\n", res);
	
	res = strcmp("test", "text");
	printf("%d\n", res);
	res = strcmp("text", "test");
	printf("%d\n", res);
		
	
	3
	char str1[] = "C3coding";
	char str2[10] = "C3coding";
	
	printf("%d\n", str1 == str2);//�ΰ��� �ٸ��ּ��� �迭���� ���̱⿡ �ƴϴ� �� ���´�.  
	printf("%d\n", str1 == "C3coding");//�� ���� �ּҰ��� �ٸ��� ������ �ƴϴ� �� ���´� (���� ������ �˷��� �迭�� �Ѱ��� �� �ؾ� �Ѵ�.) 
	printf("%d\n", str2 == "C3coding");
	printf("%d\n", "C3coding" == "C3coding");
	printf("%d\n", str1 == "c3coding");
	
	
	2
	char* sp1 = "C3coding";// ������ ������ �� ������  ��� ���� ���϶� ���� �ּҰ���  ���� ����Ѵ�. 
	char* sp2 = "C3coding";//������ ���� ���� ���� ������ ��� ����.(�ּҰ� ���� ���� ������ ���̱⿡ char���� �ȿ� ���ڿ��� �־ ��� ����.) 
	
	printf("%d\n", sp1 == sp2);
	printf("%d\n", sp1 == "C3coding");
	printf("%d\n", sp2 == "C3coding");
	printf("%d\n", "C3coding" == "C3coding");
	printf("%d\n", sp1 == "c3coding");
	
	printf("%d %d\n", sp1, "c3coding");
	printf("%d %d\n", sp2, "c3coding"); 
	
	
	1
	char c1 = 'A';
	char c2 = 'B';
	
	printf("%d\n", c1 +c2);
	printf("%d\n", c1 > c2);
	printf("%d\n", c1 == 'A');
	printf("%d\n", 'b' > c2);
	printf("%d\n", 'a' - c1);
	*/
	return 0;
}
