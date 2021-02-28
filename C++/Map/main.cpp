#include <iostream>
#include <string>
#include <map>

using namespace std;



int main(){
    map<string,int> marksMap;

    marksMap["AMit"]=50;
    marksMap["Kuntal"]=67;
    marksMap["Dip"]=65;
    marksMap.insert({{"Ramesh",123}});

    map<string,int> :: iterator itr;

    for (itr=marksMap.begin(); itr!=marksMap.end();itr++){
        cout<<(*itr).first<<" "<<(*itr).second<<"\n";
    }

    cout<<"The Size Is"<<marksMap.size()<<endl;
    cout<<"The Max Size Is"<<marksMap.max_size()<<endl;
    cout<<"The Empt's Value Is"<<marksMap.empty()<<endl;
   




    return 0;
}