//
// Created by rperrot on 3/29/25.
//

#ifndef EX01_DATA_HPP
#define EX01_DATA_HPP

#include <iostream>


class Data
{
public:
	~Data();
	Data();
	Data(const Data &data);
	Data &operator=(const Data &data);
	const std::string &getStringVal() const;
	void setStringVal(const std::string &stringVal);
	int getIntVal() const;
	void setIntVal(int intVal);

private :
	// Private members and methods can be declared here
		std::string _stringVal;
		int 		_intVal;
};


#endif //EX01_DATA_HPP
