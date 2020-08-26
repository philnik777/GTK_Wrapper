#include "GTK_Wrapper/Element.hpp"

#include <iostream>

namespace gtk
{
// TODO: implement
Rect Element::getClientRect()
{
	std::clog << "[Error] method not implemented" << std::endl;
	return Rect {};
}

// TODO: implement
void Element::setVisible(bool)
{
	std::clog << "[Error] method not implemented" << std::endl;
}

// TODO: implement
bool Element::isVisible()
{
	std::clog << "[Error] method not implemented" << std::endl;
	return true;
}

// TODO: implement
void Element::resizable(bool)
{
	std::clog << "[Error] method not implemented" << std::endl;
}

// TODO: implement
void Element::setSize(Area)
{
	std::clog << "[Error] method not implemented" << std::endl;
}

// TODO: implement
void Element::setPrevWindow(std::shared_ptr<Element>)
{
	std::clog << "[Error] method not implemented" << std::endl;
}

// TODO: implement
void Element::setHeight(uint32_t)
{
	std::clog << "[Error] method not implemented" << std::endl;
}

// TODO: implement
void Element::setPosition(Point)
{
	std::clog << "[Error] method not implemented" << std::endl;
}

// TODO: implement
void Element::focus()
{
	std::clog << "[Error] method not implemented" << std::endl;
}
}
