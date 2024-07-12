#include<stdio.h>

main(){

int row , column;

printf("Enter The Element Of ROW , And COLUMN");
scanf("%d %d" , &row, &column);

int a[row][column];

for(int i=0; i < row; i++){
   for(int j=0; j < column; j++){
    printf("Enter The Array Element of %d:-", i);
    scanf("%d",&a[i][j] );
   }
}

printf("\n");
printf("diagonal element \n");

//diagonal element

for (int i = 0; i < row; i++)
{
    for(int j=0; j<column; j++){
        if(i == j){
            printf("%d ",a[i][j] );
        }
        else{
            printf("  ");
        }
    }
    printf("\n");
}


printf("\n");
printf("cross element\n");

//cross element

for (int i = 0; i < row; i++)
{
    for(int j=0; j<column; j++){
        if(i == j){
            printf("%d ",a[i][j] );
        }
        else{
            printf("  ");
        }
    }
    printf("\n");
}


}