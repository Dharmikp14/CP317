#include <iostream>
#include <vector>
#include "ProductFileReader.cpp"
#include "SupplierFileReader.cpp"

int main() {
    ProductFileReader productReader;
    SupplierFileReader supplierReader;

    try {
        std::vector<Product> products = productReader.readFromFile("products.txt");
        std::vector<Supplier> suppliers = supplierReader.readFromFile("suppliers.txt");

        // Print out the products and suppliers to verify
        for (const auto& product : products) {
            std::cout << product << std::endl;
        }

        for (const auto& supplier : suppliers) {
            std::cout << supplier << std::endl;
        }

    } catch (const std::exception& e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
