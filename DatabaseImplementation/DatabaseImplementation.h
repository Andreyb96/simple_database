#ifndef DATABASE_IMPLEMENTATION_H
#define DATABASE_IMPLEMENTATION_H

#include <string>
#include <map>
#include <set>

class DatabaseImplementation
{
public:
	DatabaseImplementation();
	void Add(const std::string& date, const std::string& event);
	void Delete(const std::string& date, const std::string& event);
	void Delete(const std::string& date);
	void Find(const std::string& date);
	void Print();
private:
	std::map<std::string, std::set<std::string>> _dataBase;
};


#endif // DATABASE_IMPLEMENTATION_H