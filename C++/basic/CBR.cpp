#include <iostream>

using namespace std;
void myFunction1(int);


int main(){

    int x=10;
    myFunction1(x);
    myFunction1(x);

    int i1=0;
    int &integer1=i1;

    cout <<integer1<<endl;

    integer1 +=90;
   

    cout <<integer1<<endl;
    

    return 0;
}

void myFunction1(int x){
    x++;
    cout <<x<<std::endl;

}
void myFunction2(int &x){
    x++;
    cout <<x<<std::endl;

}