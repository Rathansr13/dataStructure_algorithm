#include <bits/stdc++.h> 
using namespace std;
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
	// Write your code here.
        int col[m] = {0};
        int row[n] = {0};
    

	    for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				if(matrix[i][j]==0)
				{
					col[i]=1;
					row[j]=1;
				}
			}
		}
		  for(int i=0;i<n;i++)
		{
			for(int j=0;j<m;j++)
			{
				 

				 if(col[i]||row[j]==1)
				 {
					 matrix[i][j]=0;
				 }
			}
		}
  return matrix;


}



int main(){
    vector<vector<int>> arr={{1,2,3},{0,1,2},{1,0,4}};
    int m=3,n=3;
    vector<vector<int>> result=zeroMatrix(arr,n,m);
    for(int i=0;i<n;i++){
        for(int j=0;i<m;j++){
            cout<<result[i][j]<<" ";

        }
        cout<<" "endl;
    }
}