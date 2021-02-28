#include <iostream>

using namespace std;

int increase(int n){
    
    if(n == 1 ){
        return 1;
    }
   
    increase(n-1);
    cout << n<<" ";
};

int decrease(int n){
    
    if(n == 0 ){
        return 0;
    }
    cout << n<<" ";
    decrease(n-1);
    // cout << n<<" ";
};


int main(){

    int n=10;
  
    cout<<increase(n);
  


    return 0;
}