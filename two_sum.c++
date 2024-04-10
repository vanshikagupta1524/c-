// better approach
#include <map>
#include <vector>
#include <string>

using namespace std;
string read(int n, vector<int> book, int target)
{
    // Write your code here.
     map<int,int>mpp;
     for (int i = 0; i < n; i++) {
…     return "NO";
}


// optimal approach
#include<vector>
#include<string>
string read(int n, vector<int> book, int target)
{
    // Write your code here.
    int left=0;
    int right=n-1;
    sort(book.begin(),book.end());

    while(left<right){
…    }
    return "NO";
}
