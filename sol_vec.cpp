vector<int> get_distinct_chars(char *str){
    // 65~90 : A~Z
    // 97~122 : a~z
    // 宣告123大小的陣列, 並初始化所有元素為0
    vector<int> table(123, false);
    char *new_str = str;
    while (true){
        if(*new_str == '\0'){
            break;
        } else{
            table[*new_str] = true;
            new_str++;
            continue;
        }
    }
    return table;
}

int main (int argc, char **argv) {
    char str[] = "HelloWorld";
    vector<int> chars = get_distinct_chars(str);
    for (int ascii = 65; ascii <= 90; ++ascii) {
        if (chars[ascii]){
            cout <<(char) ascii <<" ";
        }
    }
    for (int ascii = 97; ascii <= 122; ++ascii) {
        if (chars[ascii]){
            cout <<(char) ascii <<" ";
        }
    }
    //> H W d e l o r
}
