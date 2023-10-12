#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int a;
	int b;
	int c;
	
	printf("%d\n", 100/5*3 >= 15);
	printf("%d\n", 1827-888*2 <= 972-888*1 );
	printf("%d\n", 200+100-250 == 60);
	printf("%d\n", 170<=176 && 95>=67 == 1);
	printf("%d\n", 8<=10&&8<=10 == 1);
	printf("%d\n", 88<=(85.5+87.5+91) && (85.5+87.5+91)<=90.5 == 1);
	scanf("%d", &a);
	scanf("%d", &b);
	printf("%d\n", 180<=a && 150<=b);
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	printf("%d\n", 7.8<=a || 125.7<b || 45<=c);
	scanf("%d", &a);
	scanf("%d", &b);
	scanf("%d", &c);
	printf("%d", a+b+c >= 240);
	return 0;
}
