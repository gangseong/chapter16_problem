#include <iostream>
#include <string>
using namespace std;
bool palindrome(string &pr);
int main()
{
	string str;
	cout << "���ڿ��� �Է��϶�. \n";
	getline(cin, str);
	palindrome(str);
	return 0;
}
inline bool palindrome(string &pr)
{
	string ss;
	ss = pr;
    reverse(pr.begin(), pr.end());
	if (ss == pr)
		cout << "ȸ�� ����\n";
	else
		cout << "ȸ�� �ƴ�\n";
	
	return true;
}

