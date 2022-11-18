#include<iostream>
#include<queue>

using namespace std;

int n,k;
queue<int> q;
queue<int> backup;

int main()
{
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        q.push(i+1);
    }
    while(!q.empty()){
        for (int i = 0; i < k-1; i++){
            q.push(q.front());
            q.pop();
        }
        backup.push(q.front());
        q.pop();
    }
    cout << "<";
    while(backup.size() > 1)
    {
        cout << backup.front() << ", ";
        backup.pop();
    }
    cout << backup.front() << ">";
}