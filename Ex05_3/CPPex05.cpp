#include <iostream>
using namespace std;
#include "getVolumeSurface.h"

int main()
{
	const int BoxCount = 3;
	BOX boxes[BoxCount];
	for (int i = 0; i < BoxCount; i++) {
		cout << "������́F";
		cin >> boxes[i].x;
		cout << "��������́F";
		cin >> boxes[i].y;
		cout << "���s����́F";
		cin >> boxes[i].z;
		getVolumeSurface(&boxes[i]);
		if(boxes)
		cout << "�̐ς� " << boxes[i].volume << endl;
		cout << "�\�ʐς� " << boxes[i].surface << endl;
		isSendable(&boxes[i]);
		if (isSendable(&boxes[i]))
		{
			cout << boxes[i].packSize << "�T�C�Y�ő���܂�" << endl;
		}
		else
		{
			cout << "��}�ւł͑���܂���" << endl;
		}
	}

	int a;
	cin >> a;

	return 0;
}