#include <iostream>
#include <string>
#include <vector>

using namespace std;

bool str_to_bool(const string& str) {
    if(str == "true")
        return true;
    else if(str == "false")
        return false;
    else
        return false;
}

bool solution(bool x1, bool x2, bool x3, bool x4) {
    bool answer = true;
    answer = (x1 || x2) && (x3 || x4);
    return answer;
}

int main()
{
    string x1, x2, x3, x4;

    cout << "Enter x1, x2, x3 and x4 : ";
    cin >> x1 >> x2 >> x3 >> x4;

    bool b_x1 = str_to_bool(x1);
    bool b_x2 = str_to_bool(x2);
    bool b_x3 = str_to_bool(x3);
    bool b_x4 = str_to_bool(x4);

    bool result = solution(b_x1, b_x2, b_x3, b_x4);

    cout << "The result is: " << (result ? "true" : "false") << endl;

    return 0;
}
