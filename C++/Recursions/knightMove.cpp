// #include <iostream>
// #include <iomanip>

// using namespace std;

// const int D=8;
// static int counter=0;

// bool canPlace(int board[D][D],int n,int r,int c){
//     // cout<<move_no<<"  "<<n<<endl;
//     // cout <<"can't"<< endl;
//     return 
//     r >= 0 && r < n &&
//     c >= 0 && c < n && 
//     board[r][c] == 0;

// }

// bool solveKnightMove(int board[D][D], int n, int move_no, int curRow, int curCol){
//     // int counter;
//     counter++;
    
//     if (move_no == n*n){
//         // printBoard(board,n);
//         return true;
//     }

//     int rowDir[] = {+2, +1, -1, -2, -2, -1, +1, +2};
//     int colDir[] = {+1, +2, +2, +1, -1, -2, -2, -1};
//     for(int curDir = 0; curDir < 8; ++curDir){
//         int nextRow = curRow + rowDir[curDir];
//         int nextCol = curCol + colDir[curDir];
        
//         if (canPlace(board, n, nextRow, nextCol) == true){
//             // place the knight
//             board[nextRow][nextCol] = move_no + 1; // place the knight
//             bool isSuccessful = solveKnightMove(board, n, move_no + 1, nextRow, nextCol);
//             if (isSuccessful == true) return true;
//             board[nextRow][nextCol] = 0;    // erase the knight
//         }
//     }
//     cout<<counter<<endl;
//     return false;
// }

// void printBoard(int board[D][D],int n){
//     cout<<n<<endl;
//     for (int i = 0; i < n; ++i)
//     {
//         for (int j = 0; j < n; ++j)
//         {
//             cout<<setw(3)<<board[i][j]<<" ";
//         }
//         cout<<endl;
        
//     }
    

// }


// int main(){

//     int n; cin >>n;
//     int board[D][D]={0};  
//     board[0][0]=1;
//     bool result=solveKnightMove(board,n,1,0,0);
//     // cout<<result;
//     if (result== true)
//     {
//         printBoard(board,n);
//     }else{
//         // printBoard(board,n);
//         cout<<"Sorry can't"<<endl;
//     }
    

//     return 0;
// }

#include <iostream>
#include <iomanip>

using namespace std;

const int D=8;
static int counter=0;

void printBoard(int board[D][D],int n){
    cout<<n<<endl;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cout<<setw(3)<<board[i][j]<<" ";
        }
        cout<<endl;   
    }
}

bool canPlace(int board[D][D],int n,int r,int c){
    // cout<<move_no<<"  "<<n<<endl;
    // cout <<"can't"<< endl;
    return 
    r >= 0 && r < n &&
    c >= 0 && c < n && 
    board[r][c] == 0;

}

bool solveKnightMove(int board[D][D], int n, int move_no, int curRow, int curCol){
    // int counter;
    counter++;
    
    if (move_no == n*n){
        printBoard(board,n);
        cout<<"--------\n"<<endl;
        return true;
    }

    int rowDir[] = {+2, +1, -1, -2, -2, -1, +1, +2};
    int colDir[] = {+1, +2, +2, +1, -1, -2, -2, -1};
    for(int curDir = 0; curDir < 8; ++curDir){
        int nextRow = curRow + rowDir[curDir];
        int nextCol = curCol + colDir[curDir];
        
        if (canPlace(board, n, nextRow, nextCol) == true){
            // place the knight
            board[nextRow][nextCol] = move_no + 1; // place the knight
            solveKnightMove(board, n, move_no + 1, nextRow, nextCol);
            // bool isSuccessful = solveKnightMove(board, n, move_no + 1, nextRow, nextCol);
            // if (isSuccessful == true) return true;
            board[nextRow][nextCol] = 0;    // erase the knight
        }
    }
    // cout<<counter<<endl;
    return false;
}



int main(){

    int n; cin >>n;
    int board[D][D]={0};  
    board[0][0]=1;
    bool result=solveKnightMove(board,n,1,0,0);
    // cout<<result;
    if (result== true)
    {
        printBoard(board,n);
    }else{
        // printBoard(board,n);
        cout<<"Sorry can't"<<endl;
    }
    

    return 0;
}