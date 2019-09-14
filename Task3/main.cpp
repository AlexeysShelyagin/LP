#include <bits/stdc++.h>
#define cin fin

using namespace std;

vector < vector < int > > pole(2001, vector < int >(2001, 0));

int main()
{
    ifstream fin ("input.txt");
    string commands;
    cin>>commands;
    pole[1000][1000] = 1;
    int len = commands.length(), co = 0;
    int x = 1000, y = 1000;
    for(int i = 0; i < len; ++i){
        if(commands[i] == 'U'){
            y++;
        }
        if(commands[i] == 'D'){
            y--;
        }
        if(commands[i] == 'L'){
            x--;
        }
        if(commands[i] == 'R'){
            x++;
        }
        pole[x][y]++;
    }
    for(int i = 0; i < 2001; ++i){
        for(int j = 0; j < 2001; ++j){
            if(pole[i][j] > 1) co++;
        }
    }
    cout<<co;
    return 0;
}
