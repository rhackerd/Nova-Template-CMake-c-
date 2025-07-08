#include "logger.h"

using namespace Logger;



void Logger::success(const std::string& msg, bool endl) {
    std::cout << BGB_GREEN << " SUCS " << RESET << " " << msg;
    if (endl) std::cout << std::endl;
    else std::cout << '\n';
}

std::string Logger::successS(const std::string& msg, bool endl) {
    return std::string(BGB_GREEN) + " SUCS " + RESET + " " + msg + (endl ? "\n" : "");
}

void Logger::info(const std::string& msg, bool endl) {
    std::cout << BGB_BLUE << " INFO " << RESET << " " << msg << RESET;
    if (endl) std::cout << std::endl;
    else std::cout << '\n';
}

std::string Logger::infoS(const std::string& msg, bool endl) {
    return std::string(BGB_BLUE) + " INFO " + std::string(RESET) + " " + msg + (endl ? "\n" : "") + std::string(RESET);
}

void Logger::critical(const std::string& msg, bool endl) {
    std::cout << BGB_RED << " CRIT " << RESET << " " << msg;
    if (endl) std::cout << std::endl;
    else std::cout << '\n';
}

std::string Logger::criticalS(const std::string& msg, bool endl) {
    return std::string(BGB_RED) + " CRIT " + RESET + " " + msg + (endl ? "\n" : "");
}

void Logger::fatal(const std::string& msg, bool endl) {
    std::cout << BGB_ORANGEE << " FATL " << RESET << " " << msg;
    if (endl) std::cout << std::endl;
    else std::cout << '\n';
}

std::string Logger::fatalS(const std::string& msg, bool endl) {
    return std::string(BGB_ORANGEE) + " FATL " + RESET + " " + msg + (endl ? "\n" : "");
}

void Logger::trace(const std::string& msg, bool endl) {
    std::cout << BGB_PURPLEE << " TRAC " << RESET  << " " << msg;
    if (endl) std::cout << std::endl;
    else std::cout << '\n';
}

std::string Logger::traceS(const std::string& msg, bool endl) {
    return std::string(BGB_PURPLEE) + " TRAC " + RESET + " " + msg + (endl ? "\n" : "");
}

void Logger::warning(const std::string& msg, bool endl) {
    std::cout << BGB_YELLOW << " WARN " << RESET << " " << msg;
    if (endl) std::cout << std::endl;
    else std::cout << '\n';
}

std::string Logger::warningS(const std::string& msg, bool endl) {
    return std::string(BGB_YELLOW) + " WARN " + RESET + " " + msg + (endl ? "\n" : "");
}

void Logger::debug(const std::string& msg, bool endl) {
    std::cout << BGB_MAGENTA << " DEBG " << RESET << " " << msg;
    if (endl) std::cout << std::endl;
    else std::cout << '\n';
}

std::string Logger::debugS(const std::string& msg, bool endl) {
    return std::string(BGB_MAGENTA) + " DEBG " + RESET + " " + msg + (endl ? "\n" : "");
}

void Logger::line(int lenght, char c, char borders) {
    std::cout << GRAYY;
    std::cout << borders;
    for (int i = 0; i < lenght; i++) {
        std::cout << c;
    }
    std::cout << borders << std::endl;
    std::cout << RESET;
}

void Logger::title(const std::string& msg, int lenght, char c, char borders) {
    int msgLenght = msg.length();
    int left = (lenght - msgLenght) / 2;
    int right = lenght - left - msgLenght;
    std::cout << GRAYY;

    std::cout << borders;
    for (int i = 0; i < left; i++) {
        std::cout << c;
    }
    std::cout << " " << msg << " ";
    for (int i = 0; i < right; i++) {
        std::cout << c;
    }
    std::cout << borders << std::endl;
    std::cout << RESET;
}

void Logger::spacer(int lines) {
    for (int i = 0; i < lines; i++) {
        std::cout << std::endl;
    }
}