#include <iostream>
using namespace std;
int borders[4][4];
int moveRow[] = { 0, 1, 0, -1 };
int moveCol[] = { 1, 0, -1, 0 };
//0 - right, 1 - down, 2 - left, 3 - up

void newGameStart()
{
	for (int i = 0; i < 4; ++i)
	{
		for (int j = 0; j < 4; ++j)
		{
			borders[i][j] = 0;
		}
	}
}
bool DoMove(int liner, int column, int nliner, int ncolumn)
{
	if (nliner < 0 || ncolumn < 0 || nliner > 4 || ncolumn >= 4 || (borders[liner][column] != borders[nliner][ncolumn] and borders[nliner][ncolumn] != 0))
	{
		return false;
	}
	else
	{
		return true;
}

	int main()
	{
		char buttonCommand[128];
		buttonCommand['d'] = 0;
		buttonCommand['s'] = 1;
		buttonCommand['a'] = 2;
		buttonCommand['w'] = 3;
		newGameStart();
		while (true)
		{
			char commands;
			cin >> commands;
			if (commands == 'n')
			{
				newGameStart();
			}
			else if (commands == 'q')
			{
				break;
			}
			cout << "When the code is ready here will be the output";
		}
	}