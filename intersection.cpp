#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> arr{1, 2, 2, 3, 3, 4, 5, 6};
    vector<int> brr{2, 3, 3, 5, 6, 6, 7};
    vector<int> ans;

    int n1 = arr.size();
    int n2 = brr.size();

    // Sort the vectors for efficient comparison
    sort(arr.begin(), arr.end());
    sort(brr.begin(), brr.end());

    vector<bool> vis(n2, false); // Initialize visited array

    for (int i = 0; i < n1; ++i) {
        for (int j = 0; j < n2; ++j) {
            if (arr[i] == brr[j] && !vis[j]) { // Check if element matches and not visited
                ans.push_back(arr[i]);
                vis[j] = true; // Mark as visited
                break; // Move to next element in arr
            } else if (arr[i] < brr[j]) {
                break; // Move to next element in arr
            }
        }
    }

    // Print common elements
    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
