//
// Created by rperrot on 3/29/25.
//

#ifndef EX01_SERIALIZER_HPP
#define EX01_SERIALIZER_HPP

#include <iostream>
#include <string>
# include <stdint.h>
#include "Data.hpp"

class Serializer
{
	public:
		// Public members and methods can be declared here
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};


#endif //EX01_SERIALIZER_HPP
