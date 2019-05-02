class Path {
public:
	Path(void);
	Path(std::string new_path);
	bool change_path(std::string);
	std::vector<std::string> parse_path(std::string);
	std::string to_string(void);
private:
	std::string path_string;
	std::vector<std::string> path;
}
