#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int a = 0;
	
	scanf("%d", &a);
	
	if(a == 0){
		printf("���Դϴ�.\n");
	}
	else{
		switch(a % 2){
			case 0:
				printf("¦��\n");
				break; 
			case 1:	
				printf("Ȧ��\n");
				break;
		}
	}
	printf("\n");
	
	a = 0;
	
	scanf("%d", &a);
	
	if(a <= 30 && 0 < a){
		switch(a % 7){
		case 0:
			printf("�ݿ���\n");
			break; 
		case 1:
			printf("�����\n");
			break; 
		case 2:
			printf("�Ͽ���\n");
			break; 
		case 3:
			printf("������\n");
			break; 
		case 4:
			printf("ȭ����\n");
			break; 
		case 5:
			printf("������\n");
			break; 
		case 6:
		 	printf("�����\n");
		 	break; 
		}
	}
	else{
		printf("���� �� ���� �� �Դϴ�.");
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
			printf("���ҳ�");
			break;
		case 1:
			printf("û�ҳ�");
			break;
		case 2:
		case 3:
			printf("û��");
			break;
		case 4:
		case 5:
			printf("�߳�");
			break;
		case 6:
			printf("���");
			break;
		case 7:
		case 8:
			printf("���");
			break;
		case 9:
			printf("���� �鼼");
			break; 
		default:
			printf("���� �鼼");
			break;
	}
	
	
	int n = 2;
	
	switch(1){
		case 0:
			printf("���Դϴ�.");
		case 1:
			printf("���Դϴ�.");
		case 2:
			printf("���Դϴ�.");
		case 3:
			printf("���Դϴ�.");		
	} 
	*/
	return 0;
}
