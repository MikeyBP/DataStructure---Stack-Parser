/*
 * Parser.h
 *
 *  Created on: Jan 8, 2016
 *      Author: michelbergeron
 */

#ifndef PARSER_H_
#define PARSER_H_
#include "Stack.h"
#include <string>

class Parser {
private:
	Stack* _stack;
public:
	Parser();
	virtual ~Parser();
	bool parse(std::string equation);
};

#endif /* PARSER_H_ */
