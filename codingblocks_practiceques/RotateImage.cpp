#include <bits/stdc++.h>
using namespace std;
int main()
{
	
int N;
cin>>N;
int mat[N][N];
for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
        cin>>mat[i][j];
    }
}
for (int x = 0; x < N / 2; x++) {
		for (int y = x; y < N - x - 1; y++) {
			// Store current cell in
			// temp variable
			int temp = mat[x][y];

			// Move values from right to top
			mat[x][y] = mat[y][N - 1 - x];

			// Move values from bottom to right
			mat[y][N - 1 - x] = mat[N - 1 - x][N - 1 - y];

			// Move values from left to bottom
			mat[N - 1 - x][N - 1 - y] = mat[N - 1 - y][x];

			// Assign temp to left
			mat[N - 1 - y][x] = temp;
		}
	}
	
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout<<mat[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<endl;
	

	return 0;
}
