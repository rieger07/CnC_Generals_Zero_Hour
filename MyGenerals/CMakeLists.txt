cmake_minimum_required(VERSION 3.10.0)
project(Generals VERSION 0.1.0 LANGUAGES C CXX)

add_library(compiler_flags INTERFACE)
target_compile_features(compiler_flags INTERFACE cxx_std_23)


add_subdirectory(src)

add_executable(Generals.exe src/main.cpp)
target_link_libraries(Generals.exe PUBLIC compiler_flags GLAD glfw imgui imgui_impl_glfw imgui_impl_opengl3)


# include(CTest)
# enable_testing()

# set(CPACK_PROJECT_NAME ${PROJECT_NAME})
# set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
# include(CPack)
