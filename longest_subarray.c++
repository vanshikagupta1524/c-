// longest subarray with sum k
// tc o(n*n*n)
// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// int main(){
// vector<int>arr{1,2,3,1,1,1,1,4,2,3};
// int n=arr.size();
// int k=3;
// int len=0;
// for(int i=0;i<n;i++){
//     for(int j=i;j<n;j++){
//         int sum=0;
//         for(int k=i;k<=j;k++){
           
//                sum+=arr[k]; 
            
//         }
//         if(sum==k){
//             len=max(len,j-i+1);
//         }
//     }
// }
// cout<<len<<endl;
// }

// better approach
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
vector<int>arr{1,2,3,1,1,1,1};
long long k=3;
map<long long, int>preSumMap;
long long sum=0;
int maxLen=0;
for(int i=0;i<arr.size();i++){
sum+=arr[i];
if(sum==k){
    maxLen=max(maxLen,i+1);
}
int rem=sum-k;
if(preSumMap.find(rem)!=preSumMap.end())
int len=i-preSumMap[rem];
maxLen=max(maxLen, len);
}
{
    preSumMap[sum]=i;
}
return maxLen;
}