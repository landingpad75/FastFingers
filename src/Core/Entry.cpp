#include "Application.hpp"
#include "Error.hpp"
#include "Helper.hpp"
#include "Game.hpp"
#include <glad/glad.hpp>
#include <GLFW/glfw3.h>

int main() {
    Application app;
    app
        .setDimensions(800, 600)
        .setFullscreen(false)
        .setVSync(false)
        .setName("FastFingers")
        .setResizable(true)
        .run();

    Game* game = Game::getGame();
    float lastTime = 0.f;
    while(app.running()) {
        float time = glfwGetTime();
        float elapsed = time - lastTime;
        lastTime = time;
        game->update(elapsed);
        app.blit();
        app.update();

        game->draw(elapsed);
    }

    return Errors::Success;
}