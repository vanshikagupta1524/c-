class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       int ind=-1;
       int n=nums.size();
       for(int i=n-2;i>=0;i--){
        if(nums[i]<nums[i+1]){
            ind=i;
            break;
          
…            swap(nums[i],nums[ind]);
            break;
        }
        
       }
       reverse(nums.begin()+ind+1,nums.end());
    }
};