#include <stdio.h>

int main(){
    int T, n, a, b, c;

    scanf("%d", &T);

    for (int tc=0; tc<T; tc++){
        scanf("%d%d%d", &a, &b, &c);

        if(2*b-c > 0 && (2*b-c)%a == 0)
            printf("YES\n");
        else if((a+c)%(2*b) == 0)
            printf("YES\n");
        else if(2*b-a > 0 && (2*b-a)%c == 0)
            printf("YES\n");
        else
            printf("NO\n");

    }

    return 0;
}