#include "Book.h"

int main()
{
    AddressBookLib::Book a_book {};

    AddressBookLib::User employee {1, "Стас Борецкий", 3};
    a_book.add_user(employee);
    a_book.add_user({2, "Чистяков В.В.", 5});
    a_book.add_user({3, "Обама", 4});
    a_book.add_user(3, "Виктор Цой", 12);
    a_book.print();

    a_book.remove_by_id(2);

    a_book.print();
    a_book.find("Обама").print();
    std::cout << '\n';

    a_book.find(1).print();
    std::cout << '\n';

    a_book.clear();
    a_book.print();

    return 0;
}
