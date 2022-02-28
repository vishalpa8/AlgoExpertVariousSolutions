#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)

bool firstSolution(string s){
    int i = 0, j = s.size()-1;

    while(i < j){
        if(s[i]!=s[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

bool secondSolution(string s, int i){
    int j = s.length()-1-i;
    return i >= j ? true : s[i] == s[j] && secondSolution(s,i+1);
}

int main(){
    fast_io;

    bool flag = firstSolution("abdaba");

    if(flag){
        cout << "it is palindrome." << endl;
    }
    else{
        cout << "it is not a palindrome" << endl;
    }


    return 0;
}