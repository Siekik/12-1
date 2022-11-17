#include <iostream>
#include <iomanip>
using namespace std;

double average(double* a, int size);
double* maximum(double* a, int size);
double* minimum(double* a, int size);

int main() {
	int size;
	cout << "Enter size of array: ";
	cin >> size;
	double size2 = size;
	double* a = new double[size2];

	cout << "Enter " << size << " floating-point values: ";
	for (int i = 0; i < size; i++) {
		cin >> a[i];
	}
	
	cout << "Average is: " << setprecision(2) << average(a, size) << endl;
	cout << "Maximum value is element #" << maximum(a,size) - a  <<": " << *maximum(a, size) << endl;
	cout << "Minimum value is element #" << minimum(a, size) - a << ": " << *minimum(a, size);
}
double average(double* a, int size) {
	double average = 0;
	for (int i = 0; i < size; i++) {
		average = average + a[i];
	}
	average = average / size;
	return average;
}
double* maximum(double* a, int size) {
	double hold = a[0];
	int highest = 0;
	for (int i = 1; i < size; i++) {
		if (hold < a[i]) {
			hold = a[i];
			highest = i;
		}
	}
	double* final = &a[highest];
	return final;
}
double* minimum(double* a, int size) {
	double hold = a[0];
	int lowest=0;
	for (int i = 1; i < size; i++) {
		if (hold > a[i]) {
			hold = a[i];
			lowest = i;
		}
	}
	double* final = &a[lowest];
	return final;
}