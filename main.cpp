/* 
 * File:   main.cpp
 * Author: bat
 *
 * Created on 17 Сентябрь 2015 г., 15:59
 */

#include <iostream>
#include <fstream>
using namespace std;
int main(int argc, char *argv[]) {
    ifstream stream(argv[1]);
    short n;
	
    stream >> n;
    while (!stream.eof()) {
		if (n < 0 || n > 100) {
			cout << "This program is for humans\n";
		}
		else if (n > 65) {
			cout << "The Golden Years\n";
		}
		else if (n > 22) {
			cout << "Working for the man\n";
		}
		else if (n > 18) {
			cout << "College\n";
		}
		else if (n > 14) {
			cout << "High school\n";
		}
		else if (n > 11) {
			cout << "Middle school\n";
		}
		else if (n > 4) {
			cout << "Elementary school\n";
		}
		else if (n > 2) {
			cout << "Preschool Maniac\n";
		}
		else {
			cout << "Still in Mama's arms\n";
		}
        stream >> n;
    }
    return 0;
}