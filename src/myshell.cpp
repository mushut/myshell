/*
 * myshell program
 * Aki Sipovaara 2019
 */

#include <iostream>

#include "command.h"

/*
 * Program may be passed a script file with commands listed.
 * Otherwise commands must be written on the shell itself
 */
int main(int argc, char **argv) {
	std::cout << "myshell" << std::endl;

	// program run with arguments
	if (argc > 1) {
		// Do something
	}
	
	// program run without arguments
	else {
		std::string path = "~";
		std::string command_text = "";
		std::vector<Command *> command_history;

		while (true) {
			Command *command;
			std::vector<std::string> parameters;

			std::cout << "myshell " + path + ": ";
			
			getline(std::cin, command_text);

			// parse command and execute the command

			if (command_text == "list") {
				command = new Command("list", parameters);
			}

			if (command_text == "quit") {
				break;
			}

			command->execute();
			command_history.push_back(command);
			// Todo: write command to a log file
		}
	}

	return 0;
}
