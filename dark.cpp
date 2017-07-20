#include "dark"

namespace dark {
integer print() { return 0; }

template<typename H, typename... Args>
integer print(H h, Args... a) {
	std::cout << h;
	print(a...);
	return 0;
}
}

int main() {
    dark::number x = 55.3;
    dark::integer y = 123;

    //std::cout << "dark" << std::endl;
    dark::print(x, "dark");
    dark::print(y);

    return 0;
}

