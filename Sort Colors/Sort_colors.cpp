class Solution {
public:
    void sortColors(vector<int>& nums) {
        int lo = 0;
        int mid = 0;
        int hi = nums.size() - 1;
        // 1) mid ke baare me socho
        // 2) 0 to lo-1 -> 0 , hi+1 to end -> 2
        //lo to mid - 1->1 
        while (mid <= hi) {
            if (nums[mid] == 2) {
                int temp = nums[mid];
                nums[mid] = nums[hi];
                nums[hi] = temp;
                hi--;
            } else if (nums[mid] == 0) {
                int temp = nums[mid];
                nums[mid] = nums[lo];
                nums[lo] = temp;
                lo++;
                mid++;
            }
            else mid++;
        }
        return;
    }
};