#include<bits/stdc++.h>

using namespace std;

struct s
{
    int x,y,tm,isgram;
};

int arr[105][105];
int bm[105][105];
int n,m,t;
queue<s>q;
int dx[] = {0,1,0,-1},dy[] = {1,0,-1,0};

void ptq(s f)
{
    for (int i = 0; i < 4; i++){
        q.push({f.x+dx[i],f.y+dy[i],f.tm+1,f.isgram});
    }
}

int bfs()
{
    s f;
    while(!q.empty()){
        f = q.front();
        if (arr[f.x][f.y] == 3) return f.tm;
        q.pop();
        if(!bm[f.x][f.y] && (f.x >= 0 && f.x < n && f.y >= 0 && f.y < m)){
            bm[f.x][f.y] = 1;
            if (arr[f.x][f.y] == 2){
                f.isgram=1;
                ptq(f);
            }
            if (arr[f.x][f.y] == 0) ptq(f);
            else if (arr[f.x][f.y] == 1 && f.isgram == 1) ptq(f);
        }
        
    }
    return -1;
}

int main()
{
    int i,j;
    cin>>n>>m>>t;
    for(i = 0; i < n; i++){
        for (j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    arr[n-1][m-1] = 3;
    q.push({0,0,0,0});
    int returnedbfs = bfs();
    if (returnedbfs==-1 || returnedbfs > t) cout<<"Fail";
    else cout << returnedbfs;
}