//DFS using adjancy list

#include<iostream>
#include<vector>

using namespace std;

void dfs(vector<vector<int>>&matrix,int start, vector<bool>&visited)
{
	cout<<start<<" ";
	visited[start] = true;
	for(int  i=0; i<5; i++)
	{
		if(matrix[start][i] == 1 && (!visited[i]))
		{
			dfs(matrix,i,visited);
		}
	}
}

int  main()
{
	int size = 5;
	vector<vector<int>>matrix;
	matrix = {{0,0,0,1,1},
		{0,0,1,1,1,},
		{0,1,0,1,0},
		{1,1,1,0,1},
		{1,0,1,1,0}};
	
	vector<bool>v(size, false);
	dfs(matrix,0,v);
	return 0;
}
