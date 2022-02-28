#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)
#define endl "\n";

int binarySearchRecursive(vector<int> v, int value,int low, int high){
    if(low <= high){
        int mid = (low + high)/2;
        if(v[mid] == value){
            return mid;
        }
        else if(v[mid] < value){
            return binarySearchRecursive(v,value,mid+1,high);
        }
        return binarySearchRecursive(v,value,low,mid-1);
    }

    return -1;
}
int binarySearchIterative(vector<int> v,int value){
        int low = 0;
        int high = v.size()-1;

        while(low <= high){
            int mid = (low + high)/2;
            if(v[mid] == value){
                return mid;
            }
            else if(v[mid] < value){
                low = mid + 1;
            }
            else if(v[mid] > value){
                high = mid-1;
            }
        }
        return -1;
}
int main(){
    fast_io;

    vector<int> v = {1,2,3,4,5,6,7,8};
    int n = v.size();

    cout << binarySearchIterative(v,9);




    return 0;
}