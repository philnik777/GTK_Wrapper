#pragma once

#include "Element.hpp"

#include <memory>

namespace gtk
{
class Element;
class Edit : public Element
{
  public:
	static auto
		create(std::shared_ptr<Element> parent, const std::string& text, Rect)
	{
		return std::make_shared<Edit>();
	}

	std::string getText();
};
}
