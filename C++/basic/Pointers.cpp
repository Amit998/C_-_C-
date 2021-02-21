#include <iostream>


using std::cout;
using std::endl;


void fun1(){
    cout<<"I AM Function One !"<<endl;
}

void fun2(){
    cout<<"I AM Function Two !"<<endl;

}



int main(){

    void(*myFunc)();

    myFunc = fun1;
    myFunc();

    myFunc = fun2;
    myFunc();



    // int arr[100];

    // cout << &arr <<endl;

    // cout << &arr[0] <<endl;
    // cout << &arr[1] <<endl;
    // cout << &arr[2] <<endl;
    // cout << &arr[3] <<endl;
    // cout << &arr[4] <<endl;

    // int *ptr = arr;

    // cout << ptr << endl;
    
    // int a=10;

    // int *myPtr=&a;

    // cout<<sizeof(a)<< endl;
    // cout<< &a << endl;

    // cout<< *myPtr << endl;


    // int a=10;

    // int *ptr=&a;

    // cout << ptr <<endl;
    // cout << ptr++ <<endl;
    // cout << ptr++ <<endl;
    // cout << ++ptr <<endl;
    // cout << ++ptr <<endl;
    // cout << ptr++ <<endl;

    // int arr[10];

    // int *first_pos=arr;

    // for(int i=0;i <10;i++){
    //     *(first_pos + i) = i * 20;

    // }

    // for(int x : arr){
    //     cout << x <<endl;
    // }


    // int a=10;

    // int *ptr=&a;

    // ptr=0;

    // ptr=NULL;

    // ptr=nullptr;

    // if(ptr == 0){
    //     cout<<"Message"<<endl; 
    // }

    // int a =20;

    // int *ptr = &a;

    // int **pptr = &ptr;

    // cout<< &pptr << endl;

    // cout<< ptr << endl;

    // cout<< pptr << endl;






    // char myChar='A';

    // cout<< &myChar << endl;

    // cout<< (void *) &myChar << endl;







    return 0;
}