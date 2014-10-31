//
//  main.cpp
//  Swap Two Numbers in Place
//
//  Created by Shuai Wang on 10/31/14.
//  Copyright (c) 2014 Shuai Wang. All rights reserved.
//

#include <iostream>

using namespace std;

class Solution {
public:
    void swap (int &a, int &b) {
        a = a + b;
        b = a - b;
        a = a - b;
        return;
    }

};

int main(int argc, const char * argv[]) {
    int a = 10;
    int b = 4;
    Solution su;
    su.swap(a, b);
    cout << a << " " << b << endl;
    return 0;
}
