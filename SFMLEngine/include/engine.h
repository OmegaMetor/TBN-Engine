#ifndef ENGINE_H
#define ENGINE_H
#include <SFML/Graphics.hpp>
#include <entity.h>

class engine{
    sf::RenderWindow window;
    public:
        unsigned long tick;
        engine(int x, int y, char name[]);
        void run();
        void add_entity(Entity* entity);
        std::vector<Entity*> entities;
};

#endif