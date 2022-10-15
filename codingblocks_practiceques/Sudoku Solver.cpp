#include<iostream>
#include<cmath>
using namespace std;
bool canPlace(int mat[0][9],int i,int j,int n,int num){
	for(int x=0;x<9;x++)
	if(mat[x][j]==num || mat[i][x]==num)
	return false;

	int rn = sqrt(n);
	int sx = (i/rn)*rn;
	int sy = (j/rn)*rn;
	for(int p=sx;p<sx+rn;p++)
	for(int q=sy;q<sy+rn;q++)
	if(mat[p][q]==num)
	return false;
	return true;
}
bool sudoku(int mat[][9],int i,int j,int n){
	if(i==n){
	for(int p=0;p<n;p++)
	{
		for(int q=0;q<n;q++)
		cout<<mat[p][q]<<" ";
		cout<<endl;
	}
	return true;
	}
	if(j==n)
	return sudoku(mat,i+1,0,n);
	if(mat[i][j]!=0)
	return sudoku(mat,i,j+1,n);
	for(int k=1;k<=n;k++){
		if(canPlace(mat,i,j,n,k)){
			mat[i][j]=k;
			bool can = sudoku(mat,i,j+1,n);
			if(can)
			return true;
		}
	}
	mat[i][j]=0;
	return false;
	
}
int main() {
	int n;
	cin>>n;
	int mat[9][9];
	for(int i=0;i<n;i++)
	for(int j=0;j<n;j++)
	cin>>mat[i][j];
	
	bool c = sudoku(mat,0,0,n);
	return 0;
}
