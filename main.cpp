#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>

using namespace std;

char **charSquare(int n);
void drawCharSquare(char **square, int n);

int main(int argc, char **argv)
{
	int n = atoi(argv[1]);
	time_t valueSeed = atoi(argv[2]);
	time_t *wskValueSeed = &valueSeed;
	srand(time((argc == 3) ? wskValueSeed : NULL));
	drawCharSquare(charSquare(n), n);
}

char **charSquare(int n)
{
	char **square = new char*[n];
	for (int i = 0; i < n; i++)
	{
		square[i] = new char[n];

		for (int j = 0; j < n; j++)
		{
			square[i][j] = rand() % ('a' - 'z' + 1) + 'a';
		}
	}
	return square;
}

void drawCharSquare(char **square, int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << endl;
		for (int j = 0; j < n; j++)
		{
			printf("%c ", square[i][j]);
		}
	}
}
