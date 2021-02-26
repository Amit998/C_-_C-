#include<iostream>

using namespace std;


template <class T>
class Amit{
    public:
    T data;
    Amit(T a){
        data=a;

    }
    void display();


};

template<class T>
void Amit<T>:: display(){
    cout<<data<<endl;

}


void func(int a){
    cout<<"I am First Func "<<a<<endl;

}

template<class T>
void func(T a){
    cout<<"This Template Func()"<<a<<endl;

}

int main(){

    // func(1);
    // func(1.1);
    func<char>('char');



    // Amit<int> a(10);

    // cout<<a.data<<endl;

    // cout<<a.display()<<endl;
    // a.display();
    

    
    return 0;
}