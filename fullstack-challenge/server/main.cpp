#include "crow.h"
#include <string>

int convertToInt(const std::string& input) {
    return std::stoi(input);
}

std::string convertToString(int input) {
    return std::to_string(input);
}

int postfix (const std::string& input) {
    // ⭐TODO: calculate the postfix of the input (EX: */+5292) and return an integer of the result of it
    // 💡Hint: feel free to use `convertToInt()` to convert the string character into an integer when you need it
}

int prefix (const std::string& input) {
    // ⭐TODO: calculate the postfix of the input (EX: 9241++-) and return an integer of the result of it
    // 💡Hint: feel free to use `convertToInt()` to convert the string character into an integer when you need it
}

int main()
{
    crow::SimpleApp app;

    CROW_ROUTE(app, "/api/calcpre")
    ([]{
        crow::json::wvalue response;
        response["message"] = convertToString(postfix('*/+5292'));
        return response;
    });

    CROW_ROUTE(app, "/api/calcpost")
    ([]{
        crow::json::wvalue response;
        response["message"] = convertToString(postfix('9241++-'));
        return response;
    });

    app.port(8080).run();
    return 0;
}