#include <iostream>

int main()
{
    int ComputerScore = 0;

    for (int i = 0; i < 3; i++)
    {

        int min = 1, max = 10;
        int ComputerRandom = rand() % (max - min + 1) + min;
        std::cout << "Computer cards : " << ComputerRandom << std::endl;
        ComputerScore += ComputerRandom;
        
    }


    int PlayerScore = 0;

    for (int i = 0; i < 3; i++)
    {

        int min = 1, max = 10;
        int PlayerRandom = rand() % (max - min + 1) + min;
        std::cout << "Player cards : " << PlayerRandom << std::endl;
        PlayerScore += PlayerRandom;


    }


    std::cout << "Computer Score : " << ComputerScore << std::endl;
    std::cout << "Player Score : " << PlayerScore << std::endl;


    
    if (ComputerScore > 21)
    {
        std::cout << "Player win!";

    }
    else if (ComputerScore > PlayerScore)
    {
        std::cout << "Computer win!";

    }
    else
    {
        std::cout << "Player win!";
    }
}