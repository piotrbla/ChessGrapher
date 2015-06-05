#include "FilePGN.h"
#include <fstream>
#include <iostream>

void FilePGN::eraseBraces(std::string& lineData)
{
	lineData.erase(lineData.length(), 1);
	if (0==lineData.length()) 
		throw std::exception("Bad format - pgn file.");
	lineData.erase(0, 1);
}

void FilePGN::CreateNewGame(std::string lineData)
{
	eraseBraces(lineData);
	std::cout << lineData << std::endl;
}


void FilePGN::AppendToGame(std::string lineData)
{
	eraseBraces(lineData);
	std::cout << lineData << std::endl;
}

FilePGN::FilePGN(std::string filename)
{
	std::fstream file(filename);
	if (!file.is_open())
		throw std::exception("can't read pgn file");

	std::string line;
	bool isDescriptionLine=false;
	while (getline(file, line))
	{
		if (0==line.length()) 
			continue;
		if ('['==line[0])
		{
			if(!isDescriptionLine)
			{
				CreateNewGame(line);
			}
			else
			{
				AppendToGame(line);
			}
				
			isDescriptionLine=true;
		}
		else
		{
			std::cout<<"Ruchy: " << line;
			isDescriptionLine=false;
		}
	}
}
