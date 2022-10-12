#include <iostream>
#include <string>
using namespace std;

class Transport
{
protected:
    string name;
    double weight;
    double fuel;
public:
    Transport()
    {
        name = nullptr;
        weight = 0.0;
        fuel = 0.0;
    }
    Transport(string n, double w, double f)
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
};

class Plane : public Transport
{
    double pass;
public:
    Plane()
    {
        Transport::Transport();
        pass = 0.0;
    }
    Plane(string n, double w, double f, double p) :Transport(n, w, f)
    {
        pass = p;
    }
    void Print()
    {
        Transport::Print();
        cout << "\n" << "Passengers " << pass;
    }
    void Input()
    {
        //Transport::Input();
        cout << "Input pass\n";
        cin >> pass;
    }
};

class velo : public Transport
{
    double di;
public:
    velo()
    {
        Transport::Transport();
        di = 0.0;
    }
    velo(string n, double w, double f, double d) :Transport(n, w, f)
    {
        di = d;
    }
    void Print()
    {
        Transport::Print();
        cout << "\nDiameter: " << di;
    }
    void Input()
    {
        Transport::Input();
        cout << "Input diameter\n";
        cin >> di;
    }
};

class Jeep : public Transport
{
    double mileage;
public:
    Jeep()
    {
        Transport::Transport();
        mileage = 0.0;
    }
    Jeep(string n, double w, double f, double m) :Transport(n, w, f)
    {
        mileage = m;
    }
    void Print()
    {
        Transport::Print();
        cout << mileage;
    }
    void Input()
    {
        Transport::Input();
        cout << "Input mileage\n";
        cin >> mileage;
    }
};

class Vessel : public Transport
{
    int board_height;
public:
    Vessel()
    {
        Transport::Transport();
        board_height = 0;
    }
    Vessel(string n, double w, double f, int b) :Transport(n, w, f)
    {
        board_height = b;
    }
    void Print()
    {
        Transport::Print();
        cout << board_height;
    }
    void Input()
    {
        Transport::Input();
        cout << "Input board height\n";
        cin >> board_height;
    }
};

class Truck : public Transport
{
    int body;
public:
    Truck()
    {
        Transport::Transport();
        body = 0;
    }
    Truck(string n, double w, double f, int bo) :Transport(n, w, f)
    {
        body = bo;
    }
    void Print()
    {
        Transport::Print();
        cout << body;
    }
    void Input()
    {
        Transport::Input();
        cout << "Input body\n";
        cin >> body;
    }
};

int main()
{
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
    Transport* ptr = nullptr;
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
    }

}