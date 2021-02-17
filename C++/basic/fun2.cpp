#include <iostream>


using namespace std;

void myFunction(){
    static int x=10;
    x++;
    cout << x<<endl;
    

    

}

int main(){

    myFunction();
    myFunction();

    return 0;
}