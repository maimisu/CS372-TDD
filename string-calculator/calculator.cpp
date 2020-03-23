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
	while (std::getline(ssr, str, ',')) {
		if (ssr(str) >> a) {
			sum += a;
		}
	}
	return sum;
	
