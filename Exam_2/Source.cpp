#include "runner.h"
#include "registrants.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;


Registrants::Registrants(string Filename){
	Filename = "C:\\Users\\Ben\\Desktop\\registrants.txt";

	string firstname, lastname, pace;


	ifstream registrants(Filename);
	string line;
	registrants.open(Filename.c_str());
	if (!registrants.fail()){
		while (registrants >> firstname >> lastname >> pace){
			entries.push_back(firstname + " " + lastname + " " + pace);
		}
	}
	registrants.close();
}

int main() {
	string firstname, lastname;

	sort(entries.begin(), entries.end());

	ofstream white_file;
	white_file.open("white.txt");
	for (int i =360; i >-1; i--)
	{
		white_file << entries.push_back(firstname, " ", lastname);
	}

	white_file.close();

	ofstream yellow_file;
	yellow_file.open("yellow.txt");
	for (int i = 420; i >360; i--)
	{
		yellow_file << entries.push_back(firstname, " ", lastname);
	}

	yellow_file.close();

	ofstream green_file;
	green_file.open("green.txt");
	for (int i = 480; i >420; i--)
	{
		green_file << entries.push_back(firstname, " ", lastname);
	}

	green_file.close();

	ofstream orange_file;
	orange_file.open("orange.txt");
	for (int i = 540; i >480; i--)
	{
		orange_file << entries.push_back(firstname, " ", lastname);
	}

	orange_file.close();

	ofstream blue_file;
	blue_file.open("blue.txt");
	for (int i = 600; i >540; i--)
	{
		blue_file << entries.push_back(firstname, " ", lastname);
	}

	blue_file.close();

	ofstream lilac_file;
	lilac_file.open("lilac.txt");
	for (int i = 720; i >600; i--)
	{
		lilac_file << entries.push_back(firstname, " ", lastname);
	}

	lilac_file.close();

	ofstream red_file;
	red_file.open("red.txt");
	for (int i = 1200; i >720; i--)
	{
		red_file << entries.push_back(firstname, " ", lastname);
	}

	red_file.close();

	return 0;
	
	
}

