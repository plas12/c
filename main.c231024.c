#include <stdio.h>
#include <stdlib.h>
#include <time.h>/*랜덤함수를 쓰기위한것  */


int main(int argc, char *argv[]) {
	int a, b;
	doble c;
	
	scanf("%d", &a)
	if(a % 1 = 0){
		printf ("양수")
	}
	else{
		printf ("음수")
	} 
	
	scanf("%d", &a)
	if(a % 2 = 0){
		pritnf("짝수")
	} 
	else{
		printf("홀수")
	} 
	
	scanf("%d", &a)
	if(a % 3 = 0){
		printf("1")
	} 
	else{
		printf("2")
	}
	
	scanf("%d", &a)
	scanf("%d", &b)
	if(a>b){
		if(a % b = 0){
			pritnf("1")
		}
		else{
			printf("0")
		}
	}
	else{
		if(b % a = 0){
			pritnf("1")
		}	
		else{
			printf("0")
		}
	}
	
	scanf("%.3lf", &c)
	if(a % 1 = 0){
		printf("%.3lf", c)
	}
	else{
		printf ("%.3lf")
	} 
	
	/*
	int num;
	
	printf("10000 미만 정수 입력 : ");
	
	scanf("%d", &num);
	
	if(num <10){
		printf("한자리 수\n");
	} 
	else if(num <100){
		printf("두자리 수\n");
	} 
	else if(num <1000){
		printf("세자리 수\n");
	} 
	else if(num <10000){
		printf("네자리 수\n");
	} 
	
	/*
	srand(time(NULL));//랜덤함수
	
	int rnd = rand() % 10000; //랜덤함수의 끝을 정하는 것     수는 한도
	
	if(rnd > 500){
		printf("조건식1 실행\n");
	}	
	if(rnd > 750){
		printf("조건식2 실행\n");
	}
	if(rnd > 900){
		printf("조건식3 실행\n");
	}
	if(rnd > 1000){
		printf("조건식4 실행\n");
	}
	
	if(rnd > 500){
		printf("조건식1 실행\n");
	}	
	else{
		printf("조건식2 실행\n");
	}
	if(rnd > 900){
		printf("조건식3 실행\n");
	}
	else{
		printf("조건식4 실행\n");
	}
	
	if(rnd > 500){
		printf("조건식1 실행\n");
	}	
	else if(rnd > 750){
		printf("조건식2 실행\n");
	}
	else if(rnd > 900){
		printf("조건식3 실행\n");
	}
	else if(rnd > 1000){
		printf("조건식4 실행\n");
	}
	
	
	int a,b,c;
	
	a = 12;
	b = 56;
	c = a > b;
	
	if(a > b){
		printf("%d는 %d보다 크다\n", a, b);
	} 
	else{
		printf("%d는 %d보다 크지 않다\n", a, b);
	}
	
	if(c){
		printf("%d는 %d보다 크다\n", a, b);
	}
	else{
		printf("%d는 %d보다 크지 않다\n", a, b);
	}
	
	
	if(1){
		printf("true\t참\t\n");
		printf("응\t맞아\t\n");
	}
	else{
		printf("false\t거짓\t\n");
		printf("아니\t아니야\t\n");
	} 
	*/
	return 0;
}
