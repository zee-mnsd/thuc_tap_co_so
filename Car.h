#ifndef CAR_H_INCLUDED
#define CAR_H_INCLUDED

enum CarBrand
{
    Audi,
    BMW,
    Tesla,
    Honda,
    Ford
};

enum CarModel
{
    A4,
    A5,
    A6,
    A7,
    A8,
    B5,
    B7
};

enum CarSpeed
{
    Low,
    Medium,
    High
}; 

class Car
{
    public:
        CarBrand Brand;
        CarModel Model;
        CarSpeed Speed;

        void accelerate(int speech);
};

#endif // CAR_H_INCLUDED