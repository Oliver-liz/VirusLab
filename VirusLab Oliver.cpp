
#include <iostream>
#include <string>

int main()
{
    int choice = -1;

    // NPC information
    std::string npcNames[3] = { "Alex", "Sam", "Jordan" };
    std::string npcStatus[3] = { "Healthy", "Healthy", "Healthy" };

    while (choice != 0)
    {
        std::cout << "\n============================\n";
        std::cout << "         VIRUS LAB\n";
        std::cout << "============================\n";
        std::cout << "1. View NPCs\n";
        std::cout << "2. Inject a virus (coming soon)\n";
        std::cout << "3. Advance simulation (coming soon)\n";
        std::cout << "4. Contain an NPC (coming soon)\n";
        std::cout << "5. View outbreak statistics (coming soon)\n";
        std::cout << "0. Exit game\n";
        std::cout << "Choose an option: ";

        std::cin >> choice;

        switch (choice)
        {
        case 1:
            std::cout << "\n--- NPC LIST ---\n";

            for (int i = 0; i < 3; i++)
            {
                std::cout << "NPC " << i + 1 << ": ";
                std::cout << npcNames[i] << " - ";
                std::cout << npcStatus[i] << "\n";
            }
            break;

        case 2:
            std::cout << "\nVirus injection is planned for a future update.\n";
            break;

        case 3:
            std::cout << "\nSimulation is planned for a future update.\n";
            break;

        case 4:
            std::cout << "\nNPC containment is planned for a future update.\n";
            break;

        case 5:
            std::cout << "\nOutbreak statistics are planned for a future update.\n";
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
