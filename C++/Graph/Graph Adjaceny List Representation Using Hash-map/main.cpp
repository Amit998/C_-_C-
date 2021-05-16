#include<iostream>
#include<list>
#include<unordered_map>
#include<string>

using namespace std;


class Graph{
    unordered_map<string,list<pair<string,int>>> l;
    
    public:
    void addEdge(string x,string y,bool bidir,int wt){
        l[x].push_back(make_pair(y,wt));
        if(bidir){
            l[y].push_back(make_pair(x,wt));
        }
    }
  
    void print_adj_list(){
        for (auto p:l){
            string city=p.first;
            list<pair<string,int>> nbrs=p.second;

            cout<<"City "<<city<<endl;

            for(auto nbr:nbrs){
                string dest=nbr.first;
                int distance=nbr.second;

                cout<<"destination "<<dest<<" distance "<<distance<<endl;
            }
            cout<<endl;

        }
    }
    
};


int main(){
    Graph g;
    g.addEdge("A","B",true,20);
    g.addEdge("A","C",true,40);
    g.addEdge("B","D",true,50);
    g.addEdge("C","D",true,10);
    g.addEdge("A","D",true,90);
    
    g.print_adj_list();
    return 0;

}