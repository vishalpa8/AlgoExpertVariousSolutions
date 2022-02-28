#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)

string caesherCipherEncryptor(string str,int value){
    string ans = "";

    for(char c : str){
        int num = c + value;
        if(num > 122){
            ans += (num - 122) + 96; 
        }
        else{
            ans += (char)c + value;
        }
    }

    // cout << endl;
    return ans;
}

int main(){
    fast_io;
    string s = "xyz"; //cde
    cout << caesherCipherEncryptor(s,5);


    return 0;
}