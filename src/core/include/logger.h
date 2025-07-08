#ifndef LOGGING_HPP
#define LOGGING_HPP

#include <iostream>
#include <string>
using namespace std;



namespace Logger
{
    #define RESET   "\033[0m"
    #define BLACKK   "\033[30m"      /* Black */
    #define REDD    "\033[31m"      /* Red */
    #define GREENN   "\033[32m"      /* Green */
    #define YELLOWW  "\033[33m"      /* Yellow */
    #define BLUEE    "\033[34m"      /* Blue */
    #define MAGENTAA "\033[35m"      /* Magenta */
    #define CYANN    "\033[36m"      /* Cyan */
    #define WHITEE   "\033[37m"      /* White */
    #define ORANGEE       "\033[38;5;208m"      /* Orange */
    #define PURPLEE       "\033[38;5;129m"      /* Purple */
    #define GRAYY   "\033[90m"      /* Gray (Bright Black) */

    #define BOLDBLACKK   "\033[1m\033[30m"      /* Bold Black */
    #define BOLDREDD     "\033[1m\033[31m"      /* Bold Red */
    #define BOLDGREENN   "\033[1m\033[32m"      /* Bold Green */
    #define BOLDYELLOWW  "\033[1m\033[33m"      /* Bold Yellow */
    #define BOLDBLUEE    "\033[1m\033[34m"      /* Bold Blue */
    #define BOLDMAGENTAA "\033[1m\033[35m"      /* Bold Magenta */
    #define BOLDCYANN    "\033[1m\033[36m"      /* Bold Cyan */
    #define BOLDWHITEE   "\033[1m\033[37m"      /* Bold White */
    #define BOLDORANGEE   "\033[1m\033[38;5;208m" /* Bold Orange */
    #define BOLDPURPLEE   "\033[1m\033[38;5;129m" /* Bold Purple */
    #define BOLDGRAYY   "\033[1m\033[90m"  /* Bold Gray */

    #define BG_BLACK     "\033[40m"      /* Black Background */
    #define BG_RED       "\033[41m"      /* Red Background */
    #define BG_GREEN     "\033[42m"      /* Green Background */
    #define BG_YELLOW    "\033[43m"      /* Yellow Background */
    #define BG_BLUE      "\033[44m"      /* Blue Background */
    #define BG_MAGENTA   "\033[45m"      /* Magenta Background */
    #define BG_CYAN      "\033[46m"      /* Cyan Background */
    #define BG_WHITE     "\033[47m"      /* White Background */
    #define BG_ORANGEE    "\033[48;5;208m"      /* Orange Background */
    #define BG_PURPLEE    "\033[48;5;129m"      /* Purple Background */
    #define BG_GRAYY    "\033[100m"  /* Gray Background */
    
    /* Bold Background Colors */
    #define BGB_BLACK    "\033[1m\033[40m"  /* Bold Black Background */
    #define BGB_RED      "\033[1m\033[41m"  /* Bold Red Background */
    #define BGB_GREEN    "\033[1m\033[42m"  /* Bold Green Background */
    #define BGB_YELLOW   "\033[1m\033[43m"  /* Bold Yellow Background */
    #define BGB_BLUE     "\033[1m\033[44m"  /* Bold Blue Background */
    #define BGB_MAGENTA  "\033[1m\033[45m"  /* Bold Magenta Background */
    #define BGB_CYAN     "\033[1m\033[46m"  /* Bold Cyan Background */
    #define BGB_WHITE    "\033[1m\033[47m"  /* Bold White Background */
    #define BGB_ORANGEE   "\033[1m\033[48;5;208m" /* Bold Orange Background */
    #define BGB_PURPLEE   "\033[1m\033[48;5;129m" /* Bold Purple Background */
    #define BGB_GRAYY   "\033[1m\033[100m" /* Bold Gray Background */

    void success(const std::string& msg, bool endl = true);
    void info(const std::string& msg, bool endl = true);
    void critical(const std::string& msg, bool endl = true);
    void fatal(const std::string& msg, bool endl = true);
    void trace(const std::string& msg, bool endl = true);
    void warning(const std::string& msg, bool endl = true);
    void debug(const std::string& msg, bool endl = true);
    void line(int lenght = 40, char c = '-', char borders = '+');
    void title(const std::string& msg, int lenght = 40, char c = '-', char borders = '+');
    void spacer(int lines = 1);

    std::string successS(const std::string& msg, bool endl = true);
    std::string infoS(const std::string& msg, bool endl = true);
    std::string criticalS(const std::string& msg, bool endl = true);
    std::string fatalS(const std::string& msg, bool endl = true);
    std::string traceS(const std::string& msg, bool endl = true);
    std::string warningS(const std::string& msg, bool endl = true);
    std::string debugS(const std::string& msg, bool endl = true);
};

#endif