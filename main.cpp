#include <bits/stdc++.h>

using namespace std;

string number;
int len;

bool delFour (){
    if((number[len-1]-48) + (number[len-2]-48)*10 % 4 == 0) return 1;
    return 0;
}

bool delNine (){
    int summ = 0;
    for(int i = 0; i < len; ++i){
        summ += number[i] - 48;
    }
    return (summ % 9 == 0);
}

bool delEleven (){
    int summ1 = 0;
    int summ2 = 0;
    for(int i = 0; i < len; i+=2){
        summ1 += number[i] - 48;
    }
    for(int i = 1; i < len; i+=2){
        summ2 += number[i] - 48;
    }

    if(summ1 + summ2 %11 == 0) return 1;
    if(abs(summ1 - summ2) %11 == 0) return 1;
    return 0;
}

int convert (){
    if(!delFour() && !delNine() && !delEleven()) return 1;
    if(delFour() && !delNine() && !delEleven()) return 2;
    if(!delFour() && delNine() && !delEleven()) return 3;
    if(!delFour() && !delNine() && delEleven()) return 4;
    if(delFour() && delNine() && !delEleven()) return 5;
    if(delFour() && !delNine() && delEleven()) return 6;
    if(!delFour() && delNine() && delEleven()) return 7;
    if(delFour() && delNine() && delEleven()) return 8;

}

int main()
{
    cin>>number;
    len = number.length();
    cout<<convert();
    return 0;
}
