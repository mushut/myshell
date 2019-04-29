/*
 * myshell program
 * Aki Sipovaara 2019
 */

#include <iostream>

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
		std::string command = "";

		while (true) {
			std::cout << "myshell " + path + ": ";
			
			getline(std::cin, command);

			// parse command and execute the command

			if (command == "quit") {
				break;
			}
		}
	}

	return 0;
}
