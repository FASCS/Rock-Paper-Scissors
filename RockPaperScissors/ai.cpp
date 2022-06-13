#include <iostream>
#include <random>
#include <cmath>

using namespace std;


int random() {

	random_device rd;
	mt19937 mt(rd());
	uniform_real_distribution<double> dist(1.0, 3.0);
	int c = round(dist(mt));
	return c;

}

string ai(bool status)
{
	if (status == false) { return ""; }
	int solve = random();
	cout << "" << endl;
	int stat[4] = { 0, 1, 2, 3 };
	string statconv[4] = { "", "Rock", "Paper", "Scissors" };
	if (solve == stat[1]) {
		string answer = statconv[1];
		return answer;
	}
	else if (solve == stat[2]) {
		string answer = statconv[2];
		return answer;
	}
	else if (solve == stat[3]) {
		string answer = statconv[3];
		return answer;
	}
	else {
		string answer = "";
		return answer;
	}
}