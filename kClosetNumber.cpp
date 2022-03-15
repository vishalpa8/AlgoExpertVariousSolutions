#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)
vector<int> findClosestElements(vector<int> arr, int k, int x) {

        priority_queue<pair<int,int>>pi;
        vector<int> answer;

        for(auto n : arr){
            pi.push(make_pair(abs(x-n),n));
            cout << pi.top().first << " " << pi.top().second << endl;
            if(pi.size() > k){
                pi.pop();
            }
        }


        while(!pi.empty()){
            answer.push_back(pi.top().second);
            pi.pop();
        }


        sort(answer.begin(),answer.end());
        return answer;
        
}

int main(){
    fast_io;
    vector<int> v = {1,2,3,4,5};
    int k = 4;
    int x = 3;

    vector<int> ans = findClosestElements(v,k,x);

    for(auto i : ans){
        cout << i <<  " ";
    }
    


    return 0;
}