#include <iostream>
#include <cstdlib>
#include <ctime>
#include<string>
#include"Card.h"
#include"Deal.h"
using namespace std;

int main()
{
	int start;
	do
	{
		cout << "開始遊戲請輸入 1 了解遊戲規則 請輸入 2" << endl;
		cin >> start;
		if (start == 2)
		{
			cout << "開始遊戲後，玩家會先有有五張手牌，輸入想保留的0~5張手牌後" << endl << "其餘牌會換新最終由這五張牌組成最大的牌組，並照賠付表給予獎勵" << endl << endl;
			cout << "賠率表如下:" << endl << "皇家同花順  250" << endl << "同花順      50" << endl << "鐵支        25" << endl << "葫蘆        9" << endl << "同花        6" << endl << "順子        4" << endl << "三條        3" << endl << "A一對和兩對 2" << endl << endl;
			cout << "玩家起始籌碼為 1000，每次下注為 100，玩家籌碼低於100即表示破產，遊戲結束。" << endl << "注意!!所有的A將由數字1表示" << endl << endl;
		}
	} while (start != 1);
	int play = 1000;//起始籌碼
	while (play > 100)
	{
		cout << "玩家籌碼 : " << play << endl;
		CardGenerator generator;
		string* cards = generator.generateCards();
		for (int i = 0; i < 10; i += 2) {
			cout << cards[i]<< cards[i + 1] << " ";
		}
		cout << endl << "請選擇要保留的手牌" << endl;
		int save[6];
		for (int i = 0; i < 5; i++)
		{
			cin >> save[i];
		}
		//string incard[10]{};
		int j = 0;
		for (int i = 0; i < 5; i++)
		{
				if (save[i] == 0)
				{
					cards[j] = cards[j + 10];
					cards[j + 1] = cards[j + 11];
				}
				j += 2;
		}
		for (int i = 0; i < 10; i++) {
			cout << cards[i] <<" " ; //<< incard[i++] << " ";
		}
		//for (int i = 0; i < 10; i++) {
		//	in[i] = cards[i];
		//}
		//for (int i = 0; i < 10; i += 2) {
		//	cout <<in[i] << in[i + 1] << " ";
		//}
		//Card c;
		//c.
		play = 0;
	}
	cout << "餘額不足" << endl;
} 