#include <string>
#include <cstdio>
#include <iostream>

using namespace std;

int number_needed(string *a, string *b) 
{
	for (int i = 0; i < a->size(); i++)
	{
		size_t pos = b->find(a->at(i));
		if (pos != string::npos)
		{
			a->erase(i, 1);
			b->erase(pos, 1);
			i--;
		}
	}
	return a->size() + b->size();
}

int main() 
{
	string a;
	cin >> a;
	string b;
	cin >> b;
	if(a.length() < b.length()) cout << number_needed(&a, &b) << endl;
	else cout << number_needed(&b, &a) << endl;
	return 0;
}