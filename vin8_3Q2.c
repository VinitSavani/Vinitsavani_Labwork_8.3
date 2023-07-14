#include<stdio.h>

void main(){

int i,j,r,c;

printf("enter the size of Row =   ");
scanf("%d",&i);
printf("enter the size of colum =   ");
scanf("%d",&j);

int a[i][j];
printf("enter the A elements\n");
for(r=0;r<i;r++){
   for(c=0;c<j;c++){
    
    printf("a[%d][%d] =  ",r,c);
    scanf("%d",&a[r][c]);
      }
}
int b[i][j];


printf("enter the B elements\n");
for(r=0;r<i;r++){
   for(c=0;c<j;c++){
    
    printf("b[%d][%d] =  ",r,c);
    scanf("%d",&b[r][c]);
      }
}

int d[i][j];


printf("array C is : \n");
for(r=0;r<i;r++){
   for(c=0;c<j;c++){
    
    d[r][c]=a[r][c]+b[r][c];
     printf("%d ",d[r][c]);
      }
printf("\n");
}
}