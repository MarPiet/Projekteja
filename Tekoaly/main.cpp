#include <iostream>
#include "Tekoaly.cpp"
using namespace std;

int main()
{
	char tulos;
	char* veikkaukset = (char*)malloc(100 + 1);
	Tekoaly tekoaly = Tekoaly();
	char a  = 'x';
	int rounds = 0;
	int aiVoitot = 0;

	while (rounds < 100) 
	{		
		rounds++;
		tulos = tekoaly.veikkaa(veikkaukset, a, rounds);
		cout << "ROUND: " << rounds <<"/100" << endl;
		cout << "(V)asen vai (O)ikea?" << endl;
		cin >> a;
		while (a != 'v' && a!= 'o') {
			cout << "(V)asen vai (O)ikea?" << endl;
			cin >> a;
		}
		
		veikkaukset[rounds] = a;
		if (tulos == a) {
			aiVoitot++;
			cout << "Arvasin oikein! "<< aiVoitot <<"/"<< rounds << endl;
			
		}
			
		
	}


	
}



