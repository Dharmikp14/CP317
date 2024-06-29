#include <fstream>
#include <vector>
#include <string>

class FileReader {
public:
    std::vector<std::string> readFromFile(const std::string& fileName) {
        std::vector<std::string> lines;
        std::ifstream file(fileName);
        std::string line;

        while (std::getline(file, line)) {
            lines.push_back(line);
        }

        return lines;
    }
};
