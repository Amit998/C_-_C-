// #include <iostream>
// #include <string>
// #include <algorithm>
// using namespace std;

// int longestPalindrome(string X, int i, int j)
// {

// 	if (i > j)
// 		return 0;

	
// 	if (i == j)
// 		return 1;


// 	if (X[i] == X[j])
// 	{
// 		cout<<X;
		
// 		return longestPalindrome(X, i + 1, j - 1) + 2;
// 	}


// 	return max (longestPalindrome(X, i, j - 1),
// 				longestPalindrome(X, i + 1, j));
// }

// // Longest Palindromic Subsequence using Dynamic Programming
// int main()
// {
// 	string X = "ACTGAT,";
// 	int n = X.length();

// 	cout << "The length of Longest Palindromic Subsequence is "
// 			<< longestPalindrome(X, 0, n - 1);

// 	return 0;
// }


// #include<iostream>
// using namespace std;

// int max (int x, int y) {
  
//   return (x > y)? x : y;
// }

// int palSubseqLen(string str) {
//   int n = str.size();
   
//   int lenTable[n][n];            // Create a table to store results of subproblems

//   for (int i = 0; i < n; i++)
      
//       lenTable[i][i] = 1;             //when string length is 1, it is palindrome

//   for (int col=2; col<=n; col++) {
//       for (int i=0; i<n-col+1; i++) {
//          int j = i+col-1;
//          cout<<j;
//          if (str[i] == str[j] && col == 2){
            
             
//             lenTable[i][j] = 2;
            
//          }
//          else if (str[i] == str[j]){
             
             
//             lenTable[i][j] = lenTable[i+1][j-1] + 2;
            
//          }
//          else
//          {
            
            
//             lenTable[i][j] = max(lenTable[i][j-1], lenTable[i+1][j]);
            
//          }
        
//       }
      
//   }
  
//   return lenTable[0][n-1];
// }

// int main() {
//   string sequence = "ATTGAT";
//   int n = sequence.size();
//   cout << "The length of the longest palindrome subsequence is: " << palSubseqLen(sequence);
// }
#include<bits/stdc++.h>
using namespace std;

void printPermutations(char arr[], int be){
    if (arr[be] == '\0')//base case
    {
         cout  << arr<<" " ;
          return;
    }

      for(int pos = be; arr[pos] != '\0'; ++pos)
      {
        swap(arr[pos], arr[be]);
        printPermutations(arr, be + 1);//recursive call
        swap(arr[pos], arr[be]);
      }
}

void subsets(char in[],char ans[],int i,int j,int be)
{
    if(in[i]=='\0')//if we reached at the end of our input array-base case:then print the subset
    {
        ans[j]='\0';//terminate the temp array this is the required subset
        printPermutations(ans, 0);//calling permutation function to find all the permutations of the given subset
        return;
    }

    ans[j]=in[i];//else if we have not reached to the end of input array
    subsets(in,ans,i+1,j+1,be);//increase both i and j
    subsets(in,ans,i+1,j,be);//inc only i

}

int main()
{
    char input[100]="abcd"; //creating input array

    char ans[100];//creating a temp array which will store the subsets

    subsets(input,ans,0,0,0);//this will compute all the subsets of the given string
}