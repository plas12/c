#include <stdio.h>
#include <stdlib.h>


int MainMenu(int n){
	printf("\t### ��Ģ���� ###\n");
	printf("\t1. ������ ��Ģ����\n");
	printf("\t2. �Ǽ��� ��Ģ����\n");
	printf("\t3. ����\n");
	printf("�޴��� �����ϼ��� : ");
	scanf("%d", &n);
	
	return n;
} 
//240125
int Intmenu(int im){
	
	printf("\t@@ ������ ����@@\n");
	printf("\t1. ����\n\t2.����\n\t3.����\n\t4.������\n\t5.�ڷ�");
	printf("�޴��� �����ϼ��� : ");
	scanf("%d", &im);
	
	return im; 
}

int doublemenu(int im){
	
	printf("\t@@ �Ǽ��� ����@@\n");
	printf("\t1. ����\n\t2.����\n\t3.����\n\t4.������\n\t5.�ڷ�");
	printf("�޴��� �����ϼ��� : ");
	scanf("%lf", &im);
	
	return im; 
}
