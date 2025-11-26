#include <stdio.h>
#include <string.h>


int is_palindrome(char str) {
    printf("%s", str);
  
    int res = 0, size=strlen(str);
    for (int s = size-1; s >= 0; s--) {
        printf("%c", str[s]);
    }
    return res;
}



int main() {
    char s;
    scanf("%s", s);
    printf("%s", s);
    
    // if ( is_palindrome(s)){
    //     printf("Palindrome\n");
    // }
    // else{
    //      printf("Not Palindrome\n"); 
    // }
    

    return 0;
}