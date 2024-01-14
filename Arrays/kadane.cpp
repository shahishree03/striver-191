class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        cout.tie(NULL);
          int max = nums[0];
  int maxSoFar = max;
  int len = nums.size();
  for (int i = 1; i < len; i++) {
    if (max > 0)
      max += nums[i];
    else
      max = nums[i];
    if (maxSoFar < max)
      maxSoFar = max;
  }
    return maxSoFar;
    }
};
