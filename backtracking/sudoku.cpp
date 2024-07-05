/*#include <bits/stdc++.h> 

bool isSafe(vector<vector<int>>& boards, int row, int column,int val){
    for(int i=0;i<boards.size();i++){
        
        if(boards[row][i]==val){
            return false;
        }
    if(boards[i][column]==val){
            return false;
        }

    if(boards[3*(row/3)+i/3][3*(column/3)+i%3]==val){
        return false;
    }    
    }
    return true;
}
bool solve(vector<vector<int>>& boards){
    int n = boards.size();

    for(int row=0;row<n;row++){
        for(int column=0;column<n;column++){

            // check if cell is empty 
            if(boards[row][column]==0){
                for(int val = 1;val<=9;val++){
                    if(isSafe(boards,row,column,val)){
                    boards[row][column]=val;
                    // recursive call

                    bool nextSolution = solve(boards);
                    if(nextSolution){
                        return true;

                    }
                    else{
                        boards[row][column]=0;
                    }

                }
            }
            return false;
           
        }}
    }
    return true;
}
void solveSudoku(vector<vector<int>>& sudoku)
{
	// Write your code here
    // No need to print the final sudoku
    // Just fill the values in the given matrix
    solve(sudoku);

}*/