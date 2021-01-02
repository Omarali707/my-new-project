#include <iostream>

using namespace std;
class patient {

private:

    string Name, Blood;
    int Id;
    float Height, Weight ;


public:

    patient ()
    {
        Name = "UNKNOWN";
        Id = 0;
        Height = 0.0;
        Weight = 0.0;
        Blood = "UNKNOWN";
    }

    void setName ()
    {
        cout << "Enter Your Name : ";
        cin >> Name;
    }
    void setId ()
    {
        cout << "Enter Your ID : ";
        cin >> Id;
    }
    void setHeight ()
    {
        cout << "Enter Your height : ";
        cin >> Height;
    }


    void setWeight ()
    {
        cout << "Enter Your weight : ";
        cin >> Weight;
    }
    void setBlood ()
    {
        cout << "Enter Your blood : ";
        cin >> Blood;
    }
    string getName ()
    {
        return Name;
    }
    int getId ()
    {

        return Id;
    }
    float getHeight ()
    {
        return Height;
    }


    float getWeight ()
    {
        return Weight;
    }
    string getBlood ()
    {
        return Blood;
    }

    void displayData()
    {
        cout << "Name : " << Name << endl;
        cout << "ID : " << Id << endl;
        cout << "Height : " << Height << endl;
        cout << "Weight : " << Weight << endl;
        cout << "Blood : " << Blood << endl;
    }

};


int main()
{
    patient p1;

    p1.setName();

    p1.displayData();

    cout << "*----------------------*" << endl;

    patient p2;


    p2.displayData();

    cout << "*----------------------*" << endl;

    patient p3;

    p3.setName();

    p3.displayData();

    cout << "*----------------------*" << endl;

    return 0;
}

