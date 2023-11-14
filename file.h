#pragma once

void animateLoading() {
	for (int i = 0; i < 1; ++i) {
		cout << "\nloading...";
		Sleep(1000);
	}
}

void File() {
	ofstream Files;
	Files.open("PRoject/RentCar.txt");

	if (Files.is_open()) {

		Files << "Writing File\n";
		Files.close();
	}
	else {
		cout << "Unable";
	}
}

