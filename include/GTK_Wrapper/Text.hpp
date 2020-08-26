#pragma once

#include "Element.hpp"

#include <memory>

namespace gtk
{
enum class BindPoint
{
	TOP_LEFT,
	TOP_RIGHT,
	BOTTOM_LEFT,
	BOTTOM_RIGHT,
};

class Text : public Element
{
  public:
	static auto create(std::shared_ptr<Element> parent,
					   const std::string& text,
					   Point pos,
					   BindPoint)
	{
		return std::make_shared<Text>();
	}

  private:
};
}