#include "command.h"

#include <iostream>

extern "C" {
#include <sys/stat.h>
}


Command::Command(void) {
	type = "Not initialized";
	parameters = NULL;
}

Command::Command(std::string new_type, std::vector<std::string> new_parameters) {
	// Constructor
	type = new_type;
	parameters = new_parameters;
}

bool Command::execute(void) {
	// Execute command
	if (type == "list") {
		// List command

		// TESTING: test basic functions first
		struct stat buffer;
		int result = 0;

		result = stat("/home/asipovaa/", &buffer);
		std::cout << buffer.uid_t << std::endl;
		std::cout << "Result: " << result << std::endl;

		return true;
	}
	
	else {
		return false;
	}
}
