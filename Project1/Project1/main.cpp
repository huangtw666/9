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
		cout << "�}�l�C���п�J 1 �F�ѹC���W�h �п�J 2" << endl;
		cin >> start;
		if (start == 2)
		{
			cout << "�}�l�C����A���a�|���������i��P�A��J�Q�O�d��0~5�i��P��" << endl << "��l�P�|���s�̲ץѳo���i�P�զ��̤j���P�աA�÷ӽߥI�������y" << endl << endl;
			cout << "�߲v��p�U:" << endl << "�Ӯa�P�ᶶ  250" << endl << "�P�ᶶ      50" << endl << "�K��        25" << endl << "��Ī        9" << endl << "�P��        6" << endl << "���l        4" << endl << "�T��        3" << endl << "A�@��M��� 2" << endl << endl;
			cout << "���a�_�l�w�X�� 1000�A�C���U�`�� 100�A���a�w�X�C��100�Y��ܯ}���A�C�������C" << endl << "�`�N!!�Ҧ���A�N�ѼƦr1���" << endl << endl;
		}
	} while (start != 1);
	int play = 1000;//�_�l�w�X
	while (play > 100)
	{
		cout << "���a�w�X : " << play << endl;
		CardGenerator generator;
		string* cards = generator.generateCards();
		for (int i = 0; i < 10; i += 2) {
			cout << cards[i]<< cards[i + 1] << " ";
		}
		cout << endl << "�п�ܭn�O�d����P" << endl;
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
	cout << "�l�B����" << endl;
} 