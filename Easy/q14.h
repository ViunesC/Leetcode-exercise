//
// Created by wangj on 2024/2/29.
//

#include <iostream>
#include <vector>
#include <algorithm>

#ifndef LEETCODE_Q14_H
#define LEETCODE_Q14_H

class q14 {
public:
    static std::string longestCommonPrefix(std::vector<std::string>& strs);
};

std::string q14::longestCommonPrefix(std::vector<std::string>& strs) {
    std::sort(strs.begin(),strs.begin() + strs.size());

    std::string crr_longest;
    int crr_count;
    std::string temp;
    int tmp_count;

    for (auto it = strs.begin();it != strs.end();++it) {

    }



    return "";
}


#endif //LEETCODE_Q14_H
