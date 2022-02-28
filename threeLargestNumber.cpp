#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)


void firstSolution(vector<int> v){
    // vector<int> answer;

    int a = INT_MIN,b = INT_MIN,c = INT_MIN;

    for(int i=0; i<v.size(); i++){

        if(v[i] > c){
            a = b;    // shifting the value [1,5,6] like that.
            b = c;
            c = v[i];
        }
        else if(v[i] > b){
            a = b;
            b = v[i];
        }
        else if(v[i] > a){
            a = v[i];
        }
        
    }

    cout << a << " " << b << " " << c; 
}


int main(){
    fast_io;

    vector<int> v = {141,1,17,-7,-17,-27,18,541,8,7,7};

    firstSolution(v);
    

    return 0;
}