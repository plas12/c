#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
1
struct Coordi{
	int x;
	int y;
};
1


2
struct Circle{
	int x;
	int y;
	double r;
};
2


3
struct Person{
	char name[10];
	int age;
	double height;
};
3


4
struct Circle{
	double r;
	double i;
	double s;
}; 
4
*/


struct Coordi{
	int x;
	int y;
};

struct Circle{
	struct Coordi cen;
	double r;
};

int main(int argc, char *argv[]) {
	//구조체 안에 배열을 넣으면 c1같은 에들을 한번에 여러게 생성 가능  
	struct Circle c1;
	struct Circle c2 = {{4, 5}, 12.4};
	struct Circle c3;
	
	c1.cen.x = 5;
	c1.cen.y = 4;
	c1.r = 3.33;
	printf("%d %d %.2lf\n", c1.cen.x, c1.cen.y, c1.r);
	
	printf("%d %d %.2lf\n", c2.cen.x, c2.cen.y, c2.r);
	
	scanf("%d %d %lf", &c3.cen.x, &c3.cen.y, &c3.r);
	printf("%d %d %.2lf\n", c3.cen.x, c3.cen.y, c3.r);
	
	/*
	4
	struct Circle c;
	scanf("%lf", &c.r); 
	
	
	c.i = 2 * c.r * 3.14 * 1.0;
	c.s = c.r * c.r * 3.14 * 1.0;
	
	printf("i : %.2lf  s : %.2lf", c.i, c.s);
	4
	
	
	3
	struct Person m1;
	struct Person m2 = {"허난설헌", 13, 159.9};
	
	strcpy(m1.name, "허균");//초기화를 사용하면 strcpy를 않사용해도됨 
	m1.age = 19;
	m1.height = 158.34;
	
	printf("%s %d %.2lf\n", m1.name, m1.age, m1.height);
	
	printf("%s %d %.2lf\n", m2.name, m2.age, m2.height);
	
	struct Person m3;
	scanf("%s %d %lf", &m3.name, &m3.age, &m3.height);
	printf("%s %d %.2lf\n", m3.name, m3.age, m3.height);
	
	struct Person m4;
	strcpy(m4.name, "강민");
	m4.age = 13;
	m4.height = 171.1;
	printf("%s %d %.2lf", m4.name, m4.age, m4.height);
	//대입 ==  a = 0;과 같이 입력 //초기화 == int a = 0;과 같이 생성 
	3
	
	
	2
	struct Circle c1, c3, c4;
	
	printf("%d %d %.1lf\n", c1.x = 88, c1.y = 77, c1.r = 99.9);
	
	struct Circle c2 = {5, 4, 3.3};//초기화 
	
	printf("%d %d %.1lf\n", c2.x, c2.y, c2.r);
	
	printf("%d %d %.1lf\n", c3.x = c1.x, c3.y = c1.y, c3.r = c1.r);
	
	printf("%d %d %.1lf", c4.x = c2.y, c4.y = c2.x, c4.r = c2.r);
	2
	
	
	1
	struct Coordi p1;
	struct Coordi p2 = {5, 9};
	struct Coordi p3;
	struct Coordi p4;
	
	p1.x = 2;
	p1.y = 3;
	
	printf("p1의 좌표(%d, %d)\n", p1.x, p1.y);
	printf("p2의 좌표(%d, %d)\n", p2.x, p2.y);
	1
	*/
	return 0;
}
