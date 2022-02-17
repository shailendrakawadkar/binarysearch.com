bool solve(int num) {
    string str1 = to_string(num), str2 = to_string(num);
    reverse(str1.begin(), str1.end());
    if(str1 == str2) return true;
    return false;
}
