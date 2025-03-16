#include "node.h"

Contact::Contact() {
    return;
}

Contact::~Contact() {
    return;
}

int Contact::add_person(const std::string& name, const std::string& number) {
    name2number[name] = number;
    return 0;
}

int Contact::delete_person(const std::string& name) {
    if (name2number.find(name) != name2number.end()) {
        name2number.erase(name);
        return 0;
    }
    return -1;
}

int Contact::find_person(const std::string& name, std::string& result) {
    if (name2number.find(name) != name2number.end()) {
        result = name2number[name];
        return 0;
    }
    return -1;
}
