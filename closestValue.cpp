#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)

class BST{
    public:
        int value;
        BST* left;
        BST* right;

        BST(int val);
        BST* insert(int val);

};


int first_solution(BST* head, int target, int closet){

    if(abs(target - closet) > abs(target - head->value)){
            closet = head->value;
    }

    if(head->value < target && head->right != NULL){
        return first_solution(head->right,target,closet);
    }
    else if(head->value > target && head->left != NULL){
        return first_solution(head->left,target,closet);
    }
    else{
        return closet;
    }
}

int second_solution(BST* head, int target, int closet){
    BST* currentNode = head;

    while(currentNode!=NULL){
        if(abs(target - closet) > abs(target - currentNode->value)){
            closet = currentNode->value;
        }
        if(currentNode->value > target && currentNode->left != NULL){
            currentNode = currentNode->left;
        }
        else if(currentNode->value < target && currentNode->right != NULL){
            currentNode = currentNode->right;
        }
        else{
            break;
        }
    }

    return closet;
}
int main(){
       fast_io;




       return 0;
}