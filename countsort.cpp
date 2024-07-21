#include<iostream>
#include<vector>
#include<climits>
using namespace std;
void countsout(vector<int> &v){
    int n= v.size();
    // finding max element
    int max_ele= INT_MIN;
   
    for(int i=0;i<n;i++){
        max_ele=max(v[i],max_ele);
    }
    //creating the frequeny array
     vector<int> freq(max_ele+1,0);
     for(int i=0;i<n;i++){
        freq[v[i]]++;
    }
    //calculate cumulative freq
    for(int i=1;i<=max_ele;i++){
        freq[i]+=freq[i-1];
    }
    //calculate the sorted array
    vector<int> ans(n);
    for(int i=n-1;i>=0;i--){
        ans[--freq[v[i]]]=v[i];
    }
    //copy back the sorted array
    for(int i=0;i<n;i++){
        v[i]=ans[i];
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    countsout(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    /*time complexity ==o(n+max)
      space complexty==o(n+k) */
}