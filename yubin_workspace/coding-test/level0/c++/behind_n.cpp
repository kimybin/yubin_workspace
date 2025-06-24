#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int n) {
    string answer = "";
    
    answer = my_string.substr(my_string.size()-n, n);
        
    return answer;
}

int main()
{
    string my_string;
    int n;

    cout << "Enter string: ";
    cin >> my_string;

    cout << "Enter n: ";
    cin >> n;

    string result = solution(my_string, n);
    
    cout << "The result is: " << result << endl;

    return 0;
}
