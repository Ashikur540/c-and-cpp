#include<stdio.h>


int main(){
    int r,c;
    scanf("%d %d", &r,&c);
    int arr[r][c];

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
            printf("%d",arr[i][j]);
        } 
        printf("\n");
    }
    
}


#include<stdio.h>


int main(){
    int r,c, tr, tc;
    scanf("%d %d", &r,&c);
    int arr[r][c];

    scanf("%d %d", &tr);
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d",&arr[i][j]);
        } 
    }
    for (int i = 1; i <= c; i++)
    {
            if(i== tr){

                printf("%d",arr[tr][i]);
            }
        
    }
    
}