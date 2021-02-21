#include <iostream>


using std::cout;
using std::endl;






int main(){

    // const int A=20;

    // cout<<A<<endl;

    // cout<<  A + 20  <<endl;

    // int b=A;

    // cout<<b<<endl;

    // b = b+ 50;

    // cout<<b<<endl;

    int a =10;
    int b=20;

    const int *p1=&a;
    int* const p2=&a;

    *p2 =20;

    cout<<a<<endl;

    const int* const p3= &a;

    // p3 = &b;

    

    


    return 0;
}