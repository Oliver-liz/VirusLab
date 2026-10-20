
#include <iostream>
#include <string>

int main()
{
    int choice = -1;

    std::string npcNames[3] = { "Alex", "Sam", "Jordan" };
    std::string npcStatus[3] = { "Healthy", "Healthy", "Healthy" };

    while (choice != 0)
    {
        std::cout << "\n============================\n";
        std::cout << "         VIRUS LAB\n";
        std::cout << "============================\n";
        std::cout << "1. View NPCs\n";
        std::cout << "2. Infect an NPC\n";
        std::cout << "3. Advance simulation (coming soon)\n";
        std::cout << "4. Contain an NPC (coming soon)\n";
        std::cout << "5. View outbreak statistics\n";
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
        {
            int npcChoice;

            std::cout << "\n--- CHOOSE AN NPC ---\n";

            for (int i = 0; i < 3; i++)
            {
                std::cout << i + 1 << ". ";
                std::cout << npcNames[i] << " - ";
                std::cout << npcStatus[i] << "\n";
            }

            std::cout << "Enter NPC number to infect: ";
            std::cin >> npcChoice;

            if (npcChoice >= 1 && npcChoice <= 3)
            {
                if (npcStatus[npcChoice - 1] == "Healthy")
                {
                    npcStatus[npcChoice - 1] = "Infected";
                    std::cout << npcNames[npcChoice - 1];
                    std::cout << " is now infected!\n";
                }
                else
                {
                    std::cout << "This NPC is already infected.\n";
                }
            }
            else
            {
                std::cout << "Invalid NPC number.\n";
            }

            break;
        }

        case 3:
            std::cout << "\nSimulation is coming in a future update.\n";
            break;

        case 4:
            std::cout << "\nContainment is coming in a future update.\n";
            break;

        case 5:
        {
            int healthyCount = 0;
            int infectedCount = 0;

            for (int i = 0; i < 3; i++)
            {
                if (npcStatus[i] == "Healthy")
                {
                    healthyCount++;
                }
                else if (npcStatus[i] == "Infected")
                {
                    infectedCount++;
                }
            }

            std::cout << "\n--- OUTBREAK STATISTICS ---\n";
            std::cout << "Total NPCs: 3\n";
            std::cout << "Healthy NPCs: " << healthyCount << "\n";
            std::cout << "Infected NPCs: " << infectedCount << "\n";
            break;
        }

        case 0:
            std::cout << "\nLeaving Virus Lab...\n";
            break;

        default:
            std::cout << "\nInvalid option. Try again.\n";
        }
    }

    return 0;
}
