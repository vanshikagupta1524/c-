// brute approach tc O(n*n)
// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;
// int main()
// {
//     vector<int> arr{1, 2, 4, 5};
//     int n = arr.size();
    
//     for (int i = 1; i <= n; i++)
//     {
//         int flag = 0;
//         for (int j = 0; j < n - 1; j++)
//         {
//             if (arr[j] == i)
//             {
//                 flag = 1;
//                 break;
//             }
//         }
//         if (flag == 0)
//         {
//             cout << i;
//         }
//     }
   
// }

// better approach through hashing  tc=o(2n)
// sc O(n)
// #include <bits/stdc++.h>
// #include <iostream>
// using namespace std;

// int main() {
//     vector<int> arr{1, 2, 4, 5};
//     int n = arr.size();
//     int hash[n + 1] = {0}; // Initialize hash array with 0

//     for (int i = 0; i < n; i++) {
//         hash[arr[i]] = 1;
//     }

//     for (int i = 1; i <= n; i++) {
//         if (hash[i] == 0) {
//             cout << i << " ";
//         }
//     }
//     return 0;
// }

// optimal approach 2 hai
// tc o(n);
// sc o(1);
// #include <bits/stdc++.h>
// #include<iostream>
// using namespace std;
// int main(){
//      vector<int> arr{1, 2, 4, 5};
//     int n = arr.size();
//     int s=n+1;
//     int sum=s*(s+1)/2;
//     int s2=0;
//     for(int i=0;i<n;i++){
//         s2=s2+arr[i];
//     }
//     int p=sum-s2;
//     cout<<p;
// }

// second approach xor se h

// a^a=0;
