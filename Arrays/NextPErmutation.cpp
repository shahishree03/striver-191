#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        int i = n - 2;

        // Find the first element from the right that is smaller than its next element
        while (i >= 0 && nums[i] >= nums[i + 1]) {
            i--;
        }

        if (i >= 0) {
            // Find the smallest element to the right of nums[i] that is larger than nums[i]
            int j = n - 1;
            while (j > i && nums[j] <= nums[i]) {
                j--;
            }

            // Swap nums[i] and nums[j]
            swap(nums[i], nums[j]);
        }

        // Reverse the subarray to the right of nums[i]
        reverse(nums.begin() + i + 1, nums.end());
    }
};

int main() {
    Solution s;
    
    // Example 1
    vector<int> nums1 = {1, 2, 3};
    s.nextPermutation(nums1);
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;

    // Example 2
    vector<int> nums2 = {3, 2, 1};
    s.nextPermutation(nums2);
    for (int num : nums2) {
        cout << num << " ";
    }
    cout << endl;

    // Example 3
    vector<int> nums3 = {5,1,1};
    s.nextPermutation(nums3);
    for (int num : nums3) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
