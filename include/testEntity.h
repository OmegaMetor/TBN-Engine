#ifndef ENTITYSUB
#define ENTITYSUB
#include <entity.h>

class testEntity : public Entity{
    void Handler(std::vector<sf::Event> event[], sf::RenderWindow* window);
};

#endif