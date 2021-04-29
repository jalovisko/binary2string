#include <iostream>

char strToChar(const char* str) {
    char parsed = 0;
    for (int i = 0; i < 8; i++) {
        if (str[i] == '1') {
            parsed |= 1 << (7 - i);
        }
    }
    return parsed;
}

int main()
{
    std::cout <<
    char binary_string[] = "01001000 01100101 01101100 01101100 01101111 00100000 01110111 01101111 01110010 01101100 01100100 00100001";
    int spaces(1);
    for (int i(0); i < (sizeof(binary_string) / sizeof(binary_string[0])); i++)
    	if(binary_string[i] == ' ')
    		spaces++;
    for (int i(0); i < spaces; i++)
        std::cout << strToChar(binary_string + 9 * i);
}
