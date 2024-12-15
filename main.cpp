#include <iostream>
#include <Windows.h>

using namespace std;

int main() {
	// Console Animation

	int iteration = 0;

	while (true) {
		system("cls");
		if (iteration == 0) { cout << "    H"; }
		else if (iteration == 1) { cout << "   H"; }
		else if (iteration == 2) { cout << "  H"; }
		else if (iteration == 3) { cout << " H"; }
		else if (iteration == 4) { cout << "H"; }
		else if (iteration == 5) { cout << "H    i"; }
		else if (iteration == 6) { cout << "H   i"; }
		else if (iteration == 7) { cout << "H  i"; }
		else if (iteration == 8) { cout << "H i"; }
		else if (iteration == 9) { cout << "Hi "; }
		else if (iteration == 10) { cout << "Hi\n  !"; }
		else if (iteration == 11) { cout << "Hi!"; }
		else if (iteration == 12) { cout << "H i !"; }
		else if (iteration == 13) { cout << "H  i  !"; }
		else if (iteration == 14) { cout << "   i  !"; }
		else if (iteration == 15) { cout << "      !"; }
		else if (iteration == 16) { cout << ""; }
		else if (iteration > 18) { break; }
		iteration++;
		Sleep(150);
	}

	return 0;
}