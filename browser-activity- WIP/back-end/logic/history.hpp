#ifndef HISTORY_HPP
#define HISTORY_HPP
#include <stack>

class History {
    public:

        History() : previous_({}), current_({}) {}
        History(const std::stack<std::string>& previous const std::stack<std::string>& current) : previous_(previous), current_(current) {}

        


    private:
        std::stack<std::string> previous_;
        std::stack<std::string> current_;
};

#endif // HISTORY_HPP