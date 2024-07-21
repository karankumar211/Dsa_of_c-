//bubble sort method repetately solve diferent number by swaping 
#include<iostream>
#include<vector>
using namespace std;
//function for creating bubble sort
void bubble(vector<int> &v){
    int n=v.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(v[j]>v[j+1]){
             swap(v[j+1],v[j]);
            }
        }
    }
    return ;
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    bubble(v);
        for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
/*dry run
20 50 40 10 30 
swap the number first ans second 
time complexcity == o(n^2)
space complexty ==o(1)   */

}