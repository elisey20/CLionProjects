#include <iostream>

int main()
{
    std::cout << "Hello, World!" << std::endl;

    asm
    (
        "mov eax, 3"
        ""
    );

    return 0;
}
