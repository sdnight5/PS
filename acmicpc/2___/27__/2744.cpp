#include<iostream>
#include<string>

using namespace std;

int main()
{
    string a;
    cin >> a;
    for(int i = 0; i < a.size(); i++){
        if (a[i] <= 'Z') cout << (char)(a[i]+'a'-'A');
        else cout << (char)(a[i]-'a'+'A');
    }

    return 0;
}