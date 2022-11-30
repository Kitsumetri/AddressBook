#include "Book.h"

int main()
{
    AddressBookLib::Book a_book {};

    AddressBookLib::Employee employee {1, "Стас Борецкий", 3};
    a_book = a_book + employee;
    a_book.add_user(2, "Чистяков В.В.", 100);

    std::cout << a_book << std::endl;
    std::cout << a_book[23] << std::endl;
    a_book.clear();
    return 0;
}
