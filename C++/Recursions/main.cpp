#include <iostream>

using namespace std;

int fact(int n){
    if(n <=1 ){
        return 1;
    }
    return n *  fact(n-1);
};

int main(){

    int n;

    cout<<"Enter a number"<<endl;

    cin>>n;
    
    cout<<"The Factorial Of "<<n<<" is "<<fact(n)<<endl;
    
    // cout<<fact(n);

    // cout<<fact(6);


    return 0;
}