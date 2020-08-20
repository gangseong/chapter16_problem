#include <iostream>
#include <string>
using namespace std;
bool palindrome(string &pr);
int main()
{
	string str;
	cout << "문자열을 입력하라. \n";
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
		cout << "회문 맞음\n";
	else
		cout << "회문 아님\n";
	
	return true;
}

