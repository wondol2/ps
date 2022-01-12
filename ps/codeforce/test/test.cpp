#include <stdio.h>

int main(){

    char str[20] = {'a','b','c','d','e','f'};
    for(int i=0; i<20; i++){
        printf("%c ", str[i]);
    }
    printf("\n");
    scanf("%s", str);
    for(int i=0; i<20; i++){
        printf("%c ", str[i]);
    }
    printf("\n");
    printf("%s\n", str);
    // scanf("%s", str);
    // printf("%s\n", str);
    return 0;
}
