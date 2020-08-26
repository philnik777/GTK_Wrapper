project(__gtk_src)
set(GTK_SUBPROJECTS ${SUBPROJECTS} __gtk_src PARENT_SCOPE)

add_library(__gtk_src
    Window.cpp
    Element.cpp
    Button.cpp
    Text.cpp
    Edit.cpp
    Menu.cpp
    MenuBar.cpp
    TabControl.cpp
    ListView.cpp
)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../include)
message("Added src/")
