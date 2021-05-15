#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool f(int x,int y)
{
    return x > y;
    
}

int main()
{
    vector<int> A={110,31,14,53,160,200,400};

    // cout <<  A[1]<<endl;

    sort(A.begin(),A.end()); // 0(NlogN)

    // for (int i=0; i!=A.size(); i++ ){
    //     cout<<A[i]<<" ";
    // }
    // cout<<endl;

    bool present=binary_search(A.begin(),A.end(),4);

    A.push_back(100);
    A.push_back(100);
    A.push_back(110);
    A.push_back(101);
    
    // for (int i=0; i!=A.size(); i++ ){
    //     cout<<A[i]<<" ";
    // }


    // cout<<present<<endl;

    vector<int>::iterator it1=lower_bound(A.begin(),A.end(),100);

    vector<int>::iterator it2=upper_bound(A.begin(),A.end(),100);

    cout << *it1 <<" "<< *it2<<endl;

    cout << it1 - it2<<endl;
    
    sort(A.begin(),A.end(),f);
    
    // for (int i=0; i!=A.size(); i++ ){
    //     cout<<A[i]<<" ";
    // }
    // cout<<endl;
    
    vector<int>::iterator it3;
    
    for(it3 = A.begin(); it3 != A.end(); it3++){
        cout<< *it3<<" ";
    }



    return 0;
}