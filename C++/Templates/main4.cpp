#include<iostream>

using namespace std;


float funcAverange(int a,int b){
    float avg= (a+b)/2.0;
    return avg;
}


// template <class T1,class T2>
// float funcAverange(T1 a,T2 b){
//     T1 avg= (a+b)/2.0;
//     return avg;
// }

template <class T1,class T2>
float swaap(T1 &a,T2 &b){
    // T1 avg= (a+b)/2.0;
    printf("\nBefore a is %d",a);
    printf("\nBefore b is %d",b);

    printf("\nAfter Swap Opretion ");
    T1 temp;
    temp=a;
    a=b;
    b=temp;

    printf("\nAfter a is %d",a);
    printf("\nAfter b is %d",b);

    // return a,b;
}

int main(){

    int a=10,b=11;

    swaap<int,int>(a,b);

    // cout<<"",a<<endl;
    // printf("\nThe Swaping A and B is %d",a,"  ",b);

    cout<<a<<endl<<b;
    return 0;
}