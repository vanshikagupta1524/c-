#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>arr{-2,-3,4,-1,-2,1,5,-3};
    int sum=0;
    int maxi=INT_MIN;
    for(int i=0;i<arr.size();i++){
        sum=sum+arr[i];
        maxi=max(sum,maxi);
        if(sum<0){
            sum=0;
        }

    }
    cout<<maxi<<endl;

}
