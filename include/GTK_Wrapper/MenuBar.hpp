#pragma once

#include <memory>

namespace gtk
{
class Menu;
class MenuBar
{
  public:
	static auto create()
	{
		return std::make_shared<MenuBar>();
	}

	void addMenu(const std::string&, std::shared_ptr<Menu>);
};
}