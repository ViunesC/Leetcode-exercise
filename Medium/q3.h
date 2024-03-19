//
// Created by wangj on 2024/3/12.
//
#include <iostream>
#include <unordered_set>

#ifndef LEETCODE_Q3_H
#define LEETCODE_Q3_H


class q3 {
        public:
        static int lengthOfLongestSubstring(std::string s);
};

int q3::lengthOfLongestSubstring(std::string s) {
    int maxlength = 0, left = 0;
    std::unordered_set<char> set;

    for (int i=0;i<s.length();++i) {
        if (set.count(s[i]) == 0) {
            set.insert(s[i]);
            maxlength = std::max(maxlength, i-left + 1);
        } else {
            while (set.count(s[i]) == 1) {
                set.erase(s[left]);
                ++left;
            }
            set.insert(s[i]);
        }
    }

    return maxlength;
}

#endif //LEETCODE_Q3_H
