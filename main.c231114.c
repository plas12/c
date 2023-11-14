#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int a = 0;
	
	scanf("%d", &a);
	
	if(a == 0){
		printf("영입니다.\n");
	}
	else{
		switch(a % 2){
			case 0:
				printf("짝수\n");
				break; 
			case 1:	
				printf("홀수\n");
				break;
		}
	}
	printf("\n");
	
	a = 0;
	
	scanf("%d", &a);
	
	if(a <= 30 && 0 < a){
		switch(a % 7){
		case 0:
			printf("금요일\n");
			break; 
		case 1:
			printf("토요일\n");
			break; 
		case 2:
			printf("일요일\n");
			break; 
		case 3:
			printf("월요일\n");
			break; 
		case 4:
			printf("화요일\n");
			break; 
		case 5:
			printf("수요일\n");
			break; 
		case 6:
		 	printf("목요일\n");
		 	break; 
		}
	}
	else{
		printf("있을 수 없는 값 입니다.");
	}


	printf("\n");
	
	int i = 0;
	int b = 1;
	a = 0;
	
	for(i = 0; i < 10; i++){
		scanf("%d", &a);
		if( b < a){
			b = a;
		}
	}
	printf("%d\n", b);
	printf("\n");
	
	i = 0;
	a = 0;
	b = 0;
	int c = 0;
	int d = 0;
	
	scanf("%d", &a);
	scanf("%d", &b);
	
	for(i = 1; i <= a; i++){
		if(i % b == 0){
			printf("%d\n", i);
			c++;
			d = d + i;
		}
		 
	}
	
	printf("%d\n", c);
	
	printf("%d\n", d);
	printf("\n");
	
	i = 0;
	a = 0;
	b = 0;
	double e = 0;
	
	for(i = 0; i < 9; i++){
		scanf("%d\n", &a);
		b = a + b;
	}
	printf("%d\n", b);
	e = b / 10.0;
	printf("%.3lf\n",e);
	printf("\n");
	
	/*
	int a = 0;
	int b = 0;
	
	scanf("%d", &a);
	
	b = a / 10;
	
	switch(b){
		case 0:
			printf("유소년");
			break;
		case 1:
			printf("청소년");
			break;
		case 2:
		case 3:
			printf("청년");
			break;
		case 4:
		case 5:
			printf("중년");
			break;
		case 6:
			printf("장년");
			break;
		case 7:
		case 8:
			printf("노년");
			break;
		case 9:
			printf("도전 백세");
			break; 
		default:
			printf("성공 백세");
			break;
	}
	
	
	int n = 2;
	
	switch(1){
		case 0:
			printf("영입니다.");
		case 1:
			printf("일입니다.");
		case 2:
			printf("이입니다.");
		case 3:
			printf("삼입니다.");		
	} 
	*/
	return 0;
}
