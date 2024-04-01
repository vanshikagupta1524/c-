
// Find Second Largest Element in Array | Remove duplicates from Sorted Array | Arrays Intro Video

// max size of array can be 10 to the power 6
// ********************************************************************
// Find  Largest Element in Array

// tc o(nlogn)   brute fore

// #include <bits/stdc++.h>
// int largestElement(vector<int> &arr, int n) {
//     // Write your code here.
//     int n=arr.size();
//     for(int i=0;i<arr.size();i++){
//        sort(arr.begin(),arr.end());
//        return arr[n-1];
//     }
// }

// optimal tc o(n)
// #include <bits/stdc++.h>
// int largestElement(vector<int> &arr, int n) {
//     // Write your code here.
//   n=arr.size();
//  int largest=arr[0];
//  for(int i=0;i<n;i++){
//      if(arr[i]>largest){
//          largest=arr[i];
//      }
//  }
//  return largest;
// }
// ******************************************************************
// Find the second largest and second smallest element from the array.


// tc o(nlogn)
// #include <bits/stdc++.h>
// vector<int> getSecondOrderElements(int n, vector<int> a) {
//     // Write your code here.
//     vector<int>b;
//     int m=b.size();
//     for(int i=0;i<n;i++){
//         sort(a.begin(),a.end());
//         b.push_back(a[n-2]);
//         b.push_back(a[1]);
//         break;

//     }
//     return b;
// }
// ********************************************************************************
// second largest ->better approach
//       ======== tc o(2n)============
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[6]={1,5,7,7,2,1};
//     int largest=arr[0];
//    int n = sizeof(arr) / sizeof(arr[0]);
//     int slargest=-1;
//     for(int i=0;i<n;i++){
//         if(arr[i]>largest){
//             largest=arr[i];
//         }
//     }
//     for(int i=0;i<n;i++){
//         if(arr[i]>slargest && arr[i]!=largest){
//             slargest=arr[i];
//         }
//     }
//     cout<<slargest;
// }
// ***************************************************************
//  second largest ->optimal approach in this approach we need to understand that there is no
// negative number in array if negative number present in array then we should include 
// INT_MIN();
// ======================tc  O(n)
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[6]={1,5,4,3,2,7};
//     int largest=arr[0];
//     int secondla=-1;
//     int n=sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n;i++){
//         if(arr[i]>largest){
//             secondla=largest;
//             largest=arr[i];
//         }
//         if(arr[i]==largest){
//             continue;
//         }
//     }
//     cout<<secondla;
// }
// #include <bits/stdc++.h>
// vector<int> getSecondOrderElements(int n, vector<int> a) {
//     // Write your code here.
//     int largest=a[0];
//     int slargest=-1;
//     int smallest=INT_MAX;
//     int secsmall=INT_MAX;
//     vector<int>b;
// for(int i=0;i<n;i++){
// if(a[i]>largest){
// …}
// b.push_back(secsmall);

// return b;
// }

//************ check if array is sorted

// int isSorted(int n, vector<int> a) {
//     // Write your code here.

// for(int i=1;i<=n;i++){
//             if(a[i-1]<=a[i] && a[i+1]>=a[i]){
//               return 1;
//             } else {
//                     return 0;
//             }
            
// }
// }
//***************** or

// int isSorted(int n, vector<int> a) {
//     // Write your code here.
//     for(int i=1;i<n;i++){
//         if(a[i-1]>a[i]) return 0;
//     }
//     return 1;
// }
