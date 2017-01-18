#include <iostream>
#include <set>

using namespace std;

set<char> get_distinct_chars(char *str){
    set<char> table;
    for (; *str != '\0' ; ++str) {
        table.insert(*str);
    }
    return table;
}

int main (int argc, char **argv) {
    char str[] = "HelloWorld";
    set<char> chars = get_distinct_chars(str);
    for (auto iter = chars.begin(); iter != chars.end() ; ++iter) {
        cout <<*iter <<" ";
    }
    //> H W d e l o r
}
