// brute force
// #include <bits/stdc++.h>
// #include<iostream>
// using namespace std;
// int main(){
//     vector<int>arr{1,0,2,3,2,0,0,4,5,1};
//     vector<int>temp;
//     for(int i=0;i<arr.size();i++){
//         if(arr[i]!=0){
//             temp.push_back(arr[i]);
//         }
//     }
//     for(int i=0;i<temp.size();i++){
//         arr[i]=temp[i];
//     }
//     for(int i=temp.size();i<arr.size();i++){
//         arr[i]=0;
//     }
//     for(int i=0;i<arr.size();i++){
//         cout<<arr[i];
//     }
// }

// optimal approach
#include <bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
    vector<int>arr{1,0,2,3,2,0,0,4,5,1};
    int j=-1;
   for(int i=0;i<arr.size();i++){
    if(arr[i]==0){
        j=i;
        break;
    }
    
   }
   for(int i=j+1;i<arr.size();i++){
    if(arr[i]!=0){
        swap(arr[i],arr[j]);
        j++;
    }
   }
   for(int i=0;i<arr.size();i++){
    cout<<arr[i];
   }
}
