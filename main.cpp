#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
//------------------------------------------------------------------
    int TwoSums (vector<int> nums, int target,int vietos[],int n);
//------------------------------------------------------------------
int main() {

    vector<int> nums;
    nums = {2,7,11,15};
    int n = nums.size();        // masyvo ilgis
    int target = 9;
    int vietos[] = {0, 0};        // sukuriamas masyvas, kur bus laikomas atsakymas
    TwoSums (nums,  target, vietos,n);  // F-jos kreipinys
    cout << vietos[0] << " " << vietos[1];  // Isvedimas
    return 0;
}
int TwoSums (vector<int> nums , int target,int vietos[],int n) {

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (nums[i] + nums[j] == target && 2 <= n <= pow(10,4) && pow(-10,9) <= nums[i] <= pow(10,9) && pow(-10,9) <= target <= pow(10,9)) {          //Tikrinama, ar vieno skaiciaus ir sekancio suma yra lygi siuo atveju 9
                vietos[0] = i;                          // kai salyga tenkina, i vietos masyvo pirmaja vieta idedame pirmojo skaiciaus vietos numeri
                vietos[1] = i + 1;                      // i vietos masyvo antra vieta idedame antro skaiciaus esama vietos numeri
                return *vietos;                         // grazinamas atsakymas i main.
        }

         }
    }
}