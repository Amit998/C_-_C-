#include <iostream>
#include <list>

using namespace std;

void display(list<int> &lst){
    // int i;
    list<int> :: iterator it;

    // cout << lst<<endl;
    for (it=lst.begin();it!=lst.end();it++){
        cout<<*it<<endl;
        // cout << lst.begin()<<endl;
    }
    cout<<" ";
}

int main(){

    list<int> list1;
    list<int> list2(7);

    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(3);
    list1.push_back(4);
    list1.push_back(5);
    list1.push_back(6);
    // list1.pop_back();
    // list1.pop_back();
    // list1.remove(6);
    // list1.pop_back();
    // list1.pop_front();

    list<int> :: iterator iter;
    iter = list1.begin();

    // display(list1);

    iter=list2.begin();
    *iter=12;
    iter++;
    *iter=2;
    iter++;
    *iter=23;
    iter++;
    *iter=32;
    iter++;
    *iter=1;
    iter++;

    list2.sort(); 

    list1.merge(list2);
    list1.reverse();
    display(list1);


    // cout<< *iter<<endl<<"";
    // cout<< *iter++;
    // cout<< *iter++<<endl<<"";
    // cout<< *iter++;





    return 0;
 }