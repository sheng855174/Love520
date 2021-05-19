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
	print_delay("4月30日", 200);
	print_delay("我們相遇，我對她稍微有了好感，是我喜歡的類型", 200);
	print_delay("那天我們約會看\"名偵探柯南-緋色彈丸\"", 200);
	print_delay("只是...", 200);
	print_delay("我其實沒在看電影，都是在注意她的反應", 200);
	print_delay("結束後我和她在床上纏綿墜入愛河，不願離去", 200);
	print_delay("======================================================", 100);
	do{
		print_delay("請問...", 500);
		print_delay("妳有頭緒嗎?", 500);
		print_delay("請輸入答案(yes/no) : ", 100);
		cin >> ans;
	} while (ans.compare("yes"));
	print_delay("======================================================", 100);
	ans = "";
	print_delay("妳知道r=a(1-sinθ)有幾組代數解嗎?", 200);
	print_delay("不管有幾組...妳是我唯一的代數解。", 500);
	do {
		print_delay("我喜歡妳，當我女朋友好嗎?", 500);
		print_delay("請輸入答案(yes/no) : ", 100);
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
	print_delay("520，我愛你0+", 500);
	system("pause");
	return 0;

}
