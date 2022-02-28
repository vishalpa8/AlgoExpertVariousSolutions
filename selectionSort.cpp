#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)

void selectionSort(vector<int> array){
    int startIdx = 0;

    while(startIdx < array.size()-1){
        int smallestIdx = startIdx;
        for(int i = startIdx + 1;  i < array.size(); i++){
            if(array[smallestIdx] > array[i]){
                smallestIdx = i;
            }
        } 
        swap(array[smallestIdx],array[startIdx]);
        startIdx++;
    }

    for(auto i : array){
        cout << i << " ";
    }
}

int main(){
    fast_io;    

    selectionSort({832,13,31,5,1,3,6,7});



    return 0;
}