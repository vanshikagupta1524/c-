// if no of positive equals to no of neg

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// vector<int>arr{3,1,-2,-5,2,-4};
// vector<int>ans(arr.size());
// int pos=0;
//     int neg=1;
// for(int i=0;i<arr.size();i++){
    
//     if(arr[i]>0){
//         ans[pos]=arr[i];
//         pos+=2;
//     }
//     else if(arr[i]<0){
//         ans[neg]=arr[i];
//         neg+=2;
//     }
// }
// for(auto i:ans){
// cout<<i<<" ";
// }
// }

// if no of pos not equals to no of neg
vector<int> alternateNumbers(vector<int>&a) {
    // Write your code here.
    vector<int>pos,neg;
   
    int n=a.size();
    for(int i=0;i<n;i++){
        if(a[i]>0){
            pos.push_back(a[i]);
        }
        else if(a[i]<0){
            neg.push_back(a[i]);
        }
    }
    if(pos.size()>neg.size()){
        for(int i=0;i<neg.size();i++){
            a[i*2]=pos[i];
            a[2*i+1]=neg[i];
        }
        int index=neg.size()*2;
        for(int i=index;i<pos.size();i++){
            a[index]=pos[i];
            index++;
        }
    }
    else{
            for(int i=0;i<pos.size();i++){
                            a[i*2]=pos[i];
                                        a[2*i+1]=neg[i];
                                                }
                                                        int index=pos.size()*2;
                                                        for (int i = index;
                                                             i < neg.size();
                                                             i++) {
                                        a[index] = neg[i];
                                        index++;
                                                        }
            }
            return a;

    }
