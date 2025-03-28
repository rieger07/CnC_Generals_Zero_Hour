#include "window.h"

#include <stdlib.h>
#include <stdio.h>

Window::Window(int width, int height,
               const char *title) : m_width(width), m_height(height), m_title(title)
{
    m_glsl_version = "#version 130";
    glfwWindowHint(GLFW_CONTEXT_VERSION_MAJOR, 3);
    glfwWindowHint(GLFW_CONTEXT_VERSION_MINOR, 0);
    m_window = glfwCreateWindow(m_width, m_height, m_title, nullptr, nullptr);

    if (!m_window)
    {
        glfwTerminate();
        exit(EXIT_FAILURE);
    }

    glfwMakeContextCurrent(m_window);
    gladLoadGL();
    glfwSwapInterval(1); // Enable vsync
}

int Window::getWidth()
{
    return m_width;
}

int Window::getHeight()
{
    return m_height;
}

const char *Window::getTitle()
{
    return m_title;
}

GLFWwindow *Window::getWindow()
{
    return m_window;
}

const char *Window::getGlslVersion()
{
    return m_glsl_version;
}

// glfw wrappers
bool Window::shouldClose()
{
    return glfwWindowShouldClose(m_window);
}

void Window::getFrameBufferSize(int *display_w, int *display_h)
{
    glfwGetFramebufferSize(m_window, display_h, display_w);
}

void Window::swapBuffers()
{
    glfwSwapBuffers(m_window);
}

int Window::getWindowAttribute(int attribute)
{
    return glfwGetWindowAttrib(m_window, attribute);
}