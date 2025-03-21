#include "CVector.h"

int main() {
	int size1, size2;
	while (true) {
		cout << "Enter vec2 size - ";
		cin >> size1;
		if (size1 == 0) {
			break;
		}
		cout << "Fill vec2" << endl;
		double* arr1 = new double[size1];
		for (int i = 0; i < size1; i++) {
			cout << "Vec2 element [" << i << "] - ";
			cin >> arr1[i];
			cout << endl;
		}
		CVector vec1(size1, arr1);
		cout << "Enter vec3 size - ";
		cin >> size2;
		double* arr2 = new double[size2];
		for (int i = 0; i < size2; i++) {
			cout << "Vec3 element [" << i << "] - ";
			cin >> arr2[i];
		}
		CVector2 vec2(size1, arr1);
		CVector3 vec3(size2, arr2);

		cout << "derived class CVector2 (out)" << endl;
		vec2.print();
		cout << "a pointer to a base class from a derivative CVector2" << endl;
		CVector* pVec2 = &vec2;
		pVec2->print();
		cout << "reference to the base class from the derivative CVector2" << endl;
		CVector& refVec2 = vec2;
		refVec2.print();
		cout << "derived class CVector3 (vout)" << endl;
		vec3.vprint();
		CVector* pVec1 = &vec3;
		cout << "a pointer to a base class from a derivative CVector3" << endl;
		pVec1->vprint();
		cout << "reference to the base class from the derivative CVector3" << endl;
		CVector& refVec1 = vec3;
		refVec1.vprint();
	}
	return 0;
}
