#include <string>
#include <sstream>

int calculate(std::string str) {
	if (str == "") {
		return 0;
	}
	int a;
	int sum = 0;
	std::istringstream ssr(str);
	while (!ssr.eof()) {
		if (ssr >> a) {
			sum += a;
		}
	}
