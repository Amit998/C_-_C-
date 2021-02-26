#include<iostream>

using namespace std;

template<class T1=int,class T2=float,class T3=char>
class Amit{
    public:
    T1 a;
    T2 b;
    T3 c;
    Amit(T1 x,T2 y,T3 z){
        a=x;
        b=y;
        c=z;
    }
    void display(){
        cout<<"The Value For A "<< a<<endl;
        cout<<"The Value For B "<< b<<endl;
        cout<<"The Value For C "<< c<<endl;

    }
};


int main(){

    // Amit<int,float> amit(1,1.0);
    // Amit<> amit(1,1.0,'AMit');

    Amit<char,char,char> amit('1','1','1');
    amit.display();

    return 0;
}