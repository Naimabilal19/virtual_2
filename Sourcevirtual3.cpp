#include <iostream>
using namespace std;

class Transport
{
protected:
    char* name;
    double weight;
    double fuel;
public:
    Transport()
    {
        name = nullptr;
        weight = 0.0;
        fuel = 0.0;
    }
    Transport(char* n, double w, double f)
    {
        name = n;
        weight = w;
        fuel = f;
    }
    virtual void Input()
    {
        cout << "Input name\n";
        cin >> name;
        cout << "Input weight\n";
        cin >> weight;
        cout << "Input fuel\n";
        cin >> fuel;
    }
    virtual void Print()const
    {
        cout << "Name: " << name << "\n" << "Weight: " << weight << "\n " << "Fuel: " << fuel;
    }
    virtual void SetFuel(double f)
    {
        f = fuel;
    }
    Transport(const char* n, double w, double f)
    {
        name = new char[strlen(n) + 1];
        strcpy_s(name, strlen(n) + 1, n);
        weight = w;
        fuel = f;
    }
    Transport(const Transport& obj)
    {
        name = new char[strlen(obj.name) + 1];
        strcpy_s(name, strlen(obj.name) + 1, obj.name);
        weight = obj.weight;
        fuel = obj.fuel;
    }
    Transport& operator=(const Transport& obj)
    {
        if (this == &obj)
        {
            return*this;
        }
        if (name != nullptr)
        {
            delete[]name;
        }
        name = new char[strlen(obj.name) + 1];
        strcpy_s(name, strlen(obj.name) + 1, obj.name);
        weight = obj.weight;
        fuel = obj.fuel;
        return *this;
    }
    virtual ~Transport() = 0
    {
        cout << "\nTransport destruct\n";
        delete[]name;
        weight = 0.0;
        fuel = 0.0;
    }
};

class Plane : public Transport
{
    char* pass;
public:
    void Print()
    {
        Transport::Print();
        cout << "\n" << "Passengers " << pass;
    }
    Plane(const char* n, double w, double f, const char* p) :Transport(n, w, f)
    {
        pass = new char[strlen(p) + 1];
        strcpy_s(pass, strlen(p) + 1, p);
    }
    Plane(const Plane& obj) :Transport(obj.name, obj.weight, obj.fuel)
    {
        pass = new char[strlen(obj.pass) + 1];
        strcpy_s(pass, strlen(obj.pass) + 1, obj.pass);
    }
    Plane& operator=(const Plane& obj)
    {
        if (this == &obj)
        {
            return*this;
        }
        if (pass != nullptr)
        {
            delete[]pass;
        }
        if (name != nullptr)
        {
            delete[]name;
        }
        name = new char[strlen(obj.name) + 1];
        strcpy_s(name, strlen(obj.name) + 1, obj.name);
        weight = obj.weight;
        fuel = obj.fuel;
        pass = new char[strlen(obj.pass) + 1];
        strcpy_s(pass, strlen(obj.pass) + 1, obj.pass);
        return *this;
    }
    ~Plane()
    {
        cout << "\nPlane destruct\n";
        delete[]pass;
    }
};

class velo : public Transport
{
    char* di;
public:
    void Print()
    {
        Transport::Print();
        cout << "\nDiameter: " << di;
    }
    velo(const char* n, double w, double f, const char* d) :Transport(n, w, f)
    {
        di = new char[strlen(d) + 1];
        strcpy_s(di, strlen(d) + 1, d);
    }
    velo(const velo& obj) :Transport(obj.name, obj.weight, obj.fuel)
    {
        di = new char[strlen(obj.di) + 1];
        strcpy_s(di, strlen(obj.di) + 1, obj.di);
    }
    velo& operator=(const velo& obj)
    {
        if (this == &obj)
        {
            return*this;
        }
        if (di != nullptr)
        {
            delete[]di;
        }
        if (name != nullptr)
        {
            delete[]name;
        }
        name = new char[strlen(obj.name) + 1];
        strcpy_s(name, strlen(obj.name) + 1, obj.name);
        weight = obj.weight;
        fuel = obj.fuel;
        di = new char[strlen(obj.di) + 1];
        strcpy_s(di, strlen(obj.di) + 1, obj.di);
        return *this;
    }
    ~velo()
    {
        cout << "\nVelobike destruct\n";
        delete[]di;
    }
};

