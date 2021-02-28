#include <iostream>

using namespace std;

const int D=8;
bool canPlace(int board[D][D],int n,int r,int c){
    return r >= 0 && r < n && c >=0 && c < n;

}

bool solveKnightMove(int board[D][D],int n,int move_no, int currRow,int currCol){

    if(move_no==n*n){
        return true;
    }

    int rowDir[]={+2,+1,-1,-2,+2,-2,-1,+1};
    int colDir[]={+1,+2,-2,-1,-1,+1,+2,-2};

    for(int curDir=0;curDir<8;++curDir){
        int nextRow=currRow +rowDir[curDir];
        int nextCol=currCol +colDir[curDir];
        if(canPlace(board,n,nextRow,nextCol)==true){
            board[nextRow][nextCol]=move_no+1;
            bool isSuccesful =solveKnightMove(board,n,move_no+1,nextRow,nextCol);
            if (isSuccesful == true)
            {
                return true;
            }
            board[nextRow][nextCol]=0;
            
        }

        return false;
    }

}

void printBoard(int board[D][D],int n){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; i < n; j++)
        {
            cout<<board[i][j]<<" ";
        }
        cout<<endl;
        
    }
    

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
        printBoard(board,n);
    }
    

    return 0;
}