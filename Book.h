#ifndef ADDRESSBOOK_BOOK_H
#define ADDRESSBOOK_BOOK_H

#include <list>
#include <string>
#include <iostream>

namespace AddressBookLib
{
    struct User
    {
        uint32_t u_id;
        std::string u_name;
        uint16_t u_grade;

        // I'm lazy to make operators << and >> :)
        void print() const {
            std::cout << "User(id=" << u_id
                      << ", name='" << u_name
                      << "', grade=" <<  u_grade << ")";
        }
    };

    class Book
    {
    private:
        std::list<User> address_book;
    public:
        // Constructor
        Book();
        [[maybe_unused]] explicit Book(const User& empleyee);

        // Destructor
        ~Book();

        void add_user(const User& employee);
        void add_user(uint32_t id, const std::string& name, uint16_t grade);

        void remove_by_id(uint32_t id);

        [[nodiscard]] User find(uint32_t id) const;
        [[nodiscard]] User find(const std::string &name) const;
        void print() const;
        void clear();
    };

}

#endif
