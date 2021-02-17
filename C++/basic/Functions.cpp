#include <iostream>

using namespace std;
std::string add(string,string,string);

int add(int,int);
int add(int=10,int=90,int=90);
bool isGreater(int,int);
int f1(void);
int f2(void);
void myFunction(void);






int main(){
    
    // cout<<add(10,20)<<endl;
    // cout<<isGreater(10,20)<<endl;
    // myFunction();
    cout<<add()<<endl;
    // cout<<add("Hello ","Hi "," There")<<endl;
    return 0;
}


int f1(){

    return 1;
}
int f2(){
    return 0;
}

int add(int x,int y){
    return x + y;
}

int add(int x,int y,int z){
    return x + y + z;
}

std::string add(string x,string y,string z){
    return x + y + z;
}


bool isGreater(int x,int y){
    if( x > y){
        cout<<"X is greater then Y"<<endl;
        return x>y;
    }else{
        cout<<"Y is greater then x"<<endl;
        return x<y;
    }
}

void myFunction(){
    cout<<"Hello World"<<endl;
}