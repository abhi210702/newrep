#include<iostream>
using namespace std;

int binarysearch(int arr[],int left,int right,int key){

    while(left<=right){
        int mid=left+(right-left)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            right=mid-1;
        }

        else{
            left=mid+1;
        }
    }
    return -1;
}

int main()
{
    int arr[]={1,2,3,4,5};
    int x= binarysearch(arr,0,5,6);
    cout<<x;


return 0;
}