// src/main.cpp - Entry point of the program
#include <iostream>
#include "http_client.h"

int main() {
    std::string url;
    std::cout << "Enter website URL: ";
    std::cin >> url;

    std::string html_content = fetchHTML(url);
    if (!html_content.empty()) {
        std::cout << "Fetched HTML Content:\n" << html_content.substr(0, 500) << "...\n";
    } else {
        std::cerr << "Failed to fetch webpage." << std::endl;
    }
    return 0;
}
