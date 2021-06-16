#include<iostream>
#include<list>
#include<unordered_map>
#include<string>

using namespace std;
int V=10;

class Graph{
    int V;
    list<string> *l;
    

    public:
    Graph(int V){
        this->V = V;
        l=new list<string>[V];
    }
    
    public:
    void addEdge(string x,string y,bool bidir=true){
        l[x].push_back(y);
        
        if(bidir){
            l[y].push_back(x);
        }
    }
    bool cycle_helper(int node,bool *visited,int parent){
        visited[node]=true;

        for (auto nbr:l[node]){
            if(!visited[nbr]){
                bool cycle_=cycle_helper(nbr,visited,node);
                if (cycle_){}
                {
                    return true;
                }
                
            }
            else if(nbr!=parent){
                return true;

            }
        }

    }
    bool contains_cycle(){
        bool *visited=new bool[V];
        for (int i=0;i<V;i++){
            visited[i]=false;
        }
        return cycle_helper(0,visited,-1);

    }
    
};


int main(){
    Graph g(5);
    g.addEdge("A","B",true);
    g.addEdge("A","C",true);
    g.addEdge("B","D",true);
    g.addEdge("C","D",true);
    g.addEdge("A","D",true);
    
    
    return 0;

}