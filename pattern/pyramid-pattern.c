#include <stdio.h>

int main() {
    int n;
    scanf("%d", & n);



    for (int rows = 1; rows <= n; rows++) {
        for (int s = 1; s <= n - rows; s++) {
            printf(" ");
        }

        for (int cols = 1; cols <= 2*rows-1; cols++) {
            if(rows%2==0) printf("-");
            else printf("#");
        }
        printf("\n");

    }
     for (int rows = n-1; rows >= 1; rows--) {
        for (int s = 1; s <= n - rows; s++) {
            printf(" ");
        }

        for (int cols = 1; cols <= 2*rows-1; cols++) {
            if(rows%2==0) printf("-");
            else printf("#");
        }
        printf("\n");

    }


    return 0;
}