#pragma once
#include <vector>
#include "ChessPlayer.h"
#include "ChessMove.h"

class ChessGame
{
	std::vector <ChessMove> moves;
	std::vector<std::string > descriptionLines;
	ChessPlayer playerWhite;
	ChessPlayer playerBlack;

public:
	ChessGame(void);
	~ChessGame(void);
};

