#include<iostream>
#include<vector>
using namespace std;

int clash(int N, vector<vector<int>> A)
{
    cout<<"--------------";
	int count=0;
	int row = A.size();
	int col= A[0].size();
	
	if(N==1)return 0;
	int ans=0;
	vector<int>res;
	
	for(int i=0;i<N;i++){
		for(int j=0;j<col;j++){
			int x = (A[i+1][j]-A[i][j]);
			res.push_back(x);
			cout<<x<<" ---- ";
		}
	}
    cout<<"----------";
	
	for(int i=0;i<res.size();i++){
		if(res[i]==res[i+1])
			count++;
	}
	
	return count;
	
}

int main()
{
int n,row,col;
cin>>n;
vector<vector<int>>input;
cin>>row;
cout<<"enter col";
cin>>col;

for (int i = 0; i < row; i++)
{
    vector<int>cols;
    for (int j = 0; j<col; j++)
    {
        int temp=0;
        cin>>temp;
        cols.push_back(temp);
    }
    input.push_back(cols);
}

int res= clash(n,input);
cout<<res;



return 0;
}