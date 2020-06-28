#pragma once
#include <memory>
#include <string>

struct _GtkApplication;
namespace gtk
{
using Application = _GtkApplication*;

class Window
{
  public:
	Window(const std::string& name);
	static auto create(const std::string& name)
	{
		return std::make_shared<Window>(name);
	}

	void run();

  private:
	Application handle;
	std::string name;
	friend void activate(Application, void*);
};
}
