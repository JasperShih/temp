#include <iostream>
#include <vector>
using namespace std;

vector<int> get_distinct_chars(char *str){
    // 65~90 : A~Z, 97~122 : a~z
    // 宣告123元素大小的陣列, 並初始化所有元素為0
    vector<int> table(123, false);
    for (; *str != '\0'; ++str) {
        table[*str] = true;
    }
    return table;
}

int main (int argc, char **argv) {
    char str[] = "HelloWorld";
    vector<int> chars = get_distinct_chars(str);
    for (int ascii_chars = 65; ascii_chars <= 90; ++ascii_chars) {
        if (chars[ascii_chars]){
            cout <<(char) ascii_chars <<" ";
        }
    }
    for (int ascii_chars = 97; ascii_chars <= 122; ++ascii_chars) {
        if (chars[ascii_chars]){
            cout <<(char) ascii_chars <<" ";
        }
    }
    //> H W d e l o r
}
