#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char *argv[]) {
	int ar[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};//int는 한개의 값당 4바이트 이기 때문에 1개의 값당 4개의 크기를 가진다. 
	int i;
	int *pr;
	
	printf("%d %d %d\n", sizeof(ar), sizeof(ar[0]), sizeof(int));
	
	for(i = 0; i < sizeof(ar) / sizeof(ar[0]); i++){
		printf("%d", ar[i]);
	}
	
	pr = (int*)malloc(sizeof(int) * 20);
	
	printf("\n");
	
	for(i = 0; i < sizeof(pr) / sizeof(int) ; i ++){//그냥 sizeof(pr)은 80byte이고 sizeof(int)는 4byte 이다.  
		pr[i] = i + 1;
		printf("%d ", pr[i]);
	}
	
	free(pr);
	
	/*
	6
	int *p;
	
	p = (int*)malloc(sizeof(int) * 5);//코드가 끝나도 free전까진 남아있는 5칸 짜리 배열 
	
	for(int i = 0; i < 5; i++){
		p[i] = i;
		printf("%d", p[i]);
	}
	printf("\n");
	
	for(int i = 0; i < 5; i++){
		printf("%d", *p + i);//괄호는 딱히 않넣어도 된다. 
	}
	
	free(p);//free를 붙여야 동적 (메모리 할당) 변수가 사라진다. 
	
	
	5
	char start[15] = "C3";
	char end[15] ="coding";
	int len;
	
	printf("start = %s %d\n", start, strlen(start));//strlen 문자열의 길이를 측정함 (\0 은 제외한 길이) 
	printf("end = %s %d\n", end, strlen(end));
	
	strcat(start, end);//strcat 문자열a와 문자열b를 합친다(문자열a = 문자열a + 문자열 b)  
	len = strlen(start);
	printf("%s %d\n", start, len);
		
	
	4
	char * sp = "C3coding";
	char str[] = "C3coding";
	int res;
	
	res = strcmp(sp, str);//strcmp는 두개의 문자열이 사전속에서 나오는 순서가 같으면 0이 나오고 a가 빠르면 -1, b가 빠르면 1이 나오는 함수. 
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
	
	printf("%d\n", str1 == str2);//두값은 다른주소의 배열안의 값이기에 아니다 가 나온다.  
	printf("%d\n", str1 == "C3coding");//두 값의 주소값이 다르기 때문에 아니다 가 나온다 (값이 같은지 알려면 배열의 한값씩 비교 해야 한다.) 
	printf("%d\n", str2 == "C3coding");
	printf("%d\n", "C3coding" == "C3coding");
	printf("%d\n", str1 == "c3coding");
	
	
	2
	char* sp1 = "C3coding";// 포인터 변수인 두 변수인  경우 같은 값일때 같은 주소값의  값을 사용한다. 
	char* sp2 = "C3coding";//포인터 변수 안의 값은 뭐든지 상관 없다.(주소값 안의 값을 가져올 뿐이기에 char변수 안에 문자열을 넣어도 상관 없다.) 
	
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
