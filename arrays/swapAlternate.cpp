#include<iostream>
using namespace std;

void printarr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

void swapAlternate(int arr[],int size){
    for(int i=0;i<size;i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }

}

int main(){
    int evenarr[]={5,4,3,8,6,1};  
    int oddarr[]={4,6,8,9,1};
    swapAlternate(evenarr,6);
    printarr(evenarr,6);
    swapAlternate(oddarr,5);
    printarr(oddarr,5);
    return 0;
}