// with tc=O(n square)
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[6]={10,20,10,30,20,10};
//     int count=0;
//     int n=sizeof(arr)/sizeof(arr[0]);
//     int visited[n];
//     for(int i=0;i<n;i++){
//         if(visited[i]!=1){
//             int count=1;
//               for(int j=i+1;j<n;j++){
//             if(arr[i]==arr[j]){
//                 count++;
//                 visited[j]=1;
//             }

//         }
//         cout<<arr[i]<<"occur"<<count<<"times"<<endl;
//         }
        
//     }
  
// }

// with tc O(n);
#include<iostream>
using namespace std;
void countFrequency(int *arr,int size){
  
    for(int i=0;i<size;i++){
    int count=0;
    int flag=0;
    for(int j=i+1;j<size;j++){
        if(arr[i]==arr[j]){
            flag=1;
            break;
        }
    }
    if(flag==1)
    continue;
    for(int j=0;j<=i;j++){
        if(arr[i]==arr[j])
        count++;
    }
           
        cout << arr[i] << ": " << count << endl;
    }
}
int main()
{
    int arr[] = {5, 8, 5, 7, 8, 10};
    int size = sizeof(arr)/sizeof(arr[0]);
    
    countFrequency(arr, size);
    
    return 0;
}

