#include "Funcs.h"

void qsort(
	void* base,
	size_t number,
	size_t width,
	int(__cdecl* compare)(const void*, const void*)
);

void InputStr(char** str, int32_t size) {
	
	for (int32_t i{}; i < size; ++i) {
		char* temp = new char[256];

		std::cin.ignore();
		std::cin.getline(temp, 256);

		strcat(str[i], temp);
		strcat(str[i], ".");
	}
}




int32_t WordToNum(char* word) {
	int32_t num{};



	
	return num;
}


void StrToRes(char** str, int32_t size) {
	char delim[] = { ",/.()" };
	char** copy = new char*[size];
	
	for (int32_t i{}; i < size; ++i) {
		strcpy(copy[i], str[i]);
	}



	int32_t arr[100];

	int32_t count{};

	char* ptrWord = strtok(copy[0], delim);
	if (ptrWord == NULL) {
		throw std::exception("—трока полностью состоит из разделителей.");
	}
	while (ptrWord != NULL) {
		if (!ptrWord) {
			ptrWord = strtok(NULL, delim);
			continue;
		}
		int32_t num{ WordToNum(ptrWord) };


		arr[count] = num;
		++count;

		ptrWord = strtok(NULL, delim);
	}

	qsort(arr, size, 4, );
}