#include <iostream>
#include <functional>
#include <algorithm>
#include <array>

using namespace std;



int main(){
    int arr[]={1,2,3,4,5,12,4,23,11};

    sort(arr,arr+5);

    sort(arr,arr+5,greater<int>());

    for (int i=0;i<9;i++)
    {
        cout << arr[i]<<endl;

    }
   



    return 0;
}