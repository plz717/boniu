#ifndef NODE_H
#define NODE_H

#include <string>
#include <unordered_map>
class Contact {
  public:
    Contact();
    ~Contact();

    int add_person(const std::string& name, const std::string& number);
    int delete_person(const std::string& name);
    int find_person(const std::string& name, std::string& result);

  private:
    std::unordered_map<std::string, std::string> name2number;
};

#endif  // NODE_H
