#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {

    //// 1
    //int arr1[10];
    //long product1 = 1;
    //cout << "Enter 10 elements for array:\n";
    //for (int i = 0; i < 10; i++) {
    //    cout << "Element " << i + 1 << ": ";
    //    cin >> arr1[i];
    //    product1 *= arr1[i];
    //}
    //cout << "Array elements: ";
    //for (int i = 0; i < 10; i++) {
    //    cout << arr1[i] << " ";
    //}
    //cout << "\nProduct of array elements: " << product1 << "\n\n";

    // 2
    //srand(time(0));
    //int arr2[7];
    //int neg2 = 0, pos2 = 0;
    //for (int i = 0; i < 7; i++) {
    //    arr2[i] = rand() % 63 - 12; // Range [-12 ... +50]
    //    if (arr2[i] < 0) {
    //        neg2++;
    //    } else if (arr2[i] > 0) {
    //        pos2++;
    //    }
    //}
    //cout << "Generated array: ";
    //for (int i = 0; i < 7; i++) {
    //    cout << arr2[i] << " ";
    //}
    //cout << "\nNegative count: " << neg2;
    //cout << "\nPositive count: " << pos2 << "\n\n";

    //// 3
    //long arr3[7] = {12, 5, 8, 23, 14, 7, 10};
    //long sumEven3 = 0;
    //cout << "Array elements: ";
    //for (int i = 0; i < 7; i++) {
    //    cout << arr3[i] << " ";
    //    if (arr3[i] % 2 == 0) {
    //        sumEven3 += arr3[i];
    //    }
    //}
    //cout << "\nSum of even elements: " << sumEven3 << "\n\n";

    //// 4
    //int arr4[10];
    //int power4 = 1;
    //for (int i = 0; i < 10; i++) {
    //    power4 *= 2;
    //    arr4[i] = power4;
    //}
    //cout << "Direct order: ";
    //for (int i = 0; i < 10; i++) {
    //    cout << arr4[i] << " ";
    //}
    //cout << "\nReverse order: ";
    //for (int i = 9; i >= 0; i--) {
    //    cout << arr4[i] << " ";
    //}
    //cout << "\n\n";

    //// 5
    //int arr5[] = {-5, 12, -3, 0, -8, 15, -1};
    //int size5 = sizeof(arr5) / sizeof(arr5[0]);
    //cout << "initial array: ";
    //for (int i = 0; i < size5; i++) {
    //    cout << arr5[i] << " ";
    //}
    //for (int i = 0; i < size5; i++) {
    //    if (arr5[i] < 0) {
    //        arr5[i] = arr5[i] * -1;
    //    }
    //}
    //cout << "\narray with absolute values: ";
    //for (int i = 0; i < size5; i++) {
    //    cout << arr5[i] << " ";
    //}
    //cout << "\n\n";

}