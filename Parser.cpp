/*
 * Parser.cpp
 *
 *  Created on: Jan 8, 2016
 *      Author: michelbergeron
 */

#include "Parser.h"

Parser::Parser() {
	_stack = new Stack();
}

Parser::~Parser() {

}

bool Parser::parse(std::string equation){
	for (int i = 0; i < equation.size() ; i++){
			if(equation[i] == '(' || equation[i] == '['){
				_stack -> push(new Element(equation[i]+""));
			}else if(equation[i] == ')' || equation[i] == ']'){
				Element* element = _stack -> pop();
				if(element == NULL){
					return false;
				}
				char symbol = element -> getName()[0];
				if(symbol == '(' && equation[i] != ')'){
					return false;
				}else if(symbol == '[' && equation[i] != ']'){
					return false;
				}
			}
		}
		if(_stack -> pop() != NULL){
			return false;
		}
		return true;
}

