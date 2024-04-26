﻿#include <iostream>
#include <chrono>
#include <vector>

#include "array.h"
#include "arrayMalloc.h"
//#include "linkedList.h"
#include "stackA.h"
#include "stackLinkedL.h"

using namespace std;

// ARRAY
long long pushTimeMeasureMallocArray(int value) {
	auto start = chrono::high_resolution_clock::now();
	for (size_t i = 0; i < 1000000; i++) {
		ArrayMalloc arr;
		for (size_t j = 0; j < value; j++) {
			arr.push(j);
		}
	}
	auto end = chrono::high_resolution_clock::now();
	auto duration = chrono::duration_cast<chrono::nanoseconds>(end - start);
	return duration.count() / 1000000;
}
long long pushTimeMeasureArray(int value) {
	auto start = chrono::high_resolution_clock::now();
	for (size_t i = 0; i < 1000000; i++) {
		Array arr;
		for (size_t j = 0; j < value; j++) {
			arr.push(j);
		}
	}
	auto end = chrono::high_resolution_clock::now();
	auto duration = chrono::duration_cast<chrono::nanoseconds>(end - start);
	return duration.count() / 1000000;
}
long long pushTimeMeasureVector(int value) {
	auto start = chrono::high_resolution_clock::now();
	for (size_t i = 0; i < 1000000; i++) {
		vector<int> arr;
		for (size_t j = 0; j < value; j++) {
			arr.push_back(j);
		}
	}
	auto end = chrono::high_resolution_clock::now();
	auto duration = chrono::duration_cast<chrono::nanoseconds>(end - start);
	return duration.count() / 1000000;
}

// LINKED LIST
//long long pushFTimeMeasureLinkedList(int value) {
//	auto start = chrono::high_resolution_clock::now();
//	for (size_t i = 0; i < 1000000; i++) {
//		LinkedList list;
//		for (size_t j = 0; j < value; j++) {
//			list.push_front(j);
//		}
//	}
//	auto end = chrono::high_resolution_clock::now();
//	auto duration = chrono::duration_cast<chrono::nanoseconds>(end - start);
//	return duration.count() / 1000000;
//}
//long long pushBTimeMeasureLinkedList(int value) {
//	auto start = chrono::high_resolution_clock::now();
//	for (size_t i = 0; i < 1000000; i++) {
//		LinkedList list;
//		for (size_t j = 0; j < value; j++) {
//			list.push_back(j);
//		}
//	}
//	auto end = chrono::high_resolution_clock::now();
//	auto duration = chrono::duration_cast<chrono::nanoseconds>(end - start);
//	return duration.count() / 1000000;
//}
//long long findMiddleTimeMeasureLinkedList(int value) {
//	auto start = chrono::high_resolution_clock::now();
//	for (size_t i = 0; i < 1000000; i++) {
//		LinkedList list;
//		for (size_t j = 0; j < value; j++) {
//			list.push_back(j);
//		}
//		list.findMiddle();
//	}
//	auto end = chrono::high_resolution_clock::now();
//	auto duration = chrono::duration_cast<chrono::nanoseconds>(end - start);
//	return duration.count() / 1000000;
//}
//long long findMiddleHareTimeMeasureLinkedList(int value) {
//	auto start = chrono::high_resolution_clock::now();
//	for (size_t i = 0; i < 1000000; i++) {
//		LinkedList list;
//		for (size_t j = 0; j < value; j++) {
//			list.push_back(j);
//		}
//		list.findMiddleHare();
//	}
//	auto end = chrono::high_resolution_clock::now();
//	auto duration = chrono::duration_cast<chrono::nanoseconds>(end - start);
//	return duration.count() / 1000000;
//}

// STACK
long long pushStackArray(int value) {
	auto start = chrono::high_resolution_clock::now();
	for (size_t i = 0; i < 1000000; i++) {
		StackArray arr;
		for (size_t j = 0; j < value; j++) {
			arr.push(j);
		}
	}
	auto end = chrono::high_resolution_clock::now();
	auto duration = chrono::duration_cast<chrono::nanoseconds>(end - start);
	return duration.count() / 1000000;
}
long long pushStackLinkedList(int value) {
	auto start = chrono::high_resolution_clock::now();
	for (size_t i = 0; i < 1000000; i++) {
		StackLinkedList list;
		for (size_t j = 0; j < value; j++) {
			list.push(j);
		}
	}
	auto end = chrono::high_resolution_clock::now();
	auto duration = chrono::duration_cast<chrono::nanoseconds>(end - start);
	return duration.count() / 1000000;
}
long long popStackArray(int value) {
	auto start = chrono::high_resolution_clock::now();
	for (size_t i = 0; i < 1000000; i++) {
		StackArray arr;

		for (size_t j = 0; j < value; j++) {
			arr.push(j);
		}
		for (size_t j = 0; j < value; j++) {
			arr.pop();
		}
	}
	auto end = chrono::high_resolution_clock::now();
	auto duration = chrono::duration_cast<chrono::nanoseconds>(end - start);
	return duration.count() / 1000000;
}
long long popStackLinkedList(int value) {
	auto start = chrono::high_resolution_clock::now();
	for (size_t i = 0; i < 1000000; i++) {
		StackLinkedList list;
		for (size_t j = 0; j < value; j++) {
			list.push(j);
		}
		for (size_t j = 0; j < value; j++) {
			list.pop();
		}
	}
	auto end = chrono::high_resolution_clock::now();
	auto duration = chrono::duration_cast<chrono::nanoseconds>(end - start);
	return duration.count() / 1000000;
}


int main()
{
	// ARRAY
	/*Array arr;
	for (int i = 0; i < 10; i++)
		arr.push(i);
	arr.display();

	cout << endl;*/

	// LINKED LIST
	/*LinkedList list1, list2;
	for (int i = 1; i < 10; i++) {
		list1.push_back(i);
		list2.push_back(i + 9);
	}*/

	/*LinkedList list3;
	list3.mergeList(list1, list2);
	list3.display();

	list3.removeTheNthNodeFromEnd(2);
	list3.display();*/

	//LinkedList list4;
	//list4.push_back(1);
	//list4.push_back(2);
	//list4.push_back(3);
	//list4.push_back(1);
	//
	//cout << boolalpha << list4.isPalindrome() << endl;
	//list4.removeDuplicates();
	//list4.display();

	/*list.display();
	list.reverse();
	list.display();*/

	/*list.makeCycle();
	cout << "CYCLE: " << boolalpha << list.isCycle() << endl;*/
	//list.display();

	// TESTING TIMES
	/*int count = 0;
	int tries = 100;
	int highestTime[4] = {};

	for (int i = 0; i < tries; i++) {
		long long malArrayTime = pushTimeMeasureMallocArray(i);
		long long arrayTime = pushTimeMeasureArray(i);
		long long vectorTime = pushTimeMeasureVector(i);
		long long linkedListFTime = pushFTimeMeasureLinkedList(i);
		long long linkedListBTime = pushBTimeMeasureLinkedList(i);

		if (malArrayTime < arrayTime || linkedListFTime < malArrayTime) {
			highestTime[0] = malArrayTime;
			highestTime[1] = arrayTime;
			highestTime[3] = linkedListFTime;
			if(vectorTime < malArrayTime)
				highestTime[2] = vectorTime;
			count = 0;
		}
		else count++;

		if (count == 10) {
			break;
		}
	}

	int highestTimeSize = sizeof(highestTime) / sizeof(highestTime[0]);
	for (int i = 0; i < highestTimeSize; i++) {
		if(i == 0)
			cout << "ArrayMalloc: ";
		else if (i == 1)
			cout << "Array: ";
		else if (i == 2)
			cout << "Vector: ";
		else if (i == 3)
			cout << "LinkedListF: ";
		else
			cout << "Unknown: ";
		cout << highestTime[i] << endl;
	}*/
	
	// Testing middle find linked lists
	/*long long findMiddle = findMiddleTimeMeasureLinkedList(100);
	long long arrayTime = findMiddleHareTimeMeasureLinkedList(100);

	cout << "Find Middle: " << findMiddle << endl;
	cout << "Find Middle Hare: " << arrayTime << endl;*/

	// we want to check which is faster: linked list or linked list with malloc
	/*for (int i = 0; i < 100; i++) {
		long long linkedListTime = pushFTimeMeasureLinkedList(i);
		long long linkedListMallocTime = pushTimeMeasureMallocLinkedList(i);

		cout << "LinkedList: " << linkedListTime << endl;
		cout << "LinkedListMalloc: " << linkedListMallocTime << endl;
	}*/

	// Testing stack
	long long stackArrayTime = 0;
	long long stackLinkedListTime = 0;
	long long popStackArrayTime = 0;
	long long popStackLinkedListTime = 0;

	for (int i = 0; i < 50; i++) {
		stackArrayTime += pushStackArray(i);
		stackLinkedListTime += pushStackLinkedList(i);
		popStackArrayTime += popStackArray(i);
		popStackLinkedListTime += popStackLinkedList(i);
		
		if (i == 49) {
			cout << "-----------------------------------" << endl;
			cout << "StackArray: " << stackArrayTime / 50 << endl;
			cout << "StackLinkedList: " << stackLinkedListTime / 50 << endl;
			cout << "PopStackArray: " << popStackArrayTime / 50 << endl;
			cout << "PopStackLinkedList: " << popStackLinkedListTime / 50 << endl;
			cout << "-----------------------------------" << endl;
		}
	}

	/*StackLinkedList list;
	list.push(1);
	list.push(2);
	list.push(3);
	list.display();

	list.pop();
	list.pop();
	list.pop();
	list.pop();
	list.display();*/

	getchar();
	return 0;
}
