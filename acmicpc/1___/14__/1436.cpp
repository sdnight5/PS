#include<iostream>

using namespace std;

int a,b,c,d;

int main()
{
    cin >> a;

    for (int i = 666; i < 10000666; i++){
        b = i;
        while(b){
            if (b%1000 == 666) {d++; break;}
            b /= 10;
        }
        if (a == d) {cout << i; return 0;}
    }
}