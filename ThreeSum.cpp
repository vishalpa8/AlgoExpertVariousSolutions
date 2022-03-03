#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)

vector<vector<int>> threeSum(vector<int> v, int target){
    sort(v.begin(),v.end());
    const int n = v.size();
    vector<vector<int>> vt;


    for(int i=0; i<n; i++){
        int j = i+1, k = n-1;
        while(j < k){
            int total = v[i] + v[j] + v[k];
            if(total == target){
                vt.push_back({v[i],v[j],v[k]});
                j++;
                k--;
            }
            else if(total < target){
                j++;
            }
            else if(total > target){
                k--;
            }
        }
    }

    return vt;
}

int main(){
    fast_io;



    vector<vector<int>> v = threeSum({12,3,1,2,-6,5,-8,6},0);

    for(auto numbers : v){
        for(auto num : numbers){
            cout << num << " ";
        }
        cout << endl;
    }



    return 0;
}