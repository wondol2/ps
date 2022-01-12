#include <stdio.h>

int main(){
    int T, n, a;

    scanf("%d", &T);

    for (int tc=0; tc<T; tc++){
        scanf("%d", &n);
        int max = 0, min = 1000000000;
        for (int i=0; i<n; i++){
            scanf("%d", &a);
            if (max < a) max = a;
            if (min > a) min = a;
        }
        printf("%d\n", max-min);
    }

    return 0;
}