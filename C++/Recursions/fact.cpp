#include <iostream>

using namespace std;

int fact(int n){
    if(n <=1 ){
        return 1;
    }

    int smallFact=fact(n-1);
    int ans =smallFact * n;
    return fact(ans);
};

int main(){

    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    cout<<"The Factorial Of "<<n<<" is "<<fact(n)<<endl;
    
    return 0;
}