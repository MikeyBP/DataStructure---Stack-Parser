/*
 * Element.cpp
 *
 *  Created on: Jan 6, 2016
 *      Author: raydelto
 */

#include "Element.h"

Element::Element(std::string name): _name(name), _next(NULL)
{
}

std::string Element::getName()
{
    return _name;
}

Element::~Element() {
	// TODO Auto-generated destructor stub
}
