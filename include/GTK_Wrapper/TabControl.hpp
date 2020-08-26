#pragma once

#include "Element.hpp"

#include <functional>

namespace gtk
{
class TabControl : public Element
{
  public:
	static auto create(std::shared_ptr<Element> parent, Rect)
	{
		return std::make_shared<TabControl>();
	}

	void addItem(std::string name,
				 std::size_t,
				 std::function<void()>,
				 std::function<void()>);
};
}
