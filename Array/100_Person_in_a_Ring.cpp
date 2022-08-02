#include <iostream>
#include <vector>
using namespace std;

int main()
{

	int person = 100;

	// Placeholder array for person
	vector<int> a(person);


	for (int i = 0; i < person; i++) {
		a[i] = i + 1;
	}

	int pos = 0;


	while (a.size() > 1) {
	
		pos++;

		pos %= a.size();
		a.erase(a.begin() + pos);
	
	}

	// Print Person that survive the game
	cout << a[0];

	return 0;
}
