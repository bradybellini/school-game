#include "BlasterName.h"
#include <random>
#include <time.h>
#include <fstream>
#include <iostream>
#include "Windows.h"

using namespace std;

std::string BlasterName::generateName()
{
	string noun[10] = {"work", "sea", "rifle","oranges","mice", "machine", "leaf", "jellyfish", "heart", "cheese"};
	string adj[10] = { "spicy", "noxious", "tiny", "wet", "silky", "jazzy", "scientific", "gleaming", "overrated", "magical" };
	srand(time(NULL));
	int r;
	int n;
	int a;

	//ifstream fin_noun("nouns.txt");
	//ifstream fin_adj("adjective.txt");
		
	//fin_noun >> noun;
	//fin_adj >> adj;

	for (int i = 0; i < 1; i++) {
		r = rand() % 10;
		n = r;
		Sleep(1000);
	}

	for (int i = 0; i < 1; i++) {
		r = rand() % 10;
		a = r;
		Sleep(1000);
	}
	string name = adj[a] + noun[n];

	return name;
}

BlasterName::BlasterName()
{
	name = generateName();
}

std::string BlasterName::getName()
{
	return name;
}

void BlasterName::setName(std::string nname)
{
	name = nname;
}
