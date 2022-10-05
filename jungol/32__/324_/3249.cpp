#include<bits/stdc++.h>
#define endl '\n'

using namespace std;

int n,arr[1024][1024],idx=-1;
string s;

void op(){
    int i,j;
    cout<<n<<'\n';
    for(i = 0; i < n;i++){
        for(j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
    // cout<<'\n';
}

void fi11(int xpos, int ypos, int l){
    int i,j;

    for (i = xpos; i < xpos+l; i++){
        for(j = ypos; j < ypos+l; j++){
            arr[i][j] = 1;
        }
    }
    return;
}

void f(int xpos, int ypos, int l)
{
    idx++;
    if (s[idx] == 'X'){
        f(xpos,ypos,l/2);
        f(xpos,ypos+l/2,l/2);
        f(xpos+l/2,ypos,l/2);
        f(xpos+l/2,ypos+l/2,l/2);
        return;
    }
    if (s[idx] == '0') return;
    if (s[idx] == '1'){
        fi11(xpos,ypos,l);

        return;
    }
}

int main()
{
    cin >> n >> s;
    f(0,0,n);
    op();
}
