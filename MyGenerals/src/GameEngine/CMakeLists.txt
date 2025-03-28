add_library(GameEngine STATIC
    application.h
    application.cpp
    common.h
    window.h
    window.cpp
)

target_link_libraries(GameEngine GLAD compiler_flags GLAD glfw imgui imgui_impl_glfw imgui_impl_opengl3)