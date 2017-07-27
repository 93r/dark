#include "dark"

namespace dark {
	void exit(integer i) { std::exit(i); }
}

int main() {
	dark::number x = 55.3;
	dark::integer y = 123;
	dark::integer z = -888;
	dark::string s = "dark";

	dark::print(x, s, "mako\n");
	dark::print(y, "\n");
	dark::print(dark::abs(z), "\n");
	dark::print(dark::atan2(1.0, 1.0), "\n");

	dark::exit(0);
	return 0;
}

