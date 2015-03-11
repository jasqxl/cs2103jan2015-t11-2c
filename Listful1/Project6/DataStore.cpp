#include "DataStore.h"

DataStore::DataStore() {}

int DataStore::countDigit(int num) {
	int count = 0;
	int tNum = num;

	while (tNum > 0) {
		count++;
		tNum = num/10;
	}

	return count;
}

std::string DataStore::getDataString(std::vector <Entries>::iterator iter, int index) {
	std::ostringstream dataString;

	if (index != 0) {
		for (iter = dataBase.begin(); (index - 1) != 0; iter++) {
			index--;
		}
	}

	int sTime = countDigit((*iter).startTime);
	int eTime = countDigit((*iter).endTime);
	int nDay = countDigit((*iter).day);
	int nMonth = countDigit((*iter).month);
	int nYear = countDigit((*iter).year);

	dataString << (*iter).index << '. ' << (*iter).subject << "\nTime: ";
	
	while (sTime < 4) {
		dataString << '0';
		sTime++;
	}
	dataString << (*iter).startTime << '-';

	while (eTime < 4) {
		dataString << '0';
		eTime++;
	}
	dataString << (*iter).endTime << "\tDate: ";
	
	if (nDay < 2) {
		dataString << '0';
	}
<<<<<<< HEAD
	dataString << (*iter).day << '/';
	
	if (nMonth < 2) {
		dataString << '0';
	}
	dataString << (*iter).month << '/' << (*iter).year << '\t' << (*iter).impt << '\t' << (*iter).category << '\n';
	
	return dataString.str();
=======
}
/*
void DataStore::executeCommand() {

	switch (usercommand) {
		case ADD:
			//remove whitespace before user input
			cin >> ws;
			getline(cin, input);
			addContent(input);
			break;

		case DELETE:
			cin >> index;
			deleteContent();
			break;

		case CLEAR:
			clearContent();
			break;

		case DISPLAY:
			displayContent();
			break;
			
		case SORT:
			sortFile();
			break;

		case SEARCH:
			cin >> ws;
			getline(cin, input);
			result = searchFile(input);
			break;

		case INVALID:
			sprintf_s(buffer, ERROR_COMMAND.c_str(), command.c_str());
			print(buffer);
			break;

		case EXIT:
			return;
	}
	commandType();
	executeCommand();	
}
*/


DataStore::DataStore(void) {
}


DataStore::~DataStore(void) {
>>>>>>> a10767f6b2d7003748f1886b6c098e5337a7789d
}

void DataStore::updateFile(std::string &fileName) {
	std::vector <Entries>::iterator iter = dataBase.begin();

	writeFile.open(fileName);
	for (int count = 1; iter != dataBase.end(); count++) {
		writeFile << count << ". " << getDataString(iter) << "\n";
		iter++;
	}
	writeFile.close();
}

void DataStore::entryType(int index, std::string subject, int startTime, int endTime, int day, int month, int year, std::string impt, std::string category) {
	tempEntry.index = index;
	tempEntry.subject = subject;
	tempEntry.startTime = startTime;
	tempEntry.endTime = endTime;
	tempEntry.day = day;
	tempEntry.month = month;
	tempEntry.year = year;
	tempEntry.impt = impt;
	tempEntry.category = category;
}