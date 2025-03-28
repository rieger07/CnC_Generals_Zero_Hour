#pragma once
#include "window.h"

class Application
{
public:
    Application();
    ~Application()
    {
        delete m_window;
    };
    void render();

private:
    Window *m_window;
};