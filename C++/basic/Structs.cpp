#include <iostream>

using std::cout;
using std::endl;

struct mystruct{
    int i;
    std::string s;
    bool b;

    void test(){
        cout << "Test"<<endl;
    }
};

struct person{
    std::string name;
    int age;
    char gender;

    void info(){
        // cout << "Name : " << name <<endl;
        cout << "Age : " << age <<endl;
        cout << "Gender : " << gender <<endl;

    }


    // int i;
    // std::string s;
    // bool b;

    // void test(){
    //     cout << "Test"<<endl;
    // }
};

int main(){

    // struct mystruct m1;

    // m1.i=20;
    // m1.s="hello";
    // m1.b=false;
    // struct  mystruct m2;

    // m2.i=200;
    // m2.s="hello there";
    // m2.b=true;

    // cout << m1.i << std::endl;
    // cout << m1.s << std::endl;
    // cout << m1.b << std::endl;
    // m1.test();
    // cout << m2.i << std::endl;
    // cout << m2.s << std::endl;
    // cout << m2.b << std::endl;
    // m2.test();


    struct person p1;
    p1.name="AMIT";
    p1.age=19;
    p1.gender='m';


    // cout << p1.name << std::endl;
    cout << p1.age << std::endl;
    cout << p1.gender << std::endl;

    p1.info();


    struct person p2;
    p2.name="DIP";
    p2.age=20;
    p2.gender='m';

    // cout << p2.name << std::endl;
    cout << p2.age << std::endl;
    cout << p2.gender << std::endl;

    p2.info();

    cout << sizeof(p2) << endl;






     



    return 0;
}