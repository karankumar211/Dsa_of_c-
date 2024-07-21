//inertion sort 
#include<iostream>
#include<vector>
using namespace std;
void inertionsort(vector<int> &v){
    int n=v.size();
    for(int i=1;i<n;i++){
        int current=v[i];//takeing current element to compare
        //find the correct position for our current element
        int j=i-1;
        while(v[j]>current &&j>=0 ){//going back and checking 
            v[j+1]=v[j];//ineserting element in correct place
            j--;//moveing back
        }
        //inertion current
        v[j+1]=current;//changing the current position
    }

}
int main(){
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    inertionsort(v);
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

}