// find 
// the 
// number  that appears ones and others appears twice
// brute force tc o(n2)
// #include<bits/stdc++.h>
// #include<iostream>
// using namespace std;
// int main(){
//     vector<int>arr{1,1,2,3,3,4,4,5,5};
//     int n=arr.size();
    
//     for(int i=0;i<n;i++){
//         int nums=arr[i];
//         int count=0;
//         for(int j=0;j<n;j++){
//             if(arr[j]==nums){
//                 count++;
//             }
//         }
//         if(count==1){
//             cout<<arr[i]<<endl;
//         }
//     }
// }

// optimal approach tc=o(n) and space complexity=o(1)
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    vector<int>arr{1,2,2,3,3,4,4,5,5};
    int n=arr.size();
    int XOR=0;
    for(int i=0;i<n;i++){
        XOR=XOR^arr[i];
    }
    cout<<XOR<<endl;
}
