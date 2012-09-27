#include <string>

class AbstractProductA
{
public:
    
};

class ProduktA : public AbstractProductA
{
public:
    
private:
    
};


class AbstractProductB
{
public:
    
};

class ProductB : public AbstractProductB
{
public:
    
private:
};

class AbstractFactory
{
public:
    virtual AbstractProduktA makeProduktA() {};
    virtual AbstractProduktB makeProduktB() {};
    
protected:
    
private:
    
};

class Factory : public AbstractFactory
{
public:
    virtual AbstractProduktA makeProduktA() {
        ProductA a;
        return a;
    };
    
    virtual AbstractProduktB makeProduktB() {
        ProductB b;
        return b;
    };
    
private:
};

int main(void)
{
    return 0;
}