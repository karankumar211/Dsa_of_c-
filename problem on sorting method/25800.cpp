//keeping or arranging all zero to last ex 3 2 0 1 2 0
// ==3 2 1 2 00
#include<iostream>
#include<vector>
using namespace std;
void zerosorting(vector <int> &v){
    int n=v.size();
    for (int i=n-1;i>=0;i--){
        int j=0;
        while(j!=i){
            if(v[j]==0&&v[j+1]!=0){
                swap(v[j+1],v[j]);
            }
            j++;
        }
    }
    
}
int main(){
    int n;
    cin>>n;
    vector <int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    zerosorting(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    
}