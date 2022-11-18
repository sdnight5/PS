#include<iostream>

using namespace std;

int n,m;
int arr[55][55];

int main()
{
    char c;
    cin >> n >> m;
    
    for (int i= 0; i < n; i++){
        for (int j = 0; j < m; j++){
            cin >> c;
            if (c == 'B') arr[i][j] = 1;
        }
    }

    int X=0,cnt=0,mncnt=1<<30;

    for (int i = 0; i <= n-8; i++){
        for(int j = 0; j <= m-8; j++){
            X = arr[i][j];
            for(int k = i; k < i+8; k++){
                for (int l = j; l < j+8; l++){
                    if ((k&1)^(l&1)) {
                        if (arr[k][l] != X) cnt++;
                    }
                    else {
                        if (arr[k][l] == X) cnt++;
                    }
                }
            }
            mncnt = min(mncnt,cnt);
            mncnt = min(mncnt,64-cnt);
            cnt = 0;
        }
    }

    cout << mncnt;
}