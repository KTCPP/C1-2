#include<iostream>
#include<array>
#include <vector>
#include <fstream>

using namespace std;
constexpr size_t groesse = 3;

void fill_array_with_user_input(vector<int>& zubefuellen) {
	string eingabe;
	cout << "Eingabedatei :";
	cin >> eingabe;
	ifstream ifs;
	ifs.open(eingabe);

	int number = 0;
	while(ifs.good()){
		ifs >> number;
		zubefuellen.push_back(number);
	}

	ifs.close();

}

void print_even_elements(vector<int>& auszugeben) {
	string ausgabe;
	cout << "Ausgabe:";
	cin >> ausgabe;
	ofstream ofs;
	ofs.open(ausgabe);
	for (auto element : auszugeben) {
		if (element % 2 == 0) ofs << element << "\n";
	}
	ofs.close();
}

int main() {
	std::vector<int> n;
	fill_array_with_user_input(n);
	print_even_elements(n);
}