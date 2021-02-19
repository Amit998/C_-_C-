#include <iostream>
#include <string.h>

using namespace std;

int main(){
    string s="hello";
    string s2("hello");

    cout<< s <<" and " << s2<<endl;

    cout<<s.length()<<endl;


    cout<<s.at(6)<<endl;
    cout<<s[6]<<endl;

    if(s == s2){
        cout<<"SAME"<<endl;

    }else{
        cout<<"NOT SAME"<<endl;
    }


    string comined=s+s2;
    cout<< comined <<endl;



    // string myText="MyText";

    // char newText[10]="TEXT";

    // cout<<sizeof(newText)<<endl;
    // cout<<sizeof(myText)<<endl;
    // cout<<strlen(newText)<<endl;



    // char text[20];
    // char text2[200];

    // cin>> text2;

    // cout<<strcpy(text,text2)<<endl;
    // cout<<strcmp(text,text2)<<endl;
    // cout<<strcat(text,text2)<<endl;

    // char concatenated[216]=strcat(text,text2);
    // cout<<concatenated<<endl;



    // newText[0]='A';
    // newText[1]='B';
    // newText[2]='C';
    // newText[3]='D';

    // cout<<newText<<endl;
    // char text[10]="Hello";
    // cout<<text[0]<<endl;
    // cout << text<<endl;
    

    return 0;
}