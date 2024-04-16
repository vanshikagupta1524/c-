// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     vector<int>arr{-2,-3,4,-1,-2,1,5,-3};
//     int sum=0;
//     int maxi=INT_MIN;
   

//     for(int i=0;i<arr.size();i++){
//         sum=sum+arr[i];
//         if(sum>maxi){
//             maxi=sum;

//         }
      
//         if(sum<0){
//             sum=0;
//         }

//     }
//     cout<<maxi<<endl;


// }

// count of longest subarray with sum k
// Example :
// Input: ‘n’ = 7 ‘k’ = 3
// ‘a’ = [1, 2, 3, 1, 1, 1, 1]

// Output: 3

// Explanation: Subarrays whose sum = ‘3’ are:

// [1, 2], [3], [1, 1, 1] and [1, 1, 1]

// Here, the length of the longest subarray is 3, which is our final answer.
#include "bits/stdc++.h"
using namespace std;
void solve(){
int n,k;
cin>>n>>k;
vector<int> v(n);
for(auto &i:v) cin>>i;
int sum=0,maxval=INT_MIN,count=0;
for(auto i:v){
    sum+=i;
    count++;
    if(sum<0 || sum>k){
    sum=0;
    count=0;
    }
    if(sum==k){
    maxval=max(maxval,count);
    count=0;
    sum=0;
   }
}
cout<<maxval<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}