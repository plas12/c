#include <stdio.h>
#include <stdlib.h>
#include <time.h>// random을 쓰기위해 추가하는것  


int main(int argc, char *argv[]) {
	srand(time(null));// random 을 랜덤하게 바꿔주는  
	
	//ran() % 100 + 1 -- 100이하의 랜덤한 수 
	
	/*
	int a;
	int ar[6][9] = {{0, 0, 0, 1, 0, 0, 0, 0, 0},
					{0, 0, 0, 0, 0, 0, 0, 2, 0},
					{0, 0, 0, 0, 1, 0, 0, 0, 0},
					{0, 2, 0, 1, 0, 0, 1, 0, 0},
					{0, 0, 0, 1, 0, 0, 0, 0, 0},
					{0, 0, 1, 0, 0, 0, 1, 0, 0},
					};
					
	for(int i = 0; i < 6; i++){
		for(int j = 0; j < 9; j++){
			if(ar[i][j] == 1){
				a++;
			}
		}
	}
	printf("%d", a);
	
	printf("\n\n");
	a = 0;
	
	for(int i = 0; i < 6; i++){
		for(int j = 0; j < 9; j++){
			if(ar[i][j] == 2){
				printf("i = %d, j = %d", i, j);
				printf("\n");
			}
		}
	}
	
	printf("\n\n");
	a = 0;
	
	for(int i = 0; i < 6; i++){
		for(int j = 0; j < 9; j++){
			if(ar[i][j] == 2){
			ar[i + 1][j] = 5;
			ar[i - 1][j] = 5;
			ar[i][j + 1] = 5;
			ar[i][j - 1] = 5;
			}
		}
	}
	for(int i = 0; i < 6; i++){
		for(int j = 0; j < 9; j++){
			printf("%d ", ar[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	a = 0;
	
	for(int i = 0; i < 6; i++){
		for(int j = 0; j < 9; j++){
			if(ar[i][j] != 0){
				ar[i][j] = 0;
			}
			else{
				ar[i][j] = 1;
			}
		}
	}
	for(int i = 0; i < 6; i++){
		for(int j = 0; j < 9; j++){
			printf("%d ", ar[i][j]);
		}
		printf("\n");
	}
	
	
	int ar1[3][4] = {0};
	int ar2[ ][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
	int ar3[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
	int i, j;
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 4; j++){
			printf("%d", ar1[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	i = 0;
	j = 0;
	
	while(i < 12){
		printf("%d ", ar2[i / 4][i - i / 4 * 4]); - // ar2 [i / 4][i % 4]
		i++;
	
		if(i % 4 == 0){
			printf("\n");
			
		}
	}

	while(i<3){
		j = 0;
		while(j < 4){
			printf("%d ", ar2[i][j]);
			j++;
		}
		printf("\n");		
		i++;
	}

	while(i < 12){
		printf("%d ", ar2[i / 4][j]);
		i++;
		j++;
		if(i % 4 == 0){
			printf("\n");
			j = 0;
		}
	}
	
	
	int a[4][5];
	int b[7][5];
	double c[4][5];
	char d[9][12]; 
	
//	int arr [10][5]; -- 왼쪽이 세로줄 오른쪽이 가로줄 
	*/
	return 0;
}
