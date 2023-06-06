#ifndef CARD_H
#define CARD_H
#include <iostream>
#include <cstdlib>
#include <ctime>
#include<string>
using namespace std;
class Card 
{
public:
	Card();
	void setplayer(int);
	int getplayer();
	void incard(string[]);
	void Classification();
	void Royal();
	void sf();//®äªá¶¶
	void four();
	void full();
	void flush();
	void straight();
	void three();
	void two();
	void apiar();//a piar
	int getodds();
private:
	int player;
	int bet;
	int odds;//½ß²v
	int num[5];
	string suit[5];
};
#endif // !CARD_H

