#include <iostream>
#include <memory>
#include <string>

#include "node.h"

int main() {
    std::shared_ptr<Contact> contact = std::make_shared<Contact>();
    contact->add_person("plz", "1323344");
    contact->add_person("xcc", "767678682");
    std::string res;
    if (contact->find_person("plz", res) == 0) {
        std::cout << "find plz res:" << res << std::endl;
    } else {
        std::cout << "find plz failed" << std::endl;
    }

    if (contact->find_person("ddd", res) == 0) {
        std::cout << "find ddd res:" << res << std::endl;
    } else {
        std::cout << "find ddd failed" << std::endl;
    }

    if (contact->delete_person("plz") == 0) {
        std::cout << "delete plz success" << std::endl;
    } else {
        std::cout << "delete plz failed" << std::endl;
    }

    if (contact->delete_person("ddd") == 0) {
        std::cout << "delete ddd success" << std::endl;
    } else {
        std::cout << "delete ddd failed" << std::endl;
    }
}
