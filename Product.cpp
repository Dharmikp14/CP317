#include <string>

class Product {
private:
    int productId;
    std::string productName;
    std::string description;
    double price;
    int quantity;
    std::string status;
    int supplierId;

public:
    Product(int productId, std::string productName, std::string description, double price, int quantity, std::string status, int supplierId)
        : productId(productId), productName(productName), description(description), price(price), quantity(quantity), status(status), supplierId(supplierId) {}

    // Getters
    int getProductId() const {
        return productId;
    }

    std::string getProductName() const {
        return productName;
    }

    std::string getDescription() const {
        return description;
    }

    double getPrice() const {
        return price;
    }

    int getQuantity() const {
        return quantity;
    }

    std::string getStatus() const {
        return status;
    }

    int getSupplierId() const {
        return supplierId;
    }
};
