#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)

void insertionSort(vector<int> array){
    for(int i=1; i<array.size(); i++){
        int j = i;
        while(j > 0 && array[j] < array[j-1]){
            swap(array[j],array[j-1]); //Current Number Compare to their previous value and place it.
            j--;
        }
    }
    for(auto i : array){
        cout << i << " ";
    }
}

int main(){
    fast_io;

    insertionSort({3,4,5,1,52,53});


    return 0;
}