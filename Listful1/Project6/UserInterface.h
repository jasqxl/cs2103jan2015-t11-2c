#ifndef UI_H
#define UI_H

#include <fstream>
#include <vector>
#include <string>
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <sstream>
#include <vector>
#include <iomanip>


static const std::string MESSAGE_WELCOME = "*** Welcome to Listful ***";
static const std::string MESSAGE_ACTION = "Please choose an action: ";

static const std::string MESSAGE_ADD = "added to %s: \"%s\"";
static const std::string MESSAGE_DELETE = "deleted from %s: \"%s\"";
static const std::string MESSAGE_CLEAR = "all content deleted from %s";
static const std::string MESSAGE_EMPTY = "%s is empty";
static const std::string MESSAGE_SORT = "%s has been sorted alphabetically";

static const std::string ERROR_COMMAND = "invalid command";
static const std::string ERROR_DELETE = "text not found";
static const std::string ERROR_ADD = "\"%s\" is already inside. y to include; n to exclude";
static const std::string ERROR_SEARCH = "\"%s\" cannot be found in %s";

//static const int FILE_INDEX;

class UserInterface {
	private:
		std::vector<std::string> _quotes;

		//stores command from user
		int command; 

		int fileSize;
		
	public:	
		~UserInterface(void);
		void printStarRow();
		void centralizeOutput(std::string text);
		void runProgram(char *[]);
		void addQuote();
		std::string quoteOfTheDay();
		void userAction();
		void homeScreen();
//		void checkFileCreated(std::string &fileName);
};
#endif