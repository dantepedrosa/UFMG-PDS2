#include "expression.hpp"
#include <string>

Expression::Expression(std::string postfix){
    this->postfixExpression = postfix;
}

float Expression::eval(){

    std::string::size_type sz;   // alias of size_t
    queue.push_back(std::stof(postfixExpression,&sz));

    std::string str;
    for(auto x : postfixExpression.substr(sz)){
        if(x == ' '){
            if(str == "+"){

                int num2 = queue.back();
                queue.pop_back();
                int num1 = queue.back();
                queue.pop_back();
                queue.push_back(num1 + num2);

            } else if(str == "-"){

                int num2 = queue.back();
                queue.pop_back();
                int num1 = queue.back();
                queue.pop_back();
                queue.push_back(num1 - num2);

            } else if(str == "*"){

                int num2 = queue.back();
                queue.pop_back();
                int num1 = queue.back();
                queue.pop_back();
                queue.push_back(num1 * num2);

            } else if(str == "/"){

                int num2 = queue.back();
                queue.pop_back();
                int num1 = queue.back();
                queue.pop_back();
                queue.push_back(num1 / num2);

            } else
                queue.push_back(stof(str));
        }
    }
    return queue.front();
}
