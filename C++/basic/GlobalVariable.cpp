#include <iostream>
#include <includes/GlobalVariables.h>

using namespace std;


static int x=100;
extern int test;

int x =100;
int myFunction();

int main(){
    add_to_x(10);

    cout<< test << endl;

    return 0;
}

int myFunction(){
    x += 1;
    cout<<x<<endl;
    return 0;
}