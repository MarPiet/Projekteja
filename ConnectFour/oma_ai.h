#include <stdlib.h>
#include "connect4.h"


class Oma_AI : public C4_AI
{
public:
	Move select_best_move() {
		Move move;
		int nof_moves;
		int not_legal;
		Move movelist[COLUMNS];

		nof_moves = gen_moves(movelist);
		not_legal = 1;

		move = movelist[0];
	
		for (int c = 0; c < nof_moves; ++c) {
			for (int r = 0; r < ROWS; ++r) {
				if (_board[c + 1][r] == RED && _board[c + 2][r] == RED)
					move = c;
				else if (_board[c - 1][r] == RED && _board[c - 2][r] == RED)
					move = c;
			}
		}


		return move;
	}



	void get_AI_name(std::string &name) const
	{
		name = "BOT";
	}
};
