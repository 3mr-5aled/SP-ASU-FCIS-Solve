#include <iostream>
using namespace std;

struct CINEMA_HALL
{
    int hallNum, capacity = 50, numOfReservedSeats = 0;
    string movie;
} hall[3];

struct HOUSE_STRUCT
{
    string address;
    int rooms;
    float price, area = 0;
} house;

struct STUDENT_STRUCT
{
    int ID, Grade;
    string Name;
    char status;
} student[4];

void cinema();
void reservation();
void DisplayEmptySeats(int num);

void House();
void InputHouseDetails();
void CalculatePrice();
void displayHouse();

void Students();
void InputStudentDetails();
void status();
void displayStudents();

int main()
{
    // Q1
    // cinema();
    // Q2
    // House();
    // Q3 Students
    Students();

    return 0;
}

// Q1 Cinema

void cinema()

{
    cout << "Enter the details of the cinema halls: " << endl;
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter values of hall #" << i + 1 << endl;
        cout << "Hall number: ";
        cin >> hall[i].hallNum;
        cout << "Movie: ";
        cin >> hall[i].movie;
    }

    reservation();
    cout << "Enter the hall number to display the empty seats: ";
    int num;
    cin >> num;
    DisplayEmptySeats(num);
}
void reservation()
{
    cout << "Enter your designted movie: ";
    string movie;
    cin >> movie;
    int tickets;
    cout << "Enter the number of tickets: ";
    cin >> tickets;
    for (int i = 0; i < 3; i++)
    {
        if (hall[i].movie == movie)
        {
            if (hall[i].numOfReservedSeats + tickets <= hall[i].capacity)
            {
                hall[i].numOfReservedSeats += tickets;
                cout << "Tickets reserved successfully." << endl;
            }
            else
            {
                cout << "Not enough seats available." << endl;
            }
        }
    }
}
void DisplayEmptySeats(int num)
{
    int index = num - 1;
    if (index >= 0 && index < 3)
    {
        cout << "Empty seats in hall " << num << " are: " << hall[index].capacity - hall[index].numOfReservedSeats << endl;
    }
    else
    {
        cout << "Invalid hall number." << endl;
    }
}

// Q2 House

void House()
{
    InputHouseDetails();
    CalculatePrice();
    displayHouse();
}
void InputHouseDetails()
{
    cout << "Enter the address of the house: ";
    cin >> house.address;
    cout << "Enter the number of rooms: ";
    cin >> house.rooms;

    for (int i = 0; i < house.rooms; i++)
    {
        cout << "Enter the details of room #" << i + 1 << endl;
        cout << "Enter the dimensions: ";
        int length, width;
        cin >> length;
        cin >> width;
        house.area += length * width;
    }
}
void CalculatePrice()
{
    house.price = 200 * house.area;
    cout << "The price of the house is: " << house.price << endl;
}
void displayHouse()
{
    cout << "Address: " << house.address << endl;
    cout << "Rooms: " << house.rooms << "rooms" << endl;
    cout << "Area: " << house.area << " m^2" << endl;
    cout << "Price: " << house.price << " $" << endl;
}

// Q3 Students
void Students()
{
    InputStudentDetails();
    status();
    displayStudents();
}
void InputStudentDetails()
{
    for (int i = 0; i < 4; i++)
    {
        cout << "Enter the details of student #" << i + 1 << endl;
        cout << "ID: ";
        cin >> student[i].ID;
        cout << "Name: ";
        cin >> student[i].Name;
        cout << "Grade: ";
        cin >> student[i].Grade;
    }
}
void status()
{
    for (int i = 0; i < 4; i++)
    {
        if (student[i].Grade > 60)
        {
            student[i].status = 'P';
        }
        else
        {
            student[i].status = 'F';
        }
    }
}
void displayStudents()
{
    for (int i = 0; i < 4; i++)
    {
        cout << "Student " << student[i].Name << " status is " << student[i].status << endl;
    }
}
