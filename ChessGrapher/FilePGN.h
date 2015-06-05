#pragma once

#include <string>
#include "ChessGame.h"

class FilePGN
{
public:
	void CreateNewGame(std::string);
	void eraseBraces(std::string&);
	void AppendToGame(std::string);
	FilePGN(std::string);
private:
	std::vector<ChessGame>::iterator actualGame;
	std::vector<ChessGame> games;
};