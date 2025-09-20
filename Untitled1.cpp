#include <iostream>

using namespace std;

int main()
{
    bool question;
    std::cout << "Thank you for listening" <<std::endl;
    
    std::cout << "Any Question? (Choose 1 or 5);";
    
    std::cin >> question;
    
if (question == true) {
        std::cout << "Raise hand; Ask question." << std::endl;
        }
else {
        std::cout << "Prepare for Module Exercise." << std::endl;
        }
        
return 0;
}
