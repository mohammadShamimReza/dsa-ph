#include<stdio.h>
#include <string.h>

int main(){

    int n = 100001;
    char str[n];
    fgets(str, n, stdin);
    int len = strlen(str);

    int con = 0;

    for (int i = 0; i < len; i++)
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'  ){

        }else{
            con++;
        }
    }
    
    printf("%d", con);

    return 0;
};