//
// Created by wangj on 2024/3/19.
//

#include <iostream>
#include <vector>

#ifndef LEETCODE_Q4_H
#define LEETCODE_Q4_H

class q4 {
public:
    static double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2);
};

double q4::findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2) {
    if (nums1.empty() && nums2.empty()) {
        return 0.0;
    } else if (nums1.empty()) {
        auto size = nums2.size();
        return (size % 2 == 0) ? (nums2[size/2-1] + nums2[size/2]) / 2.0 : nums2[size/2];
    } else if (nums2.empty()) {
        auto size = nums1.size();
        return (size % 2 == 0) ? (nums1[size/2-1] + nums1[size/2]) / 2.0 : nums1[size/2];
    }

    int l = 0, r = 0;
    std::vector<int> merged;

    if ((nums1.size()+nums2.size()) % 2 == 0) {
        for (int i=0;i<=(nums1.size()+nums2.size())/2;++i) {
            if (l < nums1.size() && (r >= nums2.size() || nums1[l] <= nums2[r])) {
                merged.push_back(nums1[l]);
                ++l;
            } else if (r < nums2.size()) {
                merged.push_back(nums2[r]);
                ++r;
            }
        }

        return (merged[merged.size()-1] + merged[merged.size()-2]) / 2.0;
    } else {
        for (int i=0;i<(nums1.size()+nums2.size()+1)/2;++i) {
            if (l < nums1.size() && (r >= nums2.size() || nums1[l] <= nums2[r])) {
                merged.push_back(nums1[l]);
                ++l;
            } else if (r < nums2.size()) {
                merged.push_back(nums2[r]);
                ++r;
            }
        }

        return merged[merged.size()-1];
    }
}


#endif //LEETCODE_Q4_H
