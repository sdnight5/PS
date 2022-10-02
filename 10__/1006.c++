#include <bits/stdc++.h>
using namespace std;

int arr[105][105],bm[105][105][4];
int n,m;
int sr,sc,sfw,lr,lc,lfw;
int rm[5]={0, 0, 2, 1, 3};
struct info{ int r,c,fw,t; };
queue<info> q;
int dr[] = {0, 1, 0, -1};
int dc[] = {1, 0, -1, 0};

int push(int r,int c, int fw, int t) {
    if (bm[r][c][fw]) return 0;
    bm[r][c][fw]=1;
    q.push({r, c, fw, t});
    if (r == lr && c == lc && fw == lfw) return 1;
    return 0;
}

int bfs()
{
    push(sr,sc,rm[sfw],0);
    while(!q.empty()){
        info now = q.front(); q.pop();
        // turn right
        if (push(now.r, now.c, (now.fw+1)%4, now.t+1)) return now.t+1;
        // turn left
        if (push(now.r, now.c, (now.fw+3)%4, now.t+1)) return now.t+1;
        // move
        for (int i = 1; i < 4; i++){
            int nr = now.r+dr[now.fw] * i;
            int nc = now.c+dc[now.fw] * i;
            if (nr <= 0||nc <= 0||nr > m||nc > n || arr[nr][nc] == 1) break;
            if (push(nr,nc,now.fw,now.t+1)) return now.t+1;
        }
    }
}

int main()
{
    int i,j;
    #ifdef _WIN32
    freopen("input.txt", "r", stdin);
    #endif // _WIN32
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    cin >> m >> n;
    for (i = 1; i <= m; i++){
        for (j = 1; j <= n; j++){
            cin >> arr[i][j];
        }
    }
    cin >> sr >> sc >> sfw;
    cin >> lr >> lc >> lfw;

    lfw=rm[lfw];

    cout << bfs();

    return 0;
}
