//
// Created by wangj on 2024/2/28.
//

#ifndef LEETCODE_Q13_H
#define LEETCODE_Q13_H

#include <iostream>

class q13 {
public:
    static int romanToInt(std::string s);
};

int q13::romanToInt(std::string s) {
    int sum = 0;
    int len = s.length();

    for (int i = 0; i < len; ++i) {
        switch ((s[i] - '0') + 48) {
            case 73: // "I"
                if (i != len) {
                    if (s[i + 1] == 'V') {
                        sum += 4;
                        i += 1;
                        break;
                    } else if (s[i + 1] == 'X') {
                        sum += 9;
                        i += 1;
                        break;
                    }
                }
                sum += 1;
                break;
            case 86: // "V"
                sum += 5;
                break;
            case 88: // "X"
                if (i != len) {
                    if (s[i + 1] == 'L') {
                        sum += 40;
                        i += 1;
                        break;
                    } else if (s[i + 1] == 'C') {
                        sum += 90;
                        i += 1;
                        break;
                    }
                }
                sum += 10;
                break;
            case 76: // "L"
                sum += 50;
                break;
            case 67: // "C"
                if (i != len) {
                    if (s[i + 1] == 'D') {
                        sum += 400;
                        i += 1;
                        break;
                    } else if (s[i + 1] == 'M') {
                        sum += 900;
                        i += 1;
                        break;
                    }
                }
                sum += 100;
                break;
            case 68: // "D"
                sum += 500;
                break;
            case 77: // "M"
                sum += 1000;
                break;
        }
    }

    return sum;
}

#endif //LEETCODE_Q13_H
