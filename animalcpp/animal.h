class Animal
{
private:
    std::string name;

public:
    Animal(std::string _name);
    void Walk();
    std::string& GetName();
};
