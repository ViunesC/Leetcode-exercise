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
    std::string temp;

    for (auto it = strs.begin();it != strs.end();++it) {
        if (it == strs.begin())
            crr_longest = *it;
        temp = *it;
        for (int i=0;i<temp.length();++i) {
            if (i == crr_longest.length())
                break;
            if (crr_longest[i] != temp[i]) {
                crr_longest.erase(i);
                break;
            }
        }

        if (crr_longest.empty()) {
            break;
        }
    }

    return crr_longest;
}


#endif //LEETCODE_Q14_H
