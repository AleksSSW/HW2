// HW2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <iterator>

class House 
{
private:
    std::vector<Flat*>_flat;

  public:
      void ShowFlats () {
          for (const auto& it : _flat)
              it->ShowTenant();
      }

};

class Flat {
private:
    std::vector<Person*>_person;

public:
    void AddPerson(Person* person) {
        _person.push_back(person);
   }
    
    
    void ShowTenant() {
        for (const auto& it : _person)
            it->ShowPerson();
    }

};

class Person  {
private:
    int _age;
    std::string _FIO;
    std::string _gender;
public:
    Person(int age, std::string FIO, std::string gender){
        _age = age;
        _FIO = FIO;
        _gender=gender;
    }
    Person(const Person& p) {
        _FIO = p._FIO;
        _age = p._age + 2;
        _gender = p._gender;
    }

    void ShowPerson() {
        std::cout << "FIO: " << _FIO << std::endl;
        std::cout << "Age: " << _age << std::endl;
        std::cout << "Gender of the person: " << _gender << std::endl;
    }

};

int main()
{
    Person* person1 = new Person(20, "Alex Bowski", "female");
    Person* person2 = new Person(38, "Vasdai Lez", "male");
    Person* person3 = new Person(45, "Monika Red", "female");
    Person* person4 = new Person(16, "Pavel Shafutov", "male");
    Person* person5 = new Person(78, "Alksandr Tetd", "male");
    Person* person6 = new Person(56, "Lena Shwartz", "female");

    Person* person7{ person3 };
    person7->ShowPerson();
    
    
    
    
    
    
    return 0;
}


