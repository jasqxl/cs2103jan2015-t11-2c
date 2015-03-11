#pragma once

#ifndef PARSER_H
#define PARSER_H
#include <fstream>
#include <vector>
#include <string>

class Parser
{
/*	private:
		std::string command;
		std::string userInput;
*/
	public:
		~Parser(void);
		std::string getUserCommand();
		std::string getUserInput();
		std::string userContent(std::string userInput);
		std::string userDate(std::string userInput);
		std::string userTime(std::string userInput);
		int startTime(std::string userTime);
		int endTime(std::string userTime);
		std::string userPriority(std::string userInput);

};
#endif