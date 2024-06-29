#include <fstream>
#include <vector>
#include <string>
#include <stdexcept>
#include "Product.cpp"
#include "Supplier.cpp"

class InventoryFileCreator {
public:
    static void createInventoryFile(const std::vector<Product>& products, const std::vector<Supplier>& suppliers, const std::string& fileName) {
        std::ofstream file(fileName);

        for (const auto& product : products) {
            Supplier supplier = findSupplierById(suppliers, product.getSupplierId());
            file << formatProductLine(product, supplier);
        }
    }

private:
    static Supplier findSupplierById(const std::vector<Supplier>& suppliers, int supplierId) {
        for (const auto& supplier : suppliers) {
            if (supplier.getSupplierId() == supplierId) {
                return supplier;
            }
        }
        throw std::invalid_argument("Supplier with ID " + std::to_string(supplierId) + " not found");
    }

    static std::string formatProductLine(const Product& product, const Supplier& supplier) {
        return std::to_string(product.getProductId()) + ", " + product.getProductName() + ", " +
               std::to_string(product.getQuantity()) + ", $" + std::to_string(product.getPrice()) + ", " +
               product.getStatus() + ", " + supplier.getSupplierName() + "\n";
    }
};
