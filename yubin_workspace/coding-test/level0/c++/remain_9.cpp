#include <iostream>
#include <string>
#include <vector>

using namespace std;

int solution(string number) {
    int answer = 0;
    
    for(string :: iterator ch = number.begin(); ch != number.end(); ++ch)
        answer += (*ch-'0');
    answer %= 9;
    
    return answer;
}

int main()
{
    string number;

    cout << "Enter string: ";
    cin >> number;

    int result = solution(number);

    cout << "The result is: " << result << endl;
    return 0;
}
