#include <stdio.h>
#include <iostream>

#include <string>

int main() {
	int in;

	scanf("%d", &in);
	std::string inS = std::to_string(in);
	//size_t l = inS.length();
	int l = static_cast<int>(inS.length());

	int r = l / 3;
	if (r != 0) {
		if (l % 3 == 0) r--;
		for (int i = 1; i <= r; i++) {
			inS.insert(l - 3 * i, ".");
		}
	}
	std::cout << inS;
	return 0;
}