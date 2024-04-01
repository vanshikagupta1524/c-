class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
unordered_set<int> st;
int operations=0;
for(int i=nums.size()-1;i>=0;i--){
operations++;
if(nums[i]<=k){
    st.insert(nums[i]);
}
if(st.size()==k){
    return operations;
}
}
        

return 0;
      
    }
};