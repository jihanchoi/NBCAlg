#include <string>
#include <vector>

using namespace std;

vector<int> solution(int n) 
{
	vector<int> answer;
	vector<vector<int>> result(n, vector<int>(n));
	int value = 1, order = 0, x = 0, y = 0;

	for (int i = 0; i < n; i++)
	{
		switch (order)
		{
		case 0:
			for (int j = i; j < n; j++)
			{
				result[x++][y] = value++;
			}
			x--;
			y++;
			order = 1;
			break;
		case 1:
			for (int j = i; j < n; j++)
			{
				result[x][y++] = value++;
			}
			x--;
			y -= 2;
			order = 2;
			break;
		case 2:
			for (int j = i; j < n; j++)
			{
				result[x--][y--] = value++;
			}
			x += 2;
			y++;
			order = 0;
			break;
		}
	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			answer.push_back(result[i][j]);
		}
	}

	return answer;
}