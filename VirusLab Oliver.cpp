
#include <iostream>
#include <string>

int main()
{
    int choice = -1;

    while (choice != 0)
    {
        std::cout << "\n============================\n";
        std::cout << "         VIRUS LAB\n";
        std::cout << "============================\n";
        std::cout << "1. View NPCs\n";
        std::cout << "2. Inject a virus\n";
        std::cout << "3. Advance simulation\n";
        std::cout << "4. Contain an NPC\n";
        std::cout << "5. View outbreak statistics\n";
        std::cout << "0. Exit game\n";
        std::cout << "Choose an option: ";

        std::cin >> choice;

        switch (choice)
        {
        case 1:
            std::cout << "\nNPC list will appear here.\n";
            break;

        case 2:
            std::cout << "\nVirus injection will be added here.\n";
            break;

        case 3:
            std::cout << "\nSimulation will advance here.\n";
            break;

        case 4:
            std::cout << "\nNPC containment will be added here.\n";
            break;

        case 5:
            std::cout << "\nOutbreak statistics will appear here.\n";
            break;

        case 0:
            std::cout << "\nLeaving Virus Lab...\n";
            break;

        default:
            std::cout << "\nInvalid option. Try again.\n";
        }
    }

    return 0;
}
