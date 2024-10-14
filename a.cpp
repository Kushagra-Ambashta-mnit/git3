#include <bits/stdc++.h>
#define n 3

using namespace std;

int dotProduct(int vA[], int vB[])
{

    int product = 0;

    // Loop for calculate dot product
    for (int i = 0; i < n; i++)

        product = product + vA[i] * vB[i];
    return product;
}


int main()
{
    int vA[] = { 4, -2, 3 };
    int vB[] = { 1, 3, 7 };
    cout << dotProduct(vA, vB) << endl;

	cout << "ola"; 
}

