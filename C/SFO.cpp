#include<iostream>
using namespace std; 
main( ) 
{  
      int n=4,v=0;
      int  s[n][n];
      int  i, j;
      cout<<"\n2D Array Input:\n";

      
      while (v != n)

      {
          
                  for(i=0;i<2;i++)
                    {
                        for(j=0;j<2;j++)
                        {
                            cout<<"\ns["<<i<<"]["<<j<<"]=  ";
                            cin>>s[i][j];
                            v+=1;
                        }
                    }
      
          

          
      }
      
       
      cout<<"\nThe 2-D Array is:\n";
      for(i=0;i<n;i++)
      {
        for(j=0;j<n;j++)
        {
            cout<<"\t"<<s[i][j];
        }
        cout<<endl;
      } 
} 