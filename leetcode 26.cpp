//  brute force TC: O(nlogn)
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> st;
        for(int i=0;i<nums.size();i++) st.insert(nums[i]);
        vector<int> v;
        for(auto it: st) v.push_back(it);
        nums=v;
        return nums.size();
    }
};


// tc O(n)
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0;
        for(int j=1;j<nums.size();j++){
            if(nums[i]!=nums[j]){
                i++;
                nums[i]=nums[j];
            }
        }
        return i+1;
    }
};