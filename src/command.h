#include <vector>
#include <string>

class Command {
public:
	Command(void);
	Command(std::string new_type, std::vector<std::string> new_parameters);
	bool execute(void);
private:
	std::string type;
	std::vector<std::string> parameters;
};
