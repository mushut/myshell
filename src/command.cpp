#include "command.h"

Command::Command(std::string new_type, std::vector<std::string> new_parameters) {
	// Constructor
	type = new_type;
	parameters = new_parameters;
}

bool Command::execute(void) {
	// Execute command
	if (type == "list") {
		// List command

		return true;
	}
	
	else {
		return false;
	}
}
