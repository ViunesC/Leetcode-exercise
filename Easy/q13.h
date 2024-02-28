//
// Created by wangj on 2024/2/28.
//

#ifndef LEETCODE_Q13_H
#define LEETCODE_Q13_H

#include <iostream>

class q13 {
public:
    int romanToInt(std::string s);
};

int q13::romanToInt(std::string s) {
    int prev, sum = 0;
    int len = s.length();


    for (int i=0;i<len;++i) {
        switch (s[i] - '0') {
            case 73: // "I"
                if (i != len) {
                    if (s[i+1] == 'V') {
                        sum += 4;
                        i += 2;
                    } else if (s[i+1] == 'X') {
                        sum += 9;
                        i+= 2;
                    }
                }
                sum += 1;
                break;
            case 86: // "V"

        }
    }
}

#endif //LEETCODE_Q13_H
