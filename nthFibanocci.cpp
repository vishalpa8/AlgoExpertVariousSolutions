#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)

//First Solution Using Dynamic Programming O(n), Space Complexity = O(n).

int dp_solution(int value){
    vector<ll> v(value+1);
    v[0] = 0;
    v[1] = 1; 
    
    for(int i=2; i<v.size(); i++){
        v[i] = v[i-1] + v[i-2];
    }

    return v[value-1];
    
// 0 1 1 2 3
}
//Second Solution using UnorderedMap O(n), Space Complexity = O(n).
int optimiziedSolution(int value,unordered_map<int,int>mp){
    if(mp.find(value)!=mp.end()){
        return mp[value];
    }

    mp[value] = optimiziedSolution(value-1,mp) + optimiziedSolution(value-2,mp);

    return mp[value];
}
int getHelper(int value){
    unordered_map<int,int> mp = {{1,0},{2,1}};

    return optimiziedSolution(value,mp);
}

//Third Solution O(n), space Complexity = 0(1)

int fibannocci(int value){
    int array[] = {0,1};   
    int count = 3;

    while(count <= value){ // 3,5 -> 
        int num = array[0] + array[1];
        array[0] = array[1];
        array[1] = num;
        count++; 
    }
    return value > 1 ? array[1] : array[0];

}


int main(){
    fast_io;

    cout << getHelper(6) << endl;

    return 0;
}