#include <stdio.h>


int main(){
    int T, n, k;
    char str[200001];

    scanf("%d", &T);

    for (int tc=0; tc<T; tc++){
        scanf("%d%d", &n, &k);
        getchar();
        scanf("%s", str);
        int arr[26] = {0,};
        for (int i=0; str[i]; i++){
            arr[str[i] - 'a'] ++;
        }

        int answer = n/k;
        int num = 0, odd = 0;
        for(int i=0; i<26; i++){
            num += (arr[i]/2)*2;
            if(arr[i]&1) odd++;
        }

        while(answer > 1){
            if(answer&1){
                if (num >= k * (answer-1)) break;
            }
            else{
                if (num >= k*answer) break;
            }
            answer--;
        }
        printf("%d\n", answer);
        
    }

    return 0;
}