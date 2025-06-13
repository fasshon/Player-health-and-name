#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

std::vector<std::string> fakeNames = {
    "Liam Johnson", "Emma Smith", "Noah Williams", "Olivia Brown", "William Jones",
    "Ava Garcia", "James Miller", "Isabella Davis", "Oliver Martinez", "Sophia Rodriguez",
    "Benjamin Wilson", "Mia Anderson", "Elijah Taylor", "Charlotte Thomas", "Lucas Moore",
    "Amelia Jackson", "Mason White", "Harper Harris", "Ethan Martin", "Evelyn Thompson",
    "Alexander Garcia", "Abigail Martinez", "Henry Robinson", "Emily Clark", "Jacob Lewis",
    "Ella Walker", "Michael Hall", "Elizabeth Allen", "Daniel Young", "Camila King",
    "Logan Wright", "Luna Scott", "Jackson Green", "Sofia Adams", "Sebastian Baker",
    "Avery Nelson", "Jack Carter", "Mila Mitchell", "Aiden Perez", "Aria Roberts",
    "Owen Turner", "Scarlett Phillips", "Samuel Campbell", "Victoria Parker", "Matthew Evans",
    "Madison Edwards", "Joseph Collins", "Grace Stewart", "Levi Sanchez", "Chloe Morris",
    "Mateo Rogers", "Penelope Reed", "David Cook", "Layla Morgan", "John Bell",
    "Riley Murphy", "Wyatt Bailey", "Zoey Cooper", "Carter Richardson", "Nora Cox",
    "Julian Howard", "Lily Ward", "Luke Torres", "Eleanor Peterson", "Grayson Gray",
    "Hannah Ramirez", "Isaac James", "Addison Watson", "Jayden Brooks", "Aubrey Kelly",
    "Theodore Sanders", "Ellie Price", "Gabriel Bennett", "Stella Wood", "Anthony Barnes",
    "Natalie Ross", "Dylan Henderson", "Zoe Coleman", "Leo Jenkins", "Leah Perry",
    "Lincoln Powell", "Hazel Long", "Jaxon Patterson", "Violet Hughes", "Asher Flores",
    "Aurora Washington", "Christopher Butler", "Savannah Simmons", "Josiah Foster", "Audrey Bryant",
    "Andrew Alexander", "Brooklyn Russell", "Thomas Griffin", "Bella Diaz", "Joshua Hayes"
};

struct Players 
{
    std::string name;
    int health;
};

std::vector<Players> PlayerCount = {};

int AmountofPlayers;

int main() 
{
    std::cout << "Amount of players: "; 
    std::cin >> AmountofPlayers;

    srand(time(0));

    for (int i = 0; i < AmountofPlayers; i++)
    {
        Players player;
        int randomIndex = rand() % fakeNames.size();
        player.name = fakeNames[randomIndex];
        player.health = (rand() % 100) + 1;
        PlayerCount.push_back(player);
    }

    for (const Players& player : PlayerCount)
    {
        std::cout << "Name: " << player.name << std::endl;
        std::cout << "Health: " << player.health << std::endl;
        std::cout << std::endl;
    } 

    return 0;
}
