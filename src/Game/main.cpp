#include <Core/Entry.hpp>
#include <Core/Helper.hpp>

class MyGame : public Game {
public:
    void draw(float dt) override {
        Helper::clearColor(Helper::Color(0x49, 0x6E, 0xCA));
    }

    void update(float dt) override {}
};

Game* Game::getGame() {
    static MyGame instance;
    return &instance;
}