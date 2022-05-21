#ifndef ENTITY_H
#define ENTITY_H
#include <SFML/Graphics.hpp>

class Entity{
    public:
        Entity(){};
        virtual void Update(std::vector<Entity*> entities, sf::RenderWindow* window,unsigned long tick){};
        virtual void Draw(sf::RenderWindow* window){};
        virtual void Handler(std::vector<sf::Event> event[], sf::RenderWindow* window){};
};

#endif