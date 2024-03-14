#include "crow.h"
#include "crow/middlewares/cors.h"
#include <string>
#include "/workspaces/silly-act-8/queue.hpp"

int convertToInt(const std::string& input) {
    return std::stoi(input);
}

std::string convertToString(int input) {
    return std::to_string(input);
}

int postfix (const std::string& input) {
    // ⭐TODO: calculate the postfix of the input (EX: */+5292) and return an integer of the result of it
    // 💡Hint: feel free to use `convertToInt()` to convert the string character into an integer when you need it
    // int iteration_tracker = input.size();
    // Stack number_stack{};
    // Stack operation_stack[];
    // for (int i = 0; i < iteration_tracker; ++i) {
    //     if (input[i] != "+" || "*") {
    //         number_stack.push(input[i]);
    //     else {
    //         // push operations into stack
    //     }
    //     }
    //     /* pop first two numbers out of stack and pop out operation from operation stack, and perform the operation (bottom element | top element)
    //     */
    // }
    return -1;
}

int prefix (const std::string& input) {
    // ⭐TODO: calculate the postfix of the input (EX: 9241++-) and return an integer of the result of it
    // 💡Hint: feel free to use `convertToInt()` to convert the string character into an integer when you need it
    return -1;
}

int main()
{
    crow::App<crow::CORSHandler> app;
    auto& cors = app.get_middleware<crow::CORSHandler>();
    cors.prefix("/api").headers("Content-Type", "X-Requested-With").origin("*");

    Queue playlist;

    


    CROW_ROUTE(app, "/api/calcpre")
    ([]{
        crow::json::wvalue response;
        response["message"] = convertToString(postfix("2536+**5/2-"));
        return response;
    });

    CROW_ROUTE(app, "/api/calcpost")
    ([]{
        crow::json::wvalue response;
        response["message"] = convertToString(postfix("-/*2*5+3652"));
        return response;
    });

    app.port(8080).run();
    return 0;
}