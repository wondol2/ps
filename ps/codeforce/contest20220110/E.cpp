#include <stdio.h>

char arr[1001][1001];

int main(){
    int T, n, m;

    scanf("%d", &T);

    for (int tc=0; tc<T; tc++){
        getchar();
        scanf("%d%d", &n, &m);
        getchar();

        for (int i=1; i<=n; i++){
            scanf("%s", arr[i]);
        }
        char str[1001];
        scanf("%s", str);
        int idx[1000][3] = {0, };
        int i, j;
        for (i=1; i<=n; i++){
            for (j=0; j<m-2; j++){
                int first = arr[i][j] - '0';
                int second = arr[i][j+1] - '0';
                int third = arr[i][j+2] - '0';
                int hun = first * 100 + second * 10 + third;
                int ten = first * 10 + second;
                if(idx[hun][2] == 0){
                    idx[hun][0] = j, idx[hun][1] = j+2, idx[hun][2] = i;
                }
                if(idx[ten][2] == 0){
                    idx[ten][0] = j, idx[ten][1] = j+1, idx[ten][2] = i;
                }
            }
            int first = arr[i][j] - '0';
            int second = arr[i][j+1] - '0';
            int ten = first * 10 + second;
            if(idx[ten][2] == 0){
                idx[ten][0] = j, idx[ten][1] = j+1, idx[ten][2] = i;
            }
        }
        int stack[1000] = {0,};
        int top = 0;

        int answer[1000] = {0,};
        int atop = 0;
        for(i=0; i<m-1; i++){
            int first = str[i] - '0';
            int second = str[i+1] - '0';
            int third = str[i+2] - '0';
            int hun = first * 100 + second * 10 + third;
            int ten = first * 10 + second;
            stack[top++] = hun;
            stack[top++] = ten;

            if (idx[stack[top]][2] > 0){
                answer[atop++] = stack[top--];
            }
        }
    }

    return 0;
}