#include<stdio.h>

void main(){
	
	int   a,b,i,j;
	float avg,sum = 0;
	
	printf("Enter number of rows :- ");
	scanf("%d",&a);
	
	printf("Enter number of colums :- ");
	scanf("%d",&b);
	
	int x[a][b];
	
	for(i=0;i<a;i++){
		for(j=0;j<b;j++){
			printf("x[%d][%d] :- ",i,j);
			scanf("%d",&x[i][j]);
			sum = sum + x[i][j];
		}
	}
	
	avg = sum / (a*b);
	
	printf("Average of an array :- %.2f",avg);
}

