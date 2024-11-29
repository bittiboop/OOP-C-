#include <iostream>
#include <fstream>

using namespace std;


class Point {
private:
    double x, y, z;

public:
    Point() : x(0), y(0), z(0) {}

    void inputData() {
        cout << "Enter x-coordinate: ";
        cin >> x;
        cout << "Enter y-coordinate: ";
        cin >> y;
        cout << "Enter z-coordinate: ";
        cin >> z;
    }

    void displayData() const {
        cout << "Point coordinates: (" << x << ", " << y << ", " << z << ")\n";
    }

    double getX() const { return x; }
    void setX(double xValue) { x = xValue; }

    double getY() const { return y; }
    void setY(double yValue) { y = yValue; }

    double getZ() const { return z; }
    void setZ(double zValue) { z = zValue; }

    void saveToFile(const string& filename) const {
        ofstream outFile(filename);
        if (outFile.is_open()) {
            outFile << x << " " << y << " " << z << "\n";
            outFile.close();
        }
        else {
            cerr << "Error opening file for writing.\n";
        }
    }

    void loadFromFile(const string& filename) {
        ifstream inFile(filename);
        if (inFile.is_open()) {
            inFile >> x >> y >> z;
            inFile.close();
        }
        else {
            cerr << "Error opening file for reading.\n";
        }
    }
};



int main() {
	Point p1;
	p1.inputData();
	p1.displayData();
	p1.saveToFile("point.txt");

	Point p2;
	p2.loadFromFile("point.txt");
	p2.displayData();


	return 0;
}