#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)

void bubbleSort(vector<int> &v){
    bool is_Sorted = false;
    int counter = 0;

   while(!is_Sorted){
       is_Sorted = true;
       for(int i=0; i<v.size()-counter-1; i++){
           if(v[i] > v[i+1]){
               swap(v[i],v[i+1]);
               is_Sorted = false;
           }
       }
       counter++;
   }
   for(auto i : v){
       cout << i << " ";
   }
}

int main(){
    fast_io;
    vector<int> v = {1,23,13,63,89,6,7};
    bubbleSort(v);


    return 0;
}