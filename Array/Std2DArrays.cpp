#include "Std2DArrays.h"
#include <iostream>

void fillArray(std::array<std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS>& arr, int rows, int columns) {
	if (rows > MAXNUMBEROFROWS || columns > MAXNUMBEROFCOLUMNS) {
		throw std::invalid_argument("Incorect number of rows or cloumns");
	}
	int startValue = 1;
	for (int row = rows - 1; row >= 0; row--) {
		if ((rows - row) % 2 == 1) {
			for (int col = 0; col < columns; col++) {
				arr[row][col] = startValue++;
			}
		}
		else {
			for (int col = columns - 1; col >= 0; col--) {
				arr[row][col] = startValue++;
			}
		}
	}

}
void printArray(std::array<std::array<int, MAXNUMBEROFCOLUMNS>, MAXNUMBEROFROWS>& arr, int rows, int columns) {
	if (rows > MAXNUMBEROFROWS || columns > MAXNUMBEROFCOLUMNS) {
		throw std::invalid_argument("Incorect number of rows or cloumns");
	}
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < columns; j++) {
			std::cout << arr[i][j] << " ";

		}
		std::cout << std::endl;
	}
}