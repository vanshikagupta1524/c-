#include<bits/stdc++.h>
using namespace std;
int main(){
vector<int>arr{7,7,5,7,5,1,5,7,5,5,7,7,5,5,5,5};
int count1=0;
int element=0;
for(int i=0;i<arr.size();i++){
if(count1==0){
    count1++;
    element=arr[i];
}
else if(element==arr[i]){
    count1++;
}
else{
count1--;
}
int count2=0;
for(int i=0;i<arr.size();i++){
    if(arr[i]==element){
        count2++;
    }
}
if(count2>(arr.size()/2)){
cout<<element;
break;
}
}
}