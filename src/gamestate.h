#pragma once

#include <SFML/Graphics.hpp>
class Game;

class GameState
{
public:
    GameState(Game * pGame);
    virtual ~GameState() {}
    // Sva moguća stanja igre.
        enum State{
            Welcome,
            Playing,
            Score,
            SIZE
        };
    // Metode koje moraju osigurati sva stanja igre.
    virtual void init() = 0;
    virtual void handleEvents(sf::Event event) = 0;
    virtual void update(sf::Time dt = sf::Time::Zero) = 0;
    virtual void render() = 0;

protected:
    Game * const mpGame; // Pokazivač na Game klasu
    // eventualno i druge varijable  
       
};


class WelcomeState : public GameState{
//  Vaš kod ...
};

class ScoreState : public GameState{
// Vaš kod ...
};


