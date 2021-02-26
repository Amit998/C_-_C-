#include <iostream>
#include<vector>

using namespace std;


template <class T>
void display(vector<T> &v){
    cout<<"Displaying This Vector"<Tam<endl;

    for (int i = 0; i< v.size();i++){
        cout<<v[i]<<" ";
        cout<<v.at(i)<<" ";
    }
    cout<<""<<endl;
}

int main(){
    vector<int> vec1;
    vector<char> vec2(4);
    // vector<double> vec2(vec2);
    vector<int> v(6,3);

    vec2.push_back('5');

    display(v);
    int ele,size=5;

    // cout<<"Enter The Size : ";
    // cin >>size;
    // for (int i=0;i<size;i++){

    //     cout<<"Enter Element to add this vector : ";

    //     cin>>ele;

    //     vec1.push_back(ele);
    // }
    // vector<int> :: iterator iter = vec1.begin();

    // vec1.insert(iter,556);

    // vector<int> :: iterator iter = vec1.begin();
    
    // vec1.insert(iter+1,556);

   

    // vector<int> :: iterator iter = vec1.begin();
    
    // vec1.insert(iter+1,10,556);


    // vec1.pop_back();
    // display(vec1);

    // cout<<""<<vec1[0]<<endl;;


    return 0;
}