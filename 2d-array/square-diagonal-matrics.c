#include<stdio.h>

int main(){
    int r,c;
    scanf("%d %d", &r,&c);
    int arr[r][c];
    if(r!=c) printf("Not Diagonal\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&arr[i][j]);
        } 
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if(i != j && arr[i][j] != 0){
               
                printf("Not Diagonal Matrices\n");
            }
            else    printf("Diagonal Matrices\n");
        } 
        printf("\n");
    }
    
}


