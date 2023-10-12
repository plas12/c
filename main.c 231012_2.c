#include <stdio.h>
#include <stdlib.h>


int main(int argc, char *argv[]) {
	int a;
	int b;
	int c;
	
	scanf ("%d", &a);
	scanf ("%d", &b);
	scanf ("%d", &c);
	printf ("%d\n", a % 8 != 0 && a % 4 == 0);
	printf ("%d\n", a % 2 == 1 && a % 5 == 3);
	printf ("%d\n", a % 5 == 0 || a % 7 == 0);
	printf ("%d\n", a*a + b*b == c*c);
	printf ("%d\n", a % b == 0 && a % c != 0);
	printf ("%d\n", b + c < a && b * c > a);
	printf ("%d\n", b * c < a || b * b < a);
}
