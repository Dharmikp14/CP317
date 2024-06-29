#include <vector>
#include <algorithm>
#include "Product.cpp"
#include "Supplier.cpp"

class Sorter {
public:
    static void sortProductsByName(std::vector<Product>& products) {
        std::sort(products.begin(), products.end(), [](const Product& a, const Product& b) {
            return a.getProductName() < b.getProductName();
        });
    }

    static void sortSuppliersByName(std::vector<Supplier>& suppliers) {
        std::sort(suppliers.begin(), suppliers.end(), [](const Supplier& a, const Supplier& b) {
            return a.getSupplierName() < b.getSupplierName();
        });
    }
};
