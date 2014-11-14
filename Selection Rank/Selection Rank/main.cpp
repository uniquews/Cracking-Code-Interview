//
//  main.cpp
//  Selection Rank
//
//  Created by Shuai Wang on 11/13/14.
//  Copyright (c) 2014 Shuai Wang. All rights reserved.
//

#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int selectionRank(vector<int> &A, int start, int end, int rank) {
        int index = partition(A, start, end);
        int leftSize = index - start + 1;
        if (rank == leftSize) {
            return A[index];
        } else if (rank > leftSize) {
            return selectionRank(A, index + 1, end, rank - leftSize);
        } else {
            return selectionRank(A, start, index - 1, rank);
        }
    
    }
    
    int partition(vector<int> &A, int start, int end) {
        int pivot = A[end];
        int leftTail = start - 1;
        for (int rightHead = start; rightHead <= end - 1; rightHead++) {
            if (A[rightHead] <= pivot) {
                leftTail++;
                swap(A[leftTail], A[rightHead]);
            }
        }
        
        swap(A[leftTail + 1], A[end]);
        return leftTail + 1;
    }
    
};

int main(int argc, const char * argv[]) {
//    vector<int> A = {8,9,1,5,13,7,100,30,2};
//    vector<int> A = {8,9,1,5,2,7};
    vector<int> A = {8,9,5,5,5,9};
    Solution su;
    cout << su.selectionRank(A, 0, 5, 4) << endl;
    
    return 0;
}
