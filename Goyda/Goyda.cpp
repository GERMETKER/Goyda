#include <iostream>
#include <Windows.h>

class Animal
{
public:


protected:
    int experience;
    int age;
    bool sex;
    void Kushat()
    {

    }
    void Dishat()
    {

    }
    void Reproduction()
    {

    }
    void Ohota(std::string)
    {

    }
    void Sleep()
    {

    }
    void MakeSound()
    {

    }


private:



};
class Cat : public Animal
{
public:
    void CatchLaser()
    {
        Ohota("Laser");
    }
    void Rest()
    {
        Kushat();
        Sleep();
        Kushat();
        Sleep();
        Kushat();
        Sleep();
        Kushat();
        Sleep();
        Kushat();
        Sleep();
        Kushat();
        Sleep();
        Kushat();
        Sleep();
        Kushat();
        Sleep();
        Kushat();
        Sleep();
        Kushat();
        Sleep();
        Kushat();
        Sleep();
        Kushat();
        Sleep();
    }

private:
    int lives = 9;
};

class Dog : public Animal
{
public:
    void Wolk()
    {
        MakeSound();
        MakeSound();
        MakeSound();
        MakeSound();
        Ohota("Belka");
        Ohota("Belka");
        EatKakyyToHren();
        EatKakyyToHren();
        EatKakyyToHren();
        MakeSound();
        MakeSound();
        MakeSound();

    }
    void StealFood()
    {
        Kushat();
    }
    void EatKakyyToHren()
    {
        Kushat();
    }
    void CatchBall()
    {
        Ohota("Ball");
    }

private:


};





int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    


}

