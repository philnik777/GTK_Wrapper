#pragma once

#include "Element.hpp"

#include <functional>

namespace gtk
{
class Menu
{
  public:
	static auto create()
	{
		return std::make_shared<Menu>();
	}

	void addSubMenu(std::string, std::function<void()>);
};
}