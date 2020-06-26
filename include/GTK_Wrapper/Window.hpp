#pragma once
#include <string>

struct _GtkApplication;
namespace gtk
{
using Application = _GtkApplication*;

class Window
{
  public:
	Window(const std::string& name);

	void run();

  private:
	Application handle;
	std::string name;
	friend void activate(Application, void*);
};
}
