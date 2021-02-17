#include <iostream>


using namespace std;

int main(){
    int n;
    cout<<"number"<<endl;

    cin >> n;
    
    if(n > 10){
        cout << "This is 10"<<endl;
    }else{
        if (n < 8){
            cout << "This number is greater then 10"<<endl;

        }
        cout << "This is not 10"<<endl;
    }

    return 0;
}