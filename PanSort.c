// C++ implementation of Bogo Sort
#include <bits/stdc++.h>
using namespace std;

// To check if array is sorted or not
bool isSorted(int a[], int n)
{
	while (--n > 0)
		if (a[n] < a[n - 1])
			return false;
	return true;
}

// To generate permutation of the array
void shuffle(int a[], int n)
{
	for (int i = 0; i < n; i++)
		swap(a[i], a[rand() % n]);
}

// Sorts array a[0..n-1] using Bogo sort
void bogosort(int a[], int n)
{
	// if array is not sorted then shuffle
	// the array again
	while (!isSorted(a, n))
		shuffle(a, n);
}

// prints the array
void printArray(int a[], int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << " ";
	cout << "\n";
}

// Driver code
int main()
{
	int a[] = { 3, 2, 5, 1, 0, 4 };
	int n = sizeof a / sizeof a[0];
	bogosort(a, n);
	printf("Sorted array :\n");
	printArray(a, n);
	return 0;
}


// C# implementation of Bogo Sort
using System;

class GFG {
	// To Swap two given numbers
	static void Swap<T>(ref T lhs, ref T rhs)
	{
		T temp;
		temp = lhs;
		lhs = rhs;
		rhs = temp;
	}

	// To check if array is sorted or not
	public static bool isSorted(int[] a, int n)
	{
		int i = 0;
		while (i < n - 1) {
			if (a[i] > a[i + 1])
				return false;
			i++;
		}
		return true;
	}

	// To generate permutation of the array
	public static void shuffle(int[] a, int n)
	{
		Random rnd = new Random();
		for (int i = 0; i < n; i++)
			Swap(ref a[i], ref a[rnd.Next(0, n)]);
	}

	// Sorts array a[0..n-1] using Bogo sort
	public static void bogosort(int[] a, int n)
	{
		// if array is not sorted then shuffle
		// the array again
		while (!isSorted(a, n))
			shuffle(a, n);
	}

	// prints the array
	public static void printArray(int[] a, int n)
	{
		for (int i = 0; i < n; i++)
			Console.Write(a[i] + " ");
		Console.Write("\n");
	}

	// Driver code
	static void Main()
	{
		int[] a = { 3, 2, 5, 1, 0, 4 };
		int n = a.Length;
		bogosort(a, n);
		Console.Write("Sorted array :\n");
		printArray(a, n);
	}
	// This code is contributed by DrRoot_
}
