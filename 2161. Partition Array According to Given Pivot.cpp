class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> before,after,res;
        int count = 0;
        for (int i=0 ; i<nums.size() ; i++) {
            if(nums[i]<pivot)   before.push_back(nums[i]);
            else if (nums[i]>pivot) after.push_back(nums[i]);
            else count++;
        }

        for(int i=0 ; i<before.size() ; i++) {
            res.push_back(before[i]);
        }
        while(count>0) {
            res.push_back(pivot);
            count--;
        }
        for(int i=0 ; i<after.size() ; i++) {
            res.push_back(after[i]);
        }
        return res;
    }
};