class Jeep : public Transport
{
    char* mileage;
public:
    void Print()
    {
        Transport::Print();
        cout << mileage;
    }
    Jeep(const char* n, double w, double f, const char* m) :Transport(n, w, f)
    {
        mileage = new char[strlen(m) + 1];
        strcpy_s(mileage, strlen(m) + 1, m);
    }
    Jeep(const Jeep& obj) :Transport(obj.name, obj.weight, obj.fuel)
    {
        mileage = new char[strlen(obj.mileage) + 1];
        strcpy_s(mileage, strlen(obj.mileage) + 1, obj.mileage);
    }
    Jeep& operator=(const Jeep& obj)
    {
        if (this == &obj)
        {
            return*this;
        }
        if (mileage != nullptr)
        {
            delete[]mileage;
        }
        if (name != nullptr)
        {
            delete[]name;
        }
        name = new char[strlen(obj.name) + 1];
        strcpy_s(name, strlen(obj.name) + 1, obj.name);
        weight = obj.weight;
        fuel = obj.fuel;
        mileage = new char[strlen(obj.mileage) + 1];
        strcpy_s(mileage, strlen(obj.mileage) + 1, obj.mileage);
        return *this;
    }
    ~Jeep()
    {
        cout << "\nJeep destruct\n";
        delete[]mileage;
    }
};

class Vessel : public Transport
{
    char* board_height;
public:
    void Print()
    {
        Transport::Print();
        cout << board_height;
    }
    Vessel(const char* n, double w, double f, const char* b) :Transport(n, w, f)
    {
        board_height = new char[strlen(b) + 1];
        strcpy_s(board_height, strlen(b) + 1, b);
    }
    Vessel(const Vessel& obj) :Transport(obj.name, obj.weight, obj.fuel)
    {
        board_height = new char[strlen(obj.board_height) + 1];
        strcpy_s(board_height, strlen(obj.board_height) + 1, obj.board_height);
    }
    Vessel& operator=(const Vessel& obj)
    {
        if (this == &obj)
        {
            return*this;
        }
        if (board_height != nullptr)
        {
            delete[]board_height;
        }
        if (name != nullptr)
        {
            delete[]name;
        }
        name = new char[strlen(obj.name) + 1];
        strcpy_s(name, strlen(obj.name) + 1, obj.name);
        weight = obj.weight;
        fuel = obj.fuel;
        board_height = new char[strlen(obj.board_height) + 1];
        strcpy_s(board_height, strlen(obj.board_height) + 1, obj.board_height);
        return *this;
    }
    ~Vessel()
    {
        cout << "\nJeep destruct\n";
        delete[]board_height;
    }
};

class Truck : public Transport
{
    char* body;
public:
    void Print()
    {
        Transport::Print();
        cout << body;
    }
    Truck(const char* n, double w, double f, const char* b) :Transport(n, w, f)
    {
        body = new char[strlen(b) + 1];
        strcpy_s(body, strlen(b) + 1, b);
    }
    Truck(const Truck& obj) :Transport(obj.name, obj.weight, obj.fuel)
    {
        body = new char[strlen(obj.body) + 1];
        strcpy_s(body, strlen(obj.body) + 1, obj.body);
    }
    Truck& operator=(const Truck& obj)
    {
        if (this == &obj)
        {
            return*this;
        }
        if (body != nullptr)
        {
            delete[]body;
        }
        if (name != nullptr)
        {
            delete[]name;
        }
        name = new char[strlen(obj.name) + 1];
        strcpy_s(name, strlen(obj.name) + 1, obj.name);
        weight = obj.weight;
        fuel = obj.fuel;
        body = new char[strlen(obj.body) + 1];
        strcpy_s(body, strlen(obj.body) + 1, obj.body);
        return *this;
    }
    ~Truck()
    {
        cout << "\nTruck destruct\n";
        delete[]body;
    }
};

int main()
{
    Transport* ptr = new Plane("Plane 2000", 200.5, 120, "500");
    cout << "-----------------Plane---------------\n";
    ptr->Print();
    delete ptr;







    /*cout << "------------Plane-------------\n";
    Plane obj1("Plane2", 285, 12, 500);
    obj1.Input();
    cout << "\n-------------------------\n";
    obj1.Print();
    cout << "\n\n------------Bike-------------\n";
    velo obj2("Bike", 8.16, 0.7, 20);
    obj2.Input();
    cout << "\n-------------------------\n";
    obj2.Print();*/
    /*Transport* ptr = nullptr;
    int choose;
    cout << "1.Plane\n2.Velobike\n3.Jeep\n4.Vessel\n5.Truck\nmake a choice:\n";
    cin >> choose;
    switch (choose)
    {
    case 1:
        ptr = new Plane();
        //ptr->Input();  //либо так
        break;
    case 2:
        ptr = new velo();
        //ptr->Input();
        break;
    case 3:
        ptr = new Jeep();
        //ptr->Input();
        break;
    case 4:
        ptr = new Vessel();
        //ptr->Input();
        break;
    case 5:
        ptr = new Truck();
        //ptr->Input();
        break;
    }
    ptr->Input(); //или так
    delete ptr;

    cout << endl;

    int v;
    cout << "1.Print\n2.Print fuel\n";
    cin >> v;
    switch (v)
    {
    case 1:
        ptr->Print();
        break;

    case 2:

        ptr->SetFuel(200.6);
        break;
    }*/

}