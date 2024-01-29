#include<iostream>
#include<vector>
#define MAX 5

using namespace std;

void bfs(vector<vector<int>>&matrix,int start)
{
	vector<bool>v(MAX, false);
	vector<int>q;
	q.push_back(start);
	
	visited[start] = true;
	int vis;
	while(!q.empty())	
}

int main()
{
	int size = 5;
	vector<vector<int>>matrix;
	matrix = {{0,0,0,1,1},
		{0,0,1,1,1,},
		{0,1,0,1,0},
		{1,1,1,0,1},
		{1,0,1,1,0}};

	bfs(matrix,0);
	return 0;
}
