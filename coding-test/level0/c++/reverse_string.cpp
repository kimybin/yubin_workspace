#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, int s, int e) {    
    reverse(my_string.begin() + s, my_string.begin() + e + 1);
    //reverse 함수 정의: reverse(start, end) 
    //start는 뒤집기를 시작할 포인터 및 반복자, end는 포함되지 않는(end는 범위의 마지막 다음 위치임) 반복자
    //end는 포함되지 않고, 나는 끝까지 뒤집고 싶었기 때문에 +1를 해준 것
    return my_string;
}

int main()
{
    string my_string;
    int s, e;

    cout << "Enter string: ";
    cin >> my_string;

    cout << "Enter s and e(within the length of string): ";
    cin >> s >> e;

    string result = solution(my_string, s, e);
    cout << "The result is: " << result << endl;

    return 0;
}
