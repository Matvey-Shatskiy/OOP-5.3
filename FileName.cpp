#include <iostream>
#include <sstream>
using namespace std;

int main() {
    setlocale(LC_ALL, "");
    string str, word, result;
    cout << "������� ������: ";
    getline(cin, str);

    istringstream iss(str);
    while (iss >> word) {
        if (word[0] == 'a' || word[0] == 'A') {
            result += word + " ";
        }
    }

    cout << "���������: " << result << endl;
    return 0;
}
