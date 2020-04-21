#include <iostream>
#include <conio.h>

#include "AD2_Easy.h"

using std::cout;

int main()
{
	char error[512];
	AD2_Easy ad2;

	if (ad2.isConnected()) {
		ad2.setDirAll(1);
		cout << std::bitset<16>(ad2.readDirAll()) << "\n";
		ad2.write(1, 1);
		cout << std::bitset<16>(ad2.readAll()) << "\n";
	}
	else {
		cout << "AD2 not conneted.";
	}


	return 0;
}