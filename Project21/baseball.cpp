#include "gmock/gmock.h"
#include <stdexcept>
#include <string>

using std::string;
using std::exception;
using std::length_error;

class Baseball {
public:
	void guess(const string& string) {
		throw length_error("Must be three letters.");
	}
};