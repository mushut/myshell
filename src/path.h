class Path {
public:
	Path(void);
	Path(std::string new_path);
	bool change_path(std::string);
	std::vector<std::string> parse_path(std::string);
private:
	std::string path_string;
	std::vector<std::string> path;
}
