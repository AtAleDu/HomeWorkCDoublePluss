#include <iostream>
#include <string>
using namespace std;

class Animal
{
protected:
    string name;
    int age;

public:
    Animal(string name_, int age_) : name(name_), age(age_) {}

    virtual void makeSound() const {
        cout << "Животное издает звук" << endl;
    }
};

class Dog : public Animal {
public:
    Dog(string name, int age) : Animal(name, age) {};

    void makeSound() const override {
        Animal::makeSound();
        cout << "Собака лает" << endl;
    }

};

class Cat : public Animal {
public:
    Cat(string name, int age) : Animal(name, age) {};

    void makeSound() const override {
        Animal::makeSound();
        cout << "Кошка мяукает" << endl;
    }

};

int main() {
    Animal animal1("Корова", 23);
    animal1.makeSound();

    Dog dog1("Джек", 11);
    dog1.makeSound();

    Cat cat1("Кошара", 22);
    cat1.makeSound();

    return 0;
}
