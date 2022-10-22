/// UNSOLVED!   

#include<bits/stdc++.h>

using namespace std;

int r,c;
int arr[1505][1505];
queue<pair<int,int>> q;
pair<pair<int,int>,pair<int,int>> bpos;
int dx[] = {1,0,-1,0};
int dy[] = {0,1,0,-1};

int isesc(int r, int c)
{
    if (r < 0 || c < 0 || r > 1500 || c > 1500) return 0;
    return 1;
}

void meltDfs()
{
    int i,j;
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            if (arr[i][j] == 0 || arr[i][j] == 2){
                for (int k = 0; k < 4; k++){
                    if (isesc(i+dx[k],j+dy[k]) && arr[i+dx[k]][j+dy[k]] == 1)
                        arr[i+dx[k]][j+dy[k]] = 3;
                }
            }
        }
    }
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            if (arr[i][j] == 3) arr[i][j] = 0;
        }
    }
}

int judgeBfs()
{
    pair<int,int> f;
    q.push(bpos.first);
    while(!q.empty()){
        f = q.front();
        if (arr[f.first][f.second] == 2) return 1;
        q.pop();
        if (arr[f.first][f.second] == 0){
            for(int i = 0; i < 4; i++){
                q.push({f.first+dx[i],f.second+dy[i]});
            }
        }
    }
    return 0;
}

int main()
{
    int i,j;
    char ch;
    cin >> r >> c;
    for (i = 0; i < r; i++){
        for (j = 0; j < c; j++){
            cin >> ch;
            if (ch=='.') arr[i][j] = 0;
            if (ch=='L'){
                arr[i][j] = 2;
                if (bpos.first.first == 0 && bpos.first.second == 0)
                    bpos.first.first=i,bpos.first.second=j;
                else bpos.second.first=i,bpos.second.second=j;
            }
            if (ch=='X') arr[i][j] = 1;
        }
    }
    for (i = 0; judgeBfs() == 0; i++){
        meltDfs();
    }
    cout<<i;
    return 0;
}