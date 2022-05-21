#include <SFML/Graphics.hpp>
#include <engine.h>

engine::engine(int x, int y, char windowName[]){
    tick = 0;
    window.create(sf::VideoMode(x,y), windowName);
}

void engine::run(){
    while (window.isOpen())
    {
        tick += 1;
        if(tick == ULONG_MAX)
            tick = 1;

        sf::Event Event;
        std::vector<sf::Event> events;
        while (window.pollEvent(Event))
        {
            events.push_back(Event);
        }
        window.clear(sf::Color::Black);
        
        for (int i = 0; i < entities.size(); i++)
        {
            entities.at(i)->Handler(&events, &window);
        }
        
        for (int i = 0; i < entities.size(); i++)
        {
            entities.at(i)->Update(entities, &window, tick);
        }

        for (int i = 0; i < entities.size(); i++)
        {
            entities.at(i)->Draw(&window);
        }

        window.display();
    }
}

void engine::add_entity(Entity* entity){
    entities.push_back(entity);
};