//swapping using lenght of string using slection sort
#include<iostream>
#include<cstring>
using namespace std;
void slectionsort(char fruit[][60],int n){
    for(int i=0;i<n-1;i++){
        //finding the minimum element
        int min_index=i;
        for(int j=i+1;j<n;j++){
            if(strcmp(fruit[min_index],fruit[j])>0){
                min_index=j;
            }
        }
        //place the minimum element at begining 
        if(i!=min_index){
            swap(fruit[i],fruit[min_index]);
        }
    }
}
int main(){
    char fruit[][60]={"papaya","lime","watermelon","apple","kiwi"};
    int n=sizeof(fruit)/sizeof(fruit[0]);
    slectionsort(fruit ,n);
    for(int i=0;i<n;i++){
        cout<<fruit[i]<<" ";
    }cout<<endl;
}