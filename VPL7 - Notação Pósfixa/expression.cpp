#include "expression.hpp"
#include <string>
#include <iostream>
using namespace std;

Expression::Expression(string postfix){
    this->postfixExpression = postfix;
}

float Expression::eval(){

    string::size_type sz;   // alias of size_t
    queue.push_back(stof(postfixExpression,&sz));
    cout << queue.back() << endl;
    string rest = postfixExpression.substr(sz);
    rest.erase(0,1);

    for(auto x : rest){
        std::string it = "";
        it.push_back(x); 
        if(it == " ")
            continue;
        if(it == "+"){
            float num2 = queue.back();
            queue.pop_back();
            float num1 = queue.back();
            queue.pop_back();
            queue.push_back(num1 + num2);

        } else if(it == "-"){

            float num2 = queue.back();
            queue.pop_back();
            float num1 = queue.back();
            queue.pop_back();
            queue.push_back(num1 - num2);

        } else if(it == "*"){

            float num2 = queue.back();
            queue.pop_back();
            float num1 = queue.back();
            queue.pop_back();
            queue.push_back(num1 * num2);

        } else if(it == "/"){

            float num2 = queue.back();
            queue.pop_back();
            float num1 = queue.back();
            queue.pop_back();
            queue.push_back(num1 / num2);

        } else
            queue.push_back(stof(it));
    }
    return queue.front();
}
