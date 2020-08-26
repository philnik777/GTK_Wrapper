#pragma once

#include "Element.hpp"

namespace gtk
{
class ListView : public Element
{
  public:
	static auto create(std::shared_ptr<Element>, Rect)
	{
		return std::make_shared<ListView>();
	}

	void addColumn(const std::string&, std::size_t, uint32_t);
	void addItem(std::string, std::size_t, uint32_t);
	void removeItem(std::string);
	void removeAllItems();
};
}
