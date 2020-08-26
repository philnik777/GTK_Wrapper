#pragma once

#include "Element.hpp"

#include <functional>

namespace gtk
{
class Button : public Element
{
  public:
	static auto create(std::shared_ptr<Element> parent, std::string, Point)
	{
		return std::make_shared<Button>();
	}

	void setOnClick(std::function<void()>);
};
}
