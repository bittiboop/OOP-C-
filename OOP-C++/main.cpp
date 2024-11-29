#include <iostream>
#include <string>
using namespace std;


class Student {
private:
    string fullName;
    string birthDate;
    string phoneNumber;
    string city;
    string country;
    string universityName;
    string universityCity;
    string universityCountry;
    string groupNumber;

public:
    void inputData() {
        cout << "Enter full name: ";
        getline(cin, fullName);
        cout << "Enter birth date (DD/MM/YYYY): ";
        getline(cin, birthDate);
        cout << "Enter phone number: ";
        getline(cin, phoneNumber);
        cout << "Enter city: ";
        getline(cin, city);
        cout << "Enter country: ";
        getline(cin, country);
        cout << "Enter university name: ";
        getline(cin, universityName);
        cout << "Enter university city: ";
        getline(cin, universityCity);
        cout << "Enter university country: ";
        getline(cin, universityCountry);
        cout << "Enter group number: ";
        getline(cin, groupNumber);
    }

    void displayData() const {
        cout << "Full Name: " << fullName << "\n";
        cout << "Birth Date: " << birthDate << "\n";
        cout << "Phone Number: " << phoneNumber << "\n";
        cout << "City: " << city << "\n";
        cout << "Country: " << country << "\n";
        cout << "University Name: " << universityName << "\n";
        cout << "University City: " << universityCity << "\n";
        cout << "University Country: " << universityCountry << "\n";
        cout << "Group Number: " << groupNumber << "\n";
    }

    string getFullName() const { return fullName; }
    void setFullName(const string& name) { fullName = name; }

    string getBirthDate() const { return birthDate; }
    void setBirthDate(const string& date) { birthDate = date; }

    string getPhoneNumber() const { return phoneNumber; }
    void setPhoneNumber(const string& phone) { phoneNumber = phone; }

    string getCity() const { return city; }
    void setCity(const string& cityName) { city = cityName; }

    string getCountry() const { return country; }
    void setCountry(const string& countryName) { country = countryName; }

    string getUniversityName() const { return universityName; }
    void setUniversityName(const string& name) { universityName = name; }

    string getUniversityCity() const { return universityCity; }
    void setUniversityCity(const string& city) { universityCity = city; }

    string getUniversityCountry() const { return universityCountry; }
    void setUniversityCountry(const string& country) { universityCountry = country; }

    string getGroupNumber() const { return groupNumber; }
    void setGroupNumber(const string& group) { groupNumber = group; }
};


int main() {
	Student student;
	student.inputData();
	student.displayData();


	return 0;
}