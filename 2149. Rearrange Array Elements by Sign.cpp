class Solution {
    public:
        vector<int> rearrangeArray(vector<int>& nums) {
            int n = nums.size();
            vector<int> pos, neg, result(n);
    
            for (int num : nums) {
                if (num > 0) pos.push_back(num);
                else neg.push_back(num);
            }
    
            for (int i = 0, p = 0, q = 0; i < n; i++) {
                result[i] = (i % 2 == 0) ? pos[p++] : neg[q++];
            }
            return result;
        }
    };


    
//  Method 2: But rejected
class Solution {
    private:
        void findPositiveAndBringAtFirst (vector<int>& nums, int loc, int size) {
            int i = loc+1;
            int pos = -1;
            while(i < size) {
                if (nums[i] > 0) {
                    pos = i;
                    break;
                }
                i++;
            }
            if(pos == -1) {
                return;
            }
            int temp = nums[pos];
            for (int j = pos; j > loc; j--) { 
                nums[j] = nums[j - 1];
            }
            nums[loc] = temp;
        }
    
        void findNegativeAndBringAtFirst (vector<int>& nums, int loc, int size) {
            int i = loc+1;
            int pos = -1;
            while(i < size) {
                if (nums[i] < 0) {
                    pos = i;
                    break;
                }
                i++;
            }
            if(pos == -1) {
                return;
            }
            int temp = nums[pos];
            for (int j = pos; j > loc; j--) { 
                nums[j] = nums[j - 1];
            }
            nums[loc] = temp;
        }
    
    
    public:
        vector<int> rearrangeArray(vector<int>& nums) {
            int n = nums.size();
            for(int i=0 ; i<n ; i++) {
                if(i%2 == 0) {
                    if (nums[i] > -1) {
                        continue;
                    }
                    else {
                        findPositiveAndBringAtFirst(nums,i,n);
                    }
                }
                else {
                    if (nums[i] < 0) {
                        continue;
                    }
                    else {
                        findNegativeAndBringAtFirst(nums,i,n);
                    }
                }
            }
            return nums;
        }
    };
    