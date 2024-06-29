#include <string>

class Supplier {
private:
    int supplierId;
    std::string supplierName;
    std::string address;
    std::string phoneNumber;
    std::string email;

public:
    Supplier(int supplierId, std::string supplierName, std::string address, std::string phoneNumber, std::string email)
        : supplierId(supplierId), supplierName(supplierName), address(address), phoneNumber(phoneNumber), email(email) {}

    // Getters
    int getSupplierId() const {
        return supplierId;
    }

    std::string getSupplierName() const {
        return supplierName;
    }

    std::string getAddress() const {
        return address;
    }

    std::string getPhoneNumber() const {
        return phoneNumber;
    }

    std::string getEmail() const {
        return email;
    }
};
