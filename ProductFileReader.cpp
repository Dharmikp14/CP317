#include <fstream>
#include <sstream>
#include <vector>
#include <string>
#include "Product.cpp"

class ProductFileReader {
public:
    std::vector<Product> readFromFile(const std::string& fileName) {
        std::vector<Product> products;
        std::ifstream file(fileName);
        std::string line;

        while (std::getline(file, line)) {
            std::stringstream ss(line);
            std::string part;
            std::vector<std::string> parts;
            
            while (std::getline(ss, part, ',')) {
                parts.push_back(part);
            }

            int productId = std::stoi(parts[0]);
            std::string productName = parts[1];
            std::string description = parts[2];
            double price = std::stod(parts[3]);
            int quantity = std::stoi(parts[4]);
            std::string status = parts[5];
            int supplierId = std::stoi(parts[6]);

            products.push_back(Product(productId, productName, description, price, quantity, status, supplierId));
        }

        return products;
    }
};
