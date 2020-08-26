#include "GTK_Wrapper/Window.hpp"

#include <gtk/gtk.h>
#include <iostream>

namespace gtk
{
void activate(Application app, gpointer userData)
{
	auto data = static_cast<Window*>(userData);
	GtkWidget* window = gtk_application_window_new(app);
	gtk_window_set_title(GTK_WINDOW(window), data->name.c_str());
	gtk_window_set_default_size(GTK_WINDOW(window), 200, 200);
	gtk_widget_show_all(window);
}

Window::Window(const std::string& name)
{
	handle = gtk_application_new(nullptr, G_APPLICATION_FLAGS_NONE);
	g_signal_connect(handle, "activate", G_CALLBACK(activate), this);
}
void Window::loop()
{
	g_application_run(G_APPLICATION(handle), 0, 0);
	g_object_unref(handle);
}

// TODO: implement
void Window::setMenuBar(std::shared_ptr<MenuBar>)
{
	std::clog << "[Error] method not implemented" << std::endl;
}

// TODO: implement
void Window::close()
{
	std::clog << "[Error] method not implemented" << std::endl;
}

// TODO: implement
void Window::setCloseCallback(std::function<void()>)
{
	std::clog << "[Error] method not implemented" << std::endl;
}
}
