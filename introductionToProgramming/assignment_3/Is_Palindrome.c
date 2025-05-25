#include<stdio.h>
#include <string.h>

int is_palindrome(){
    char str[1001];
    fgets(str, 1001, stdin);


    int len = strlen(str);
    printf("%d", len);

    // Remove trailing newline if present
    if (str[len - 1] == '\n') {
        str[len - 1] = '\0';
        len--;
    }

    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - 1 - i]) {
            return 0;
        }
    }
    return 1;
}

int main(){
    int res = is_palindrome();
    if (res == 1){

        printf("Palindrome");
    }
    if(res == 0){
        printf("Not Palindrome");
    }
    return 0;
};