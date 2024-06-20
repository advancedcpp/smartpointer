#include <iostream>
#include <string>
#include <memory>
class Entity
{
public:
    Entity()
    {
        std::cout << "Created Entity" << std::endl;
    }
    ~Entity()
    {
        std::cout << "Desctroyed Entity" << std::endl;

    }
    void print(){

    }
};

int main(int argc, char const *argv[])
{

    {
        std::unique_ptr<Entity> entity(new Entity());
        // std::unique_ptr<Entity> entity = new Entity();
        std::unique_ptr<Entity> entity1 = std::make_unique<Entity>();

        std::unique_ptr<int> ptr = std::make_unique<int>(10);
        
        entity1->print();

        entity->print();
    }
        std::cout << "Desctroyed Entity" << std::endl;

    return 0;
}
