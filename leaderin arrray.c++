vector<int> superiorElements(vector<int>&a) {
    // Write your code here.
    int maxi=INT_MIN;
    int n=a.size();
    int i=0;
    vector<int>b;
   for(int i=n-1;i>=0;i--){
       if(a[i]>maxi){
                  b.push_back(a[i]);
       }
                  maxi=max(a[i],maxi);

   }
   sort(b.begin(),b.end());
    return b;
}