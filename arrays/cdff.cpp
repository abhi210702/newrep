#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int k;
    cin>>k;
    
    int size;
    cin>>size;
    
    string str;
    cin>>str;
    
    int arr[26]={0};
    for(int i=0;i<size;i++){
        int ch=int(str[i]-97);
        arr[int(ch)]++;
    }
    
    string res;

   for(int i=0;i<26;i++){
       cout<<arr[i]<<" ";
   }

   for(int p=0;p<26;p++){
       if(arr[p]<k && arr[p]>0){
           res+=arr[char(p+97)];
       }
   }
    cout<<res;
    
    return 0;
}
