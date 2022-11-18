#include<iostream>
#include<queue>
#include<cstring>

using namespace std;

queue<int> q;
int chk[10],n,f,t,a,fps;

int main(){
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> n >> f;
        memset(chk,0,sizeof(chk));
        while(!q.empty()){
            q.pop();
        }
        for (int j = 0; j < n; j++){
            cin >> a;
            chk[a]++;
            q.push(a);
        }
        fps = f;
        int c = 0;
        for(int d = 1; !q.empty();){
            for (int i = q.front()+1; i < 10; i++){
                if (chk[i] > 0){
                    q.push(q.front());
                    q.pop();
                    fps = fps==0?q.size()-1:fps-1;
                    c++;
                    break;
                }
            }
            if (c == 0){
                if (fps == 0) {
                    cout << d << "\n";
                    break;
                }
                chk[q.front()]--;
                q.pop();
                fps--,d++;
            }
            c=0;
        }
    }

    return 0;
}