#define _CRT_SECURE_NO_WARNINGS 1

#include <iostream>
#include <time.h>
using namespace std;

int rollDice()
{
	int num1 = rand() % 6 + 1;
	int num2 = rand() % 6 + 1;
	int sum = num1 + num2;
	cout << "player rolled:" << sum << endl;
	return sum;
}

enum GameStatus
{
	WIN,
	LOSE,
	PLAYING
};

int main()
{
	srand((unsigned int)time(NULL));

	int sum, mypoint;
	GameStatus status;

	sum = rollDice();
	switch (sum)
	{
	case 7:
	case 11:
		status = WIN;
		break;
	case 2:
	case 3:
	case 12:
		status = WIN;
		break;
	default:
		status = PLAYING;
		mypoint = sum;
		cout << "当前点数是：" << mypoint << endl;
		break;
	}

	while (status == PLAYING)
	{
		sum = rollDice();
		if (sum == mypoint)
		{
			status = WIN;
		}
		else if (sum == 7)
		{
			status = LOSE;
		}
	}
	if (status == WIN)
	{
		cout << "player wins" << endl;
	}
	else
	{
		cout << "player lose" << endl;
	}
	return 0;
}
