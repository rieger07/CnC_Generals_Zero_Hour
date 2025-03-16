set(GLFW_BUILD_DOCS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_TESTS OFF CACHE BOOL "" FORCE)
set(GLFW_BUILD_EXAMPLES OFF CACHE BOOL "" FORCE)
set(OpenGL_GL_PREFERENCE GLVND)

add_subdirectory(glad)
add_subdirectory(glfw)
find_package(OpenGL REQUIRED)



add_library(imgui STATIC
    imgui/imgui.cpp
    imgui/imgui.h
    imgui/imstb_rectpack.h
    imgui/imstb_textedit.h
    imgui/imstb_truetype.h
    imgui/imgui_demo.cpp
    imgui/imgui_draw.cpp
    imgui/imgui_internal.h
    imgui/imgui_tables.cpp
    imgui/imgui_widgets.cpp
)

target_include_directories(imgui PUBLIC imgui)

add_library(imgui_impl_glfw STATIC imgui/backends/imgui_impl_glfw.cpp imgui/backends/imgui_impl_glfw.h)
target_include_directories(imgui_impl_glfw PUBLIC imgui/backends)

add_library(imgui_impl_opengl3 STATIC imgui/backends/imgui_impl_opengl3.cpp imgui/backends/imgui_impl_opengl3.h)
target_include_directories(imgui_impl_opengl3 PUBLIC imgui/backends)

target_link_libraries(imgui_impl_glfw PRIVATE glfw imgui)
target_link_libraries(imgui_impl_opengl3 PRIVATE OpenGL::GL imgui)

add_executable(example_glfw_opengl3 imgui/examples/example_glfw_opengl3/main.cpp)
target_link_libraries(example_glfw_opengl3
	PRIVATE imgui imgui_impl_glfw imgui_impl_opengl3 glfw
)