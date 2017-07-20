#include "dark"

namespace dark {
	void exit(integer i) { std::exit(i); }

}

int main() {
	dark::number x = 55.3;
	dark::integer y = 123;
	dark::integer z = -888;
	dark::string s = "dark";

	dark::print(x, s, "mako");
	dark::print(y);
	dark::print(dark::abs(z));

	dark::exit(0);
	return 0;
}

