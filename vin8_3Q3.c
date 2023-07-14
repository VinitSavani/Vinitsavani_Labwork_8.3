#include<stdio.h>

void main()
{

  int a,i,j,sum=0;

  printf("enter the size of Row & colum =   ");
  scanf("%d",&a);

  int A[a][a];

  printf("enter the array's elements\n");
  for(i=0;i<a;i++){
   for(j=0;j<a;j++){
    
    printf("a[%d][%d] =  ",i,j);
    scanf("%d",&A[i][j]);
   }
}

for(i=0;i<a;i++)
{
   for(j=0;j<a;j++)
   {
      if(i == j)
	  {
        sum = sum + A[i][j];
   }
}
}

  printf(" the sum of diagonal is : %d",sum);
}