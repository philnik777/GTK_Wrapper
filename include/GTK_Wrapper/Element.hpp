#pragma once

#include <memory>

namespace gtk
{
struct Point
{
	uint32_t x;
	uint32_t y;
};

struct Rect
{
	long a;
	long b;
	long c;
	long d;
};

using Area = Point;

class Element
{
  public:
	virtual ~Element() = default;
	void setVisible(bool);
	bool isVisible();
	void resizable(bool);
	void setSize(Area);
	void setHeight(uint32_t);
	void setPosition(Point);
	void focus();
	Rect getClientRect();

	void setPrevWindow(std::shared_ptr<Element>);
};
}
