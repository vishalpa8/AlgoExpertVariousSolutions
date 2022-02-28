#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
#define fast_io ios_base::sync_with_stdio(0); cin.tie(0)
class Graph {
public:
    map<char, bool> visited;
    map<char, list<char> > adj;
 
    void addEdge(char v, char w){
        adj[v].push_back(w);
    }

    void DFS(char v){
        
        visited[v] = true;
        cout << v << " ";
        // list<char>::iterator i;
        for(auto i = adj[v].begin(); i!=adj[v].end(); i++){
            if(!visited[*i]){
                DFS(*i);
            }
        }

    }
};

class Node{
    public:
        string name;
        vector<Node*>children;

        Node(string name){
            this->name = name;
        }
        vector<string> dfs(vector<string>* array){
            array->push_back(this->name);
            for(int i = 0; i < this->children.size(); i++){
                children[i]->dfs(array);
            }
            return *array;
        }

        Node* addChild(string name){
            Node* child = new Node(name);
            children.push_back(child);
            return this;
        }

};



int main(){
    fast_io;

    Graph g;
    g.addEdge('A','B');
    g.addEdge('A','C');
    g.addEdge('A','D');
    g.addEdge('B','E');
    g.addEdge('B','F');
    g.addEdge('F','I');
    g.addEdge('F','J');
    g.addEdge('D','G');
    g.addEdge('D','H');
    g.addEdge('G','K');

    g.DFS('A');


    return 0;
}