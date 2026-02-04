#include <iostream>
#include "Application.hpp"
#include "Error.hpp"
#include <glad/glad.h>
#include <glfw/glfw3.h>

Application::Application()
    : m_window(nullptr), m_vSync(false), m_fullscreen(false), m_resizable(true), m_width(800), m_height(600), m_name("FastFingers") {
    if(!glfwInit()){
        exit(Errors::GLFW::InitFail);
    }
}

void Application::blit() {
    glfwSwapBuffers((GLFWwindow*)m_window);
}

void Application::update() {
    glfwPollEvents();
}

bool Application::running() const {
    return !glfwWindowShouldClose((GLFWwindow*)m_window);
}

Application& Application::setVSync(bool enabled) {
    m_vSync = enabled;
    return *this;
}

Application& Application::setFullscreen(bool enabled) {
    m_fullscreen = enabled;
    return *this;
}

Application& Application::setName(const char* appName) {
    m_name = appName;
    return *this;
}

Application& Application::setResizable(bool enabled) {
    m_resizable = enabled;
    return *this;
}

Application& Application::setDimensions(int width, int height) {
    m_width = width;
    m_height = height;
    return *this;
}

void Application::run() {
    m_window = (void*)glfwCreateWindow(m_width, m_height, m_name, NULL, NULL);
    if(!m_window) {
        glfwTerminate();
        exit(Errors::GLFW::WindowCreateFail);
    }

    glfwMakeContextCurrent((GLFWwindow*)m_window);
    if(!gladLoadGLLoader((GLADloadproc)glfwGetProcAddress)) {
        glfwDestroyWindow((GLFWwindow*)m_window);
        glfwTerminate();
        exit(Errors::GL::LoadFail);
    }
}

Application::~Application() {
    glfwDestroyWindow((GLFWwindow*)m_window);
    glfwTerminate();
}