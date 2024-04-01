class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n=nums.size();
        int index=0;
        for(int i=0;i<n;i++){
            if(nums[i]!=val){
                nums[index]=nums[i];
                index++;
            }
        }
        return index;
    }
};

complexity o(n);

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int left=0;
        int right=nums.size()-1;
        while(left<=right){
            if(nums[left]==val){
                swap(nums[left],nums[right]);
                right--;
            }
            else{
                left++;
            }
        }
        return left;
    }
};