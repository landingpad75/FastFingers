#pragma once

class Application {
public:
    Application();

    Application& setVSync(bool enabled);
    Application& setFullscreen(bool enabled);
    Application& setName(const char* appName);
    Application& setResizable(bool enabled);
    Application& setDimensions(int width, int height);
    void run();
    bool running() const;

    void blit();
    void update();

    ~Application();

private:
    void* m_window;

    bool m_vSync;
    bool m_fullscreen;
    bool m_resizable;
    int m_width, m_height;
    const char* m_name;
};