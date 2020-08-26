#pragma once
#include "Element.hpp"

#include <functional>
#include <memory>
#include <string>
struct _GtkApplication;
namespace gtk
{
using Application = _GtkApplication*;

class MenuBar;
class Window : public Element
{
  public:
	Window(const std::string& name);
	static auto create(const std::string& name)
	{
		return std::make_shared<Window>(name);
	}

	void loop();
	void setCloseCallback(std::function<void()> closeCallback);
	void setMenuBar(std::shared_ptr<MenuBar>);
	void close();

  private:
	Application handle;
	std::string name;
	friend void activate(Application, void*);
};
}
