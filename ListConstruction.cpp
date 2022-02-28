#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)

struct LinkedList
{
    int value;
    LinkedList* next;
};

// LinkedList* head = NULL;

LinkedList* add(LinkedList* root, int data){
    if(root == NULL){
        LinkedList* temp = new LinkedList;
        temp->value = data;
        temp->next = NULL;
        return temp;
    }
    else{
        root->next = add(root->next,data);
    }
    return root;
}

void traverse(LinkedList* head){
    
    if(head == NULL){
        return; 
    }
    cout << head->value << " ";
    traverse(head->next);
}


int main(){
       fast_io;

       LinkedList* head = NULL;

       head = add(head,8);
       head = add(head,10);
       head = add(head,12);
       head = add(head,13);
       head = add(head,15);

       traverse(head);

       return 0;
}