#include "Serializer.hpp"
int main() {
	Data data;
	data.setStringVal("Hello");
	data.setIntVal(42);

	uintptr_t raw = Serializer::serialize(&data);
	Data *deserializedData = Serializer::deserialize(raw);

	std::cout << "Original Data: " << data.getStringVal() << ", " << data.getIntVal() << std::endl;
	std::cout << "Deserialized Data: " << deserializedData->getStringVal() << ", " << deserializedData->getIntVal() << std::endl;


	//segfault
//	uintptr_t  raw2 = 3;
//	Data *deserializedData2 = Serializer::deserialize(raw2);
//	std::cout << "Deserialized Data2: " << deserializedData2->getStringVal() << ", " << deserializedData2->getIntVal() << std::endl;
	return 0;
}