set<char> get_distinct_chars(char *str){
    char *new_str = str;
    set<char> table;
    while (true){
        if (*new_str == '\0'){
            break;
        } else{
            table.insert(*new_str);
            new_str++;
            continue;
        }
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
