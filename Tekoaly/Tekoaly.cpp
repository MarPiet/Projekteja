#include <iostream>
using namespace std;

class Tekoaly {

public:
	char veikkaa(char* veikkaukset, char veikkaus, int rounds)
	{	
		if (rounds > 3) {
			for (int i = 4; i < rounds;) {
				if (veikkaukset[i - 3] == veikkaukset[rounds - 3] && veikkaukset[i - 2] == veikkaukset[rounds - 2] && veikkaukset[i - 1] == veikkaukset[rounds - 1])
				{					
					if (veikkaukset[i] == 'o') {
							o_count++;
					}				
					else if (veikkaukset[i] == 'v') {
						v_count++;
					}									
				}
				i++;
			}
		}
			
			if (o_count > v_count) {
				o_count = 0;
				v_count = 0;
				return 'o';
			}
			if(v_count > o_count) {
				o_count = 0;
				v_count = 0;
				return 'v';
			}


			int r = rand() % 2;
			if (r == 0) {
				return 'o';
			}
			else {
				return 'v';
			}


	}

private:
	 int o_count = 0;
	 int v_count = 0;

};
