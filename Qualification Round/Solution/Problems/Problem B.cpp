#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	if (s1 == s2)
	{
		cout << "Tie" << endl;
		return 0;
	}
	if (s1 == "Scissors")
	{
		if ((s2 == "Paper" || s2 == "Lizard"))
		{
			cout << "First" << endl;
			return 0;
		}
		else
		{
			cout << "Second" << endl;
			return 0;
		}
	}
	if (s1 == "Paper")
	{
		if ((s2 == "Spock" || s2 == "Rock"))
		{
			cout << "First" << endl;
			return 0;
		}
		else
		{
			cout << "Second" << endl;
			return 0;
		}
	}
	if (s1 == "Rock")
	{
		if ((s2 == "Lizard" || s2 == "Scissors"))
		{
			cout << "First" << endl;
			return 0;
		}
		else
		{
			cout << "Second" << endl;
			return 0;
		}
	}
	if (s1 == "Lizard")
	{
		if ((s2 == "Spock" || s2 == "Paper"))
		{
			cout << "First" << endl;
			return 0;
		}
		else
		{
			cout << "Second" << endl;
			return 0;
		}
	}
	if (s1 == "Spock")
	{
		if ((s2 == "Scissors" || s2 == "Rock"))
		{
			cout << "First" << endl;
			return 0;
		}
		else
		{
			cout << "Second" << endl;
			return 0;
		}
	}
	
}
