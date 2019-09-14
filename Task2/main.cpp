#include <bits/stdc++.h>

using namespace std;

vector < int > sorted(0);
vector < int > ans(10, 0);

int push(int value, int level){
    int ans = 1;
    for(int i = 0; i < level; ++i){
        ans *= 10;
    }
    ans *= value;
    return ans;
}

void calculate (int len){
    vector < int > sorted2(0);
    for(int i = 0; i < len; ++i){
        sorted2.push_back(sorted[len-i-1]);
        //cout<<sorted2[i];
    }
    //cout<<endl;
    for(int i = len - 1; i >= 0; --i){
        if(sorted2[i] < sorted[i]){
            sorted2[i-1] --;
            ans[i] = sorted2[i]+10 - sorted[i];
        }
        else{
            ans[i] = sorted2[i] - sorted[i];
        }
    }
}

int main()
{
    string number;
    cin>>number;
    int len = number.length();
    int miin = 0, maax = 0;
    for(int i = 0; i < len; ++i){
        sorted.push_back(number[i]-48);
        //ans.push_back(0);
    }
    sort(sorted.begin(), sorted.end());
/*
    for(int i = 0; i < len; ++i){
        miin += push(sorted[i], i);
        maax += push(sorted[len-i-1], len-i-1);
    }
    cout<<miin<<"   "<<maax<<endl;
    ans = maax - miin;

    for(int i =0; i < len; ++i){
        cout<<sorted[i];
    }
    cout<<endl;
*/
    calculate(len);
    for(int i = 0; i < len; ++i){
        cout<<ans[i];
    }
    return 0;
}
