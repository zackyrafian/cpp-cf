#include <iostream>
#include <string>
#include <vector>

std::string fixExpression(const std::string& s) {
    int first = s[0] - '0';
    int second = s[2] - '0';
    char symbol = s[1];

    if ((symbol == '<' && first < second) ||
        (symbol == '>' && first > second) ||
        (symbol == '=' && first == second)) {
        return s;
    }

    if (symbol == '<') {
        return std::to_string(first) + '<' + std::to_string(first+1);
    }
    
    if (symbol == '>') {
        return std::to_string(first) + '>' + std::to_string(first-1);
    }

    if (symbol == '=') {
        return std::to_string(first) + '=' + std::to_string(first);
    }
    return s;
}

int main() {
    int t;
    std::cin >> t;
    
    std::vector<std::string> results;
    for (int i = 0; i < t; ++i) {
        std::string s;
        std::cin >> s;
        results.push_back(fixExpression(s));
    }
    
    for (const auto& result : results) {
        std::cout << result << std::endl;
    }
    
    return 0;
}