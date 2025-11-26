```c
#include <stdio.h>

int main() {
    int n;
    scanf("%d", & n);



    for (int rows = 1; rows <= n; rows++) {
        for (int s = 1; s <= n - rows; s++) {
            printf(" ");
        }

        for (int cols = rows; cols >= 1; cols--) {
            printf("%d", cols);
        }
        printf("\n");

    }

    return 0;
}
```

**Output (n=4):**

```
    1
   21
  321
 4321
54321
```
