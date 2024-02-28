//
// Created by wangj on 2024/2/28.
//

#ifndef LEETCODE_Q9_H
#define LEETCODE_Q9_H

#include <iostream>

class q9 {
public:
    static bool isPalindrome(int);
};

bool q9::isPalindrome(int x) {
    std::string str = std::to_string(x);
    int len = str.length();
    int j = len - 1;
    for (int i=0;i<len;++i) {
        if (i > j)
            break;
        if (str[i] != str[j])
            return false;
        --j;
    }

    return true;
}

#endif //LEETCODE_Q9_H