#include <bits/stdc++.h>
#include<algorithm>
vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    int n1=a.size();
    int n2=b.size();
    set<int> st;
    for(int i=0;i<n1;i++){
        st.insert(a[i]);
    }
    for(int i=0;i<n2;i++){
        st.insert(b[i]);
    }
    vector<int>temp;
    for(auto it:st){
        temp.push_back(it);
    }
    return temp;
}

// optimal approach tc=> o(n1+n2)
// in place of temp.empty() we can also use temp.size()==0
vector<int> sortedArray(vector<int> a, vector<int> b) {
    vector<int> temp;
    int n1 = a.size();
    int n2 = b.size();
    int i = 0;
    int j = 0;
    while (i < n1 && j < n2) {
        if (a[i] < b[j]) {
            if (temp.empty() || temp.back() != a[i]) {
                temp.push_back(a[i]);
            }
            i++; // Move to the next element in a
        } else if (a[i] > b[j]) {
            if (temp.empty() || temp.back() != b[j]) {
                temp.push_back(b[j]);
            }
            j++; // Move to the next element in b
        } else { // a[i] == b[j]
            if (temp.empty() || temp.back() != a[i]) {
                temp.push_back(a[i]);
            }
            i++; // Move to the next element in a
            j++; // Move to the next element in b
        }
    }
    // Copy remaining elements of a, if any
    while (i < n1) {
        if (temp.empty() || temp.back() != a[i]) {
            temp.push_back(a[i]);
        }
        i++;
    }
    // Copy remaining elements of b, if any
    while (j < n2) {
        if (temp.empty() || temp.back() != b[j]) {
            temp.push_back(b[j]);
        }
        j++;
    }
    return temp;
}
