#pragma once
#include "common.h"

class Window
{
public:
    Window(int width, int height,
           const char *title);
    ~Window()
    {
        glfwDestroyWindow(m_window);
        glfwTerminate();
    };

    int getWidth();
    int getHeight();
    const char *getTitle();
    GLFWwindow *getWindow();
    const char *getGlslVersion();

    // glfw wrappers
    bool shouldClose();
    void getFrameBufferSize(int *display_w, int *display_h);
    void swapBuffers();
    int getWindowAttribute(int attribute);

private:
    GLFWwindow *m_window;
    int m_width;
    int m_height;
    const char *m_title;
    const char *m_glsl_version;
};