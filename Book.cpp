#include "Book.h"

namespace AddressBookLib
{
    // Constructor
    Book::Book() = default;

    Book::Book(const User &employee) {
        address_book.push_back(employee);
    }

    // Destructor (I guess it makes no sense but IDK)
    Book::~Book() { address_book.clear(); }

    void Book::add_user(const User &employee) {
        address_book.push_back(employee);
    }
    void Book::add_user(const uint32_t id, const std::string& name, const uint16_t grade) {
        address_book.push_back({id, name, grade});
    }

    void Book::remove_by_id(const uint32_t id) {
        for (auto it = address_book.begin(); it != address_book.end(); ++it) {
            if (it->u_id == id) {
                address_book.erase(it);
                return;
            }
        }
        std::cerr << "Remove error! User wasn't found" << std::endl;
    }

    User Book::find(const uint32_t id) const
    {
        for (const User& it : address_book) {
            if (it.u_id == id)
                return it;
        }
        std::cerr << "\nFind error! User wasn't found by id=" << id << "!" << std::endl;
        exit(-1); // I know that this is awful :)
    }
    User Book::find(const std::string& name) const {
        for (const User& it : address_book) {
            if (it.u_name == name)
                return it;
        }
        std::cerr << "\nFind Error! User wasn't found by name=" << name << "!" << std::endl;
        exit(-1);
    }

    void Book::clear() {
        address_book.clear();
    }
    void Book::print() const {
        for (const auto &it: address_book) {
            it.print();
            std::cout << " -> ";
        }
        std::cout << "null" << std::endl;
    }
}
