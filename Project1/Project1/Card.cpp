#include<iostream>
#include<string>
#include <algorithm>
#include<cstdlib>
#include"Card.h"
#include"Deal.h"
using namespace std;

Card::Card()
{
	player = 0;
	bet = 100;
	odds = 0;//½ß²v
	num[5] = {0};
	suit[5] = {0};
}
void Card::setplayer(int p)
{
	player = p;
}
int Card::getplayer()
{
	return player;
}
void Card::incard(string c[11])
{
	for (int i = 0; i < 10; i+=2)
	{
		for (int j = 0; j < 5; j++)
		{
			if (c[i] == "1")
				num[j] = 1;
			else if (c[i] == "2")
				num[j] = 2;
			else if (c[i] == "3")
				num[j] = 3;
			else if (c[i] == "4")
				num[j] = 4;
			else if (c[i] == "5")
				num[j] = 5;
			else if (c[i] == "6")
				num[j] = 6;
			else if (c[i] == "7")
				num[j] = 7;
			else if (c[i] == "8")
				num[j] = 8;
			else if (c[i] == "9")
				num[j] = 9;
			else if (c[i] == "10")
				num[j] = 10;
			else if (c[i] == "J")
				num[j] = 11;
			else if (c[i] == "Q")
				num[j] = 12;
			else if (c[i] == "K")
				num[j] = 13;
		}
	}
	sort(num, num + 5);
	for (int i = 1; i < 10; i += 2)
	{
		for (int j = 0; j < 5; j++)
		{
			suit[j] = c[i];
		}
	}
	Classification();
}
void Card::Classification()
{
	if (suit[0] == suit[1] && suit[1] == suit[2] && suit[2] == suit[3] && suit[3] == suit[4] )
	{
		if (num[0] == 1 && num[0] == 10 && num[0] == 11 && num[0] == 12 && num[0] == 13)
			Royal();
		else
			sf();
	}
	else if (num[0] == num[1] || num[1] == num[2] || num[2] == num[3] || num[3] == num[4])
		four();
	else
		straight();
}
void Card::Royal()
{
	odds = 250;
}
void Card::sf()//¦Pªá¶¶
{
	if (num[4] - num[0] == 4)
		odds = 50;
	else
		flush();
}
void Card::four()
{
	if (num[0] == num[3] || num[1] == num[4])
		odds = 25;
	else
		full();
}
void Card::full()
{
	int a = 0;
	for (int i = 0; i < 5; i++)
	{
		if (num[i++] == num[i])
			a++;
	}
	if (a == 3)
		odds = 9;
	else
		three();
}
void Card::flush()
{
	odds = 6;
}
void Card::straight()
{
	if (num[4] - num[0] == 4)
		odds = 4;
	else
		odds = 0;
}
void Card::three()
{
	int a = 0;
	for (int i = 0 ; i < 3 ; i++)
	{
		if (num[i] == num[i++] && num[i++] == num[i += 2])
			a++;
		if (a == 1)
			odds = 3;
		else
			two();
	}
}
void Card::two()
{
	int a = 0;
	for (int i = 0; i < 5; i++)
	{
		if (num[i++] == num[i])
			a++;
	}
	if (a == 2)
		odds = 2;
	else
		apiar();

}
void Card::apiar()//a piar
{
	if (num[0] == num[1] && num[1] == 1)
		odds = 2;
	else
		odds = 0;
}
int Card::getodds()
{
	return odds;
}
