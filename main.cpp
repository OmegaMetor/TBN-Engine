#include <engine.h>
#include <testEntity.h>
#include <SFML/Graphics.hpp>

void testEntity::Handler(std::vector<sf::Event> event[], sf::RenderWindow* window){
    for (int i = 0; i < event->size(); i++)
    {
        if(event->at(i).type == sf::Event::Closed){
            window->close();
        }
    }
    
};

int main(int, char **)
{
    char* windowName = "Game";
    engine *e = new engine(400, 600, windowName);
    testEntity entity = testEntity();
    e->add_entity( &entity );
    e->run();
}

