//selection sort 
// in this we need a pointer min_index ==i
#include <iostream>
#include<vector>
using namespace std;
void selectionsort(vector<int> &v){
    int n=v.size();
    for(int i=0;i<n;i++){
        int min_idex=i;//min index
        for(int j=0;j<n;j++){
            if(v[j]<v[min_idex]){
                min_idex=j;//greater element
            }
            if( i!=min_idex){
                swap(v[i],v[min_idex]);//swaping greater and smaller element
                
            }

            
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    selectionsort(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    return 0;
}