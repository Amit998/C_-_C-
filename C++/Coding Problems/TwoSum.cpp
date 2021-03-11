#include <iostream>
#include <map>
#include <vector>
#include <list>
using namespace std;


int main(){
    vector<int> v;
    int size,n;
    cout<<"endter The Size"<<endl;
    cin >> size;
    for (int i;i<=size;i++){
        cin >>n;
        v.push_back(n);
    }
    cout<<v<<endl;

    // cout<<"hello World";

    return 0;
}