//
//  main.cpp
//  Tic Tac Toe
//
//  Created by Shuai Wang on 10/31/14.
//  Copyright (c) 2014 Shuai Wang. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int checkWon(vector<vector<int>> &board) {
        int row = (int)board.size();
        int column = (int)board[0].size();
        
        //check row
        for (int i = 0; i < row; i++) {
            if (board[i][0] != 0) {
                int j = 1;
                for (; j < column; j++) {
                    if (board[i][j] != board[i][j - 1]) {
                        break;
                    }
                }
                
                if (j == column) {
                    return board[i][0];
                }
            }
        }
        
        //check column
        for (int i = 0; i < column; i++) {
            if (board[0][i] != 0) {
                int j = 1;
                for (; j < row; j++) {
                    if (board[j][i] != board[j - 1][i]) {
                        break;
                    }
                }
                
                if (j == row) {
                    return board[0][i];
                }
            }
        }
        
        
 
        if (board[0][0] != 0) {
            int diax = 1;
            for (;diax < row; diax++) {
                if (board[diax][diax] != board[diax - 1][diax - 1]) {
                    break;
                }
            }
            
            if (diax == row) {
                return board[0][0];
            }
        }
        
        if (board[row - 1][0] != 0) {
            int diay = row - 2;
            for (; diay >= 0; diay--) {
                if (board[diay][row - 1 - diay] != board[diay + 1][row - 1 - (diay + 1)]) {
                    break;
                }
            }
            
            if (diay == -1) {
                return board[row - 1][0];
            }
        }
        return 0;
        
    }

};

int main(int argc, const char * argv[]) {
    vector<vector<int>> board = {{2,2,1}, {2,1,2}, {1,2,1}};
    Solution su;
    cout << su.checkWon(board) << endl;
    
    return 0;
}
