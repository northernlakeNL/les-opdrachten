#include <iostream>
using std::string;
#include "oo test main.h"
class AbstractEmployee{
    virtual void AskForPromotion() = 0;

};

class employee: AbstractEmployee{
private:
    string Company;
    int Age;
protected:
    string Name;
public:
    void setName(string name) { //setter
        Name = name;
    }
    string getName(){ //getter
        return Name;
    }
    void setCompany(string company) {
        Company = company;
    }
    string getCompany(){
        return Company;
    }
    void setAge(int age) {
        if (age >= 18)
            Age = age;
    }
    int getAge(){
        return Age;
    }

    void IntroduceYourself(){
        std::cout << "Name - " << Name << std::endl;
        std::cout << "Company - " << Company << std::endl;
        std::cout << "Age - " << Age << std::endl;
    }
    employee(string name, string company, int age){
        Name = name;
        Company = company;
        Age = age;
    }
    void AskForPromotion(){
         if(Age > 30)
             std::cout << Name << " got promoted!" << std::endl;
         else
            std::cout << Name << " No promotion for you" << std::endl;
    }
};

class Developer:public employee{
public:
    string Language;
    Developer(string name, string company, int age, string language)
        :employee(name, company, age)
    {
        Language= language;
    }
    void FixBug(){
        std::cout << Name << " Fixed bug using " << Language << std::endl;
    }

};
void meen(){
    Developer d = Developer("Tom", "HU", 24, "Python");
    d.FixBug();
    d.FixBug();
    d.FixBug();
    d.AskForPromotion();
    d.setAge(d.getAge()+7);
    std::cout << d.getAge() << std::endl;
    d.AskForPromotion();
}