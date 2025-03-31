//
// Created by rperrot on 3/30/25.
//

#ifndef EX00_WHATEVER_HPP
#define EX00_WHATEVER_HPP
class Test{};
template <typename T>
void swap(T &a, T &b) {
	T tmp = a;
	a = b;
	b = tmp;
}

template <typename T>
T min(T a, T b) {
	return (a < b) ? a : b;
}
template <typename T>
T max(T a, T b) {
	return (a > b) ? a : b;
}

#endif
