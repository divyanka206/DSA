// Convert uppercase string to lowercase using for loop.

#include <stdio.h>

int main(){
    char str[50];
    printf("enter a string: ");
    fgets(str, 50, stdin);

    int i;
    for(int i = 0; str[i] != '\0'; i++){
        if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + 32;
        }

    }
    printf("Lowercase string: %s", str);
    return 0;
}
