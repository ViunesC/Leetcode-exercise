#include <iostream>
#include <vector>
#include "Easy/q9.h"
#include "Easy/q13.h"
#include "Easy/q14.h"

int main() {
    // std::cout << q9::isPalindrome(121) << std::endl;
    // std::cout << q13::romanToInt("XIX") << std::endl;
    std::vector<std::string> vrts;
    vrts.push_back("Apple");
    vrts.push_back("Baha");
    vrts.push_back("Appolo");
    vrts.push_back("Application");
    vrts.push_back("Charlie");
    vrts.push_back("Behemorth");
    vrts.push_back("Banana");
    q14::longestCommonPrefix(vrts);
    return 0;
}
