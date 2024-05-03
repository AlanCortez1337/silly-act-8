#include "crow.h"
#include "crow/middlewares/cors.h"
#include <string>
#include <stack>

int toInt(char input) {
    return int(input);
}

char toChar(int input) {
    return char(input);
}

int postfix (const std::string& input) {
    std::stack<char> Operands;
  //step1: loop through string, check if current index is an int

    for (int i = 0; i < input.size()-1; i++) {
    //if index is any operator
    if (input[i] == '*') { 
        char temp_operand{Operands.top()}; 
        Operands.pop();
        char temp_operand2{Operands.top()}; 
        Operands.pop();
        Operands.push(toChar(toInt(temp_operand2) * toInt(temp_operand)));
    } else if (input[i] == '+') {
        char temp_operand{Operands.top()}; 
        Operands.pop();
        char temp_operand2{Operands.top()}; 
        Operands.pop();
        Operands.push(toChar(toInt(temp_operand2) + toInt(temp_operand)));
    }  else if (  input[i] == '-' ) {
        char temp_operand{Operands.top()}; 
        Operands.pop();
        char temp_operand2{Operands.top()}; 
        Operands.pop();
        Operands.push(toChar(toInt(temp_operand2) - toInt(temp_operand)));
    } else if (  input[i] == '/') {
        char temp_operand{Operands.top()}; 
        Operands.pop();
        char temp_operand2{Operands.top()}; 
        Operands.pop();
        Operands.push(toChar(toInt(temp_operand2) / toInt(temp_operand)));
    }
    Operands.push(toInt(input[i]));
    }
    
    return toInt(Operands.top());
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


    


    CROW_ROUTE(app, "/api/calcpre")
    ([]{
        crow::json::wvalue response;
        response["message"] = toChar(postfix("2536+**5/2-"));
        return response;
    });

    CROW_ROUTE(app, "/api/calcpost")
    ([]{
        crow::json::wvalue response;
        response["message"] = toChar(postfix("-/*2*5+3652"));
        return response;
    });

    app.port(8080).run();
    return 0;
}