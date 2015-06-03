#include "FilePGN.h"
#include <fstream>
#include <iostream>

FilePGN::FilePGN(std::string filename)
{
	std::fstream file(filename);
	if (!file.is_open())
		throw std::exception("can't read pgn file");

	std::string line;
	while (!file.eof())
	{
		file >> line;
		std::cout << line << std::endl;
	}
}
