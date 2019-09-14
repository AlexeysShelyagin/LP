#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 652;
    for(int i = 0; i < 15; i++){
        a -= 18;
        if(a % 25) cout<<i;
    }
    return 0;
}
