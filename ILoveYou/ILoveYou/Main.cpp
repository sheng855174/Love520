#include<iostream>
#include<cmath>
#include <windows.h>

using namespace std;

void print_delay(string msg,int delay) {
	int size = msg.size();
	for (int i = 0;i < size ;i++) {
		cout << msg[i];
		Sleep(delay);
	}
	cout << endl;
}

int main()
{
	string ans = "";
	print_delay("4��30��", 200);
	print_delay("�ڭ̬۹J�A�ڹ�o�y�L���F�n�P�A�O�ڳ��w������", 200);
	print_delay("���ѧڭ̬��|��\"�W�����_�n-�n��u�Y\"", 200);
	print_delay("�u�O...", 200);
	print_delay("�ڨ��S�b�ݹq�v�A���O�b�`�N�o������", 200);
	print_delay("������کM�o�b�ɤW����Y�J�R�e�A���@���h", 200);
	print_delay("======================================================", 100);
	do{
		print_delay("�а�...", 500);
		print_delay("�p���Y����?", 500);
		print_delay("�п�J����(yes/no) : ", 100);
		cin >> ans;
	} while (ans.compare("yes"));
	print_delay("======================================================", 100);
	ans = "";
	print_delay("�p���Dr=a(1-sin�c)���X�եN�ƸѶ�?", 200);
	print_delay("���ަ��X��...�p�O�ڰߤ@���N�ƸѡC", 500);
	do {
		print_delay("�ڳ��w�p�A��ڤk�B�ͦn��?", 500);
		print_delay("�п�J����(yes/no) : ", 100);
		cin >> ans;
	} while (ans.compare("yes"));
	print_delay("======================================================", 100);
	float x, y;
	string s = " 025+0 ";
	int l = s.length();
	for (y = 1.3f; y >= -1.1f; y -= 0.06f)
	{
		int t = 0;
		for (x = -1.1f; x <= 1.1f; x += 0.025f)
		{
			double heart = x * x + (5.0 * y / 4.0 - sqrt(abs(x))) * (5.0 * y / 4.0 - sqrt(abs(x)));
			if (heart <= 1) {
				cout << s[t];
				t = (t + 1) % l;
			}
			else cout << " ";
			Sleep(10);
		}
		cout << endl;
	}
	print_delay("520�A�ڷR�A0+", 500);
	system("pause");
	return 0;

}
