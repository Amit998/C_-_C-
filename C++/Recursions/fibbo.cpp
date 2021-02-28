#include <iostream>

using namespace std;

int fibbo(int n){
    if(n <=1 ){
        return 1;
    }
    // cout << n<<endl;
    return  fibbo(n-2)+fibbo(n-1);
};

int main(){

    int n=2;
    // cout<<"Enter a number"<<endl;
    // cin>>n;

    cout<<fibbo(n);
    
    // cout<<"The Fibonacci Of "<<n<<" is "<<fibbo(n)<<endl;
    
    // cout<<fact(n);

    // cout<<fact(6);


    return 0;
}