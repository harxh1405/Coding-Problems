//nxn board
//each row->exactly one queen
//each column->exactly one queen
//queens must be at non attacking positions
#include <iostream>
using namespace std;
bool issafe(int row,int col,int n,int board[][20]){
    int duprow=row;
    int dupcol=col;
    //check for same row
    while(col>=0 && row>=0){
        if(board[row][col]==1)
        return false;
        col--;
        row--;
    }
    row=duprow;
    col=dupcol;
    while(col>=0){
        if(board[row][col]==1)
        return false;
        col--;
    }
    while(row<n && col>=0){
         if(board[row][col]==1)
        return false;
        col--;
        row++;
    }
    return true;
}
void solve(int col,int n,int board[][20]){
    //base case
    if(col==n){
        //print the board
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                cout<<board[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<endl;
        return;
    }
    for(int row=0;row<n;row++){
        if(issafe(row,col,n,board)){
            board[row][col]=1;
            solve(col+1,n,board);
            board[row][col]=0;
        }
    }
}
int main()
{
    int board[20][20]={0};
    int n;
    cin>>n;
    solve(0,n,board);

    return 0;
}