#define _CRT_NO_WARNINGS
#include "Funcs.h"




int main() {
	setlocale(LC_ALL, "Rus");
	int32_t size{};
	std::cout << "Input size >> ";
	std::cin >> size;

	try {
		char** mtrstr = new char*[size];
		
		InputStr(mtrstr, size);




	}
	catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
	}



	return 0;
}

