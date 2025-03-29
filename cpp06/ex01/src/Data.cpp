//
// Created by rperrot on 3/29/25.
//

#include "Data.hpp"

const std::string &Data::getStringVal() const
{
	return _stringVal;
}

void Data::setStringVal(const std::string &stringVal)
{
	_stringVal = stringVal;
}

int Data::getIntVal() const
{
	return _intVal;
}

void Data::setIntVal(int intVal)
{
	_intVal = intVal;
}

Data::Data()
{}

Data::~Data()
{

}

Data::Data(const Data &data)
{
	_stringVal = data._stringVal;
	_intVal = data._intVal;
}

Data &Data::operator=(const Data &data)
{
	if (this != &data)
	{
		_stringVal = data._stringVal;
		_intVal = data._intVal;
	}
	return *this;
}