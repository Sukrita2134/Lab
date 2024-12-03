#include <iostream>
using namespace std;

char before(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        if (ch == 'A') {
            return 'Z';
        }
        return ch - 1;
    }
    return '0';
}

int main(){
	//Test Case
	cout << before('A') << "\n";
	cout << before('B') << "\n";
	cout << before('P') << "\n";
	cout << before('T') << "\n";
	cout << before('Z') << "\n";
	cout << before('a') << "\n";
	cout << before('0') << "\n";
	cout << before('c') << "\n";
	return 0;
}
