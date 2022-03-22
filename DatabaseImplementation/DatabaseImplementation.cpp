#include "DatabaseImplementation.h"

#include <algorithm>
#include <iostream>

DatabaseImplementation::DatabaseImplementation()
{

}

void DatabaseImplementation::Add(const std::string& date, const std::string& event)
{
	auto& dateIt = _dataBase.find(date);

	if (dateIt == _dataBase.end())
	{
		//wrong date
		return;
	}

	dateIt->second.insert(event);
}

void DatabaseImplementation::Delete(const std::string& date, const std::string& event)
{
	auto& dateIt = _dataBase.find(date);

	if (dateIt == _dataBase.end())
	{
		//wrong date
		return;
	}

	dateIt->second.erase(event);
}

void DatabaseImplementation::Delete(const std::string& date)
{
	auto& dateIt = _dataBase.find(date);

	if (dateIt == _dataBase.end())
	{
		//wrong date
		return;
	}

	_dataBase.erase(dateIt);
}

void DatabaseImplementation::Find(const std::string& date)
{
	auto& dateIt = _dataBase.find(date);

	if (dateIt == _dataBase.end())
	{
		//wrong date
		return;
	}

	auto& dateEvents = dateIt->second;

	for (auto event : dateEvents)
	{
		std::cout << event << std::endl;
	}
}

void DatabaseImplementation::Print()
{

}