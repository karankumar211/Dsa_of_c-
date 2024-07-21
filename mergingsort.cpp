#include<iostream>
using namespace std;
// divide and conquer  type 
void merge(int arr[],int l,int mid ,int r){
    int an=mid-l+1;
    int bn=r-mid;
    //creating a 2 new array for sorting 
    int a[an];
    int b[bn];
    //printing the array
    for(int i=0 ;i<an;i++){
        a[i]=arr[l+i];

    }
    for(int j=0;j<bn;j++){
        b[j]=arr[mid+1+j];

    }
    int i=0;
    int j=0;
    int k=l;
    while(i<an && j<bn){
        if (a[i]<b[j]){
            arr[k++]=a[i++];
            
        }
        else{
            arr[k++]=b[j++];
        }
    }
    while(i<an){
        arr[k++]=a[i++];
        
    }
    while(j<bn){
        arr[k++]=b[j++];
        
    }
}
void mergeSort(int arr[],int l,int r){

    
    //base case;
    if (l>=r){
        return;
    }
    int mid =(l+r)/2;
    mergeSort(arr,l,mid);// breaking 
    mergeSort(arr,mid+1,r);
    merge(arr,l,mid,r);


}
int main(){

int n;
cin>>n;
int arr[n];
for(int i=0; i<n; i++){
    cin>>arr[i];
}
mergeSort(arr,0,n-1);
 for(int i=0;i<n;i++){
     cout<<arr[i]<<" ";
 }cout<<endl;

 return 0;
}