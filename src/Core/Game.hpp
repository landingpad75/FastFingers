#pragma once

class Game {
public:
    virtual void draw(float dt) = 0;
    virtual void update(float dt) = 0;

    static Game* getGame();
};