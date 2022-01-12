#include <stdio.h>


int main(){
    int T, n, a;

    scanf("%d", &T);

    for (int tc=0; tc<T; tc++){
        scanf("%d", &n);
        int arr[51];
        for(int i=0; i<51; i++) arr[i] = 0;
        for(int i=0; i<n; i++){
            scanf("%d", &a);
            while(a > n) a/=2;
            arr[a] ++;
        }
        int idx = n;
        int flag = 0;
        while(idx > 0){
            flag = 1;
            for (int i=1; i<=n; i++){
                if (arr[i] != 1){
                    flag = 0;
                    break;
                }
            }
            if (flag == 1) break;
            if (arr[0] > 0) break;

            if(arr[idx] > 1){
                arr[idx] --;
                arr[idx/2] ++;
            }
            else{
                idx--;
            }
        }

        if(flag == 1) printf("YES\n");
        else printf("NO\n");

    }

    return 0;
}