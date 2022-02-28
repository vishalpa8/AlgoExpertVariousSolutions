#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)

void solution_first(vector<int> v,int value){
       sort(v.begin(),v.end());
       // cout << "fuckoff";
       int i = 0, j = v.size()-1;
       while(i < j){
              if(v[i] + v[j] == value){
                     cout << v[i] << " " << v[j] << "\n";
                     break;
              }
              else if(v[i] + v[j]  < value){
                     i++;
              }
              else if(v[i] + v[j] > value){
                     j--;
              }

       }

}
void solution_second(vector<int> v,int value){
       unordered_set<int> s;

       for(auto num : v){
              // cout << num << " ";
              int left_value = value - num;
              auto it = s.find(left_value);
              if(it != s.end()){
                    cout << num << " " << left_value;
              }
              else{
                     s.insert(num);
              }
       }

}

int main(){
       fast_io;

       int n,sum;
       cin >> n >> sum;
       vector<int> v(n);
       for(int i=0; i<n; i++){
              cin >> v[i];
       }
       solution_first(v,sum);
       solution_second(v,sum);




       return 0;
}