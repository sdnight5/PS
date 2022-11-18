#include <bits/stdc++.h>

using namespace std;

int arr[100][100];
int dr[4] = {0, 1, 0, -1};
int dc[4] = {1, 0, -1, 0};
int N,M;

void dfs(int r, int c, int num)
{
    if (r < 0 || c < 0 || r > N || c > M) return;
    if (arr[r][c] == 1) {
        arr[r][c] = num;
        for (int i = 0; i < 4; i++){
            dfs(r+dr[i],c+dc[i],num);
        }
    }
    return;
}

int main()
{
    int n=2;
    int i,j;

    M = 1,N=1;

    while(N!=0&&M!=0)
    {
        n=2;
        memset(arr,0,sizeof(arr));
        cin >> M >> N;
        if (M == 0 || N == 0) return 0;
        for (i = 1; i <= N; i++){
            for (j = 1; j <= M; j++){
                cin >> arr[i][j];
            }
        }

        for (i = 1; i <= N; i++){
            for (j = 1; j <= M; j++){
                if (arr[i][j] == 1) {
                    dfs(i,j,n);
                    n++;
                }
            }
        }

        n++;
        cout << n-3 << endl;
    }

    return 0;
}