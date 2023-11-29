#include <string>

namespace log_line {
    std::string message(std::string logLine){
        return logLine.substr(logLine.find("]") + 3); //Find the end of the log level and output the message
    }

    std::string log_level(std::string logLine){
        return logLine.substr(1, logLine.find("]") - 1); //Find the log level and return it by looking for the index of ending brace "]"
    }

    std::string reformat(std::string logLine){
        return message(logLine) + " (" + log_level(logLine) + ")"; //Reusing the functions declared above to reformat the message
    }

} // namespace log_line
