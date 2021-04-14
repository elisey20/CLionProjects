#include <utility>

class Human
{
private:
    int age = 0;
    std::string nationally;
    std::string colorHair;

public:
    Human()
    {
        this(0, "", "");
    }
    Human(int age, std::string nationally, std::string colorHair)
    {
        this->age = age;
        this->nationally = std::move(nationally);
        this->colorHair = std::move(colorHair);
    }

    void setAge(int age)
    {
        this->age = age;
    }

    void setNationally(int nationally)
    {
        this->nationally = nationally;
    }

    void setColorHair(int colorHair)
    {
        this->colorHair = colorHair;
    }

    int getAge()
    {
        return age;
    }

    std::string getNationally()
    {
        return nationally;
    }

    std::string getColorHair()
    {
        return colorHair;
    }

};

class Student : public Human
{
private:
    int course;

public:
    Student(int age, std::string nationally, std::string colorHair, int course)
    {

    }
};