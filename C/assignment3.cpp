#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <typeinfo>
#define MAX 1000
using std::cerr;
using std::endl;
using std::ofstream;
using namespace std;

void moving_parity_P(){
    
    char B[MAX];
    int counter=0;
    char current_char;
    int num_characters = 0;
    int i = 0,variable;
    int one = 1;
    
    
    
    ifstream myfile ("sub_string_A.txt");

     if (myfile.is_open())
        {
          while ( !myfile.eof())
          {
                myfile >> B[i];
                i++;
                num_characters ++;
          }      
    }
    
    for (i=0; i<num_characters; ++i){
       
        
    
        if( B[i] == one ){
            
            counter+=1;
            cout<< " B " <<B[i]<< one <<" One "<<endl;
            cout<<"if"<<endl;
            
        }else{
            cout<< " B " <<B[i]<< one <<" One "<<endl;
            cout<<"else"<<endl;
        }
    }
    cout<< counter;
    
    
}
void subString(char A[MAX], int num_characters)
{
    int i,upper=6,lower=1;
    ofstream outdata;
    
    // cout << "Enter Upper Limit: "; 
    // cin >> upper; 
    
    // cout << "Enter lower Limit: "; 
    // cin >> lower; 
  
    outdata.open("sub_string_A.txt");
       if( !outdata ) { 
          cerr << "Error: file could not be opened" << endl;
          exit(1);
       }

        for (i=lower; i<upper; ++i)
        outdata << A[i] << endl;
        outdata.close();
        
        moving_parity_P();
        
}

int main () 
{
 
  char A[MAX];
  char current_char;
  int num_characters = 0;
  int i = 0;

  ifstream myfile ("test.txt");

     if (myfile.is_open())
        {
          while ( !myfile.eof())
          {
                myfile >> A[i];
                i++;
                num_characters ++;
          }      
    }
    subString(A,num_characters);
}


// // This program output values from an array to a file named example2.dat
// int main()
// {
//   ofstream outdata; // outdata is like cin
//   int i; // loop index
//   int num[5] = {4, 3, 6, 7, 12}; // list of output values

// outdata.open("example2.dat"); // opens the file
//   if( !outdata ) { // file couldn't be opened
//       cerr << "Error: file could not be opened" << endl;
//       exit(1);
//   }

// for (i=0; i<5; ++i)
//       outdata << num[i] << endl;
//   outdata.close();
 
//   return 0;
// }
    
    
    
// }

// #include <iostream>
// using std::cerr;
// using std::endl;
// #include <fstream>
// using std::ofstream;
// #include <cstdlib> // for exit function
// // This program output values from an array to a file named example2.dat
// int main()
// {
//   ofstream outdata; // outdata is like cin
//   int i; // loop index
//   int num[5] = {4, 3, 6, 7, 12}; // list of output values

// outdata.open("example2.dat"); // opens the file
//   if( !outdata ) { // file couldn't be opened
//       cerr << "Error: file could not be opened" << endl;
//       exit(1);
//   }

// for (i=0; i<5; ++i)
//       outdata << num[i] << endl;
//   outdata.close();
 
//   return 0;
// }