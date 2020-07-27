#include <iostream>
#include <string>
using namespace std;

int main()
{
	string eingabe;
	cout << "Bitte die Zahl oder das Wort 'ende' eingeben: ? ";
	cin >> eingabe;


	if (eingabe == "ende")
	{
		cout << "Das Programm beendet sich jetzt." << endl;
	}

	else
	{
		int ergebnis = 0;
		for (int i = 0; i < eingabe.size(); i++)
		{
			if (eingabe.at(i) >= '0' && eingabe.at(i) <= '9')
			{
				ergebnis = ergebnis * 10 + (int(eingabe.at(i)) - int('0'));
			}
			
			else
			{
					return 1;
			}
		}
		ergebnis = ergebnis * 2;
		cout << "Der doppelte Wert betraegt: " << ergebnis << endl;
	}

	system("PAUSE");
		return 0;
}