#include <stdio.h>

int main(){

    int start=1, end=1000000, mid;

    while(start != end){
        mid = (start + end + 1)/2;
        printf("%d\n", mid);
        fflush(stdout);

        char str[3];
        scanf("%s", str);

        if(str[0] == '<'){
            end = mid-1;
        }
        else{
            start = mid;
        }
    }

    printf("! %d\n", start);
    fflush(stdout);
    return 0;
}