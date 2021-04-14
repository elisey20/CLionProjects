#include <vector>

class Something
{
private:
    static std::vector<char> s_mychars;

private:
    class _nested
    {
    public:
        _nested();
    };

public:
    static void getSomething();
    friend void print();

private:
    static _nested s_initializer;

};

void print();