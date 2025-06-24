#include <iostream>
#include <string>

using namespace std;

int solution(string my_string, string is_prefix) {
    int answer = 0;

    /*  첫 번째 버전
    for(int i = 0; i < my_string.size(); i++) {
        string str = my_string.substr(0, i);
        // 0부터 시작해 i까지의 글자가 추출됨
        // ex) "", b, ba, ban, bana, banan, banana
        // 한 글자씩 늘려가면 접두사를 검사하는 구조
        // 접두사를 구하는 문제이기 때문에 앞글자부터 저장되어야 함
        if(str == is_prefix) answer = 1;
    }
    */

    /*
    for(int i = 0; i < my_string.size(); i++) {
        string str = my_string.substr(0, is_prefix.size());
        // my_string의 앞에서부터 is_prefix.size()만큼 잘라서 str에 저장
        // ex) is_prefix = "ban" 일 때 str은 항상 "ban"이 나옴
        // 이 로직에선 사실상 for문, i가 필요 없음
        if(str == is_prefix) answer = 1;
    }
    */

    string str = my_string.substr(0, is_prefix.size());
    if(str == is_prefix) answer = 1;

    return answer;
}

int main() {
    string my_string, is_prefix;

    cout << "Enter string and prefix: ";
    cin >> my_string >> is_prefix;

    int result = solution(my_string, is_prefix);
    cout << "The result is: " << result << endl;

    return 0;
}

