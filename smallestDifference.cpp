#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)
void smallestDifference(vector<int> array1,vector<int> array2){
        sort(array1.begin(),array1.end());
        sort(array2.begin(),array2.end());

        vector<int> answer;
        int difference = INT_MAX;
        int i=0, j = 0;

        while(i < array1.size() && j < array2.size()){
            int diff = abs(array1[i]-array2[j]);
           
            if(diff == 0){
                difference = diff;
                answer.clear();
                answer.push_back(array1[i]);
                answer.push_back(array2[j]);
                break;
            }
            else if( diff < difference){
                difference = diff;
                answer.clear();
                answer.push_back(array1[i]);
                answer.push_back(array2[j]);
            }
            else if(array1[i] <  array2[j]){
                i++;
            }
            else{
                j++;
            }
        }

        for(auto i : answer){
            cout << i << " ";
        }


}

int main(){
    fast_io;

    smallestDifference({-1,5,10,20,28,3},{26,134,135,15,17});


    return 0;
}