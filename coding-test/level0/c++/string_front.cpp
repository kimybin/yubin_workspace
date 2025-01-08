#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string sub = my_string.substr(0, n);
    
    return sub;
}

int main()
{
    string my_string;
    int n;

    cout << "Enter string: ";
    cin >> my_string;

    cout << "Enter n(within the length of string): ";
    cin >> n;

    string result = solution(my_string, n);
    cout << "The result is " << result << endl;

    return 0;
}
