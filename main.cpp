/*
 * main.cpp
 *
 *  Created on: Jan 6, 2016
 *      Author: raydelto
 */
#include <iostream>

#include "Stack.h"
#include "Parser.h"
using namespace std;

int main()
{
	Parser *p = new Parser();
	string equation = "[(2+2)]*4";
	if(p->parse(equation)){
		cout << "Valid Expression";
	}else cout << "Invalid Expression";

}
