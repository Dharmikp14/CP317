#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include "Supplier.cpp"

class SupplierFileReader {
public:
    std::vector<Supplier> readFromFile(const std::string& fileName) {
        std::vector<Supplier> suppliers;
        std::ifstream file(fileName);
        std::string line;

        while (std::getline(file, line)) {
            std::stringstream ss(line);
            std::string part;
            std::vector<std::string> parts;

            while (std::getline(ss, part, ',')) {
                parts.push_back(part);
            }

            int supplierId = std::stoi(parts[0]);
            std::string supplierName = parts[1];
            std::string address = parts[2];
            std::string phoneNumber = parts[3];
            std::string email = parts[4];

            suppliers.push_back(Supplier(supplierId, supplierName, address, phoneNumber, email));
        }

        return suppliers;
    }
};
