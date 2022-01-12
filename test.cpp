#include <stdio.h>
 
int main(){
    int T, N, n;
    scanf("%d", &T);
    for (int tc=0; tc<T; tc++){
        int arr[101] = {0,};
        scanf("%d", &N);
        for (int i=0; i<N; i++){
            scanf("%d", &n);
            n = n > 0 ? n : -n;
            if (arr[n] < 2)
                arr[n] ++;
        }
        if (arr[0] >= 1) arr[0] = 1;
        int sum = 0;
        for(int i=0; i<101; i++){
            sum += arr[i];
        }
        printf("%d\n", sum);
    }
    return 0;
}
