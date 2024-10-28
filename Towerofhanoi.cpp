#include <iostream>
using namespace std;

void towerOfHanoi(int n, char from_rod, char to_rod, char aux_rod) {
    // Base case: If there's only one disk, move it from the source rod to the destination rod
    if (n == 1) {
        cout << "Move disk 1 from rod " << from_rod << " to rod " << to_rod << endl;
        return;
    }

    // Move n-1 disks from the source rod to the auxiliary rod
    towerOfHanoi(n - 1, from_rod, aux_rod, to_rod);

    // Move the nth disk from the source rod to the destination rod
    cout << "Move disk " << n << " from rod " << from_rod << " to rod " << to_rod << endl;

    // Move the n-1 disks from the auxiliary rod to the destination rod
    towerOfHanoi(n - 1, aux_rod, to_rod, from_rod);
}

int main() {
    int n;  // Number of disks
    cout << "Enter the number of disks: ";
    cin >> n;

    // Call the recursive function to solve the Tower of Hanoi
    towerOfHanoi(n, 'A', 'C', 'B');  // 'A' is the source rod, 'C' is the destination rod, 'B' is the auxiliary rod

    return 0;
}
