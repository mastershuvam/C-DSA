/*

Problem Statement: Allocate Minimum Pages
You are given n books and m students. Each book has a certain number of pages, and the books are arranged in a row. The task is to allocate all books to the students in a way that each student gets at least one book, and the maximum number of pages assigned to any student is minimized.

You must allocate books in the given order, meaning a student cannot take books that are out of sequence.
If it is not possible to allocate books under the given conditions, return -1.

link-> https://www.naukri.com/code360/library/book-allocation-problem 

*/



#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>

using namespace std;

bool isPossible(int pages[], int n, int m, int possPages) {
    int studentCnt = 1, pageSum = 0;

    for (int i = 0; i < n; i++) {
        if (pages[i] > possPages) return false;
        
        if (pageSum + pages[i] > possPages) {  
            studentCnt++;
            pageSum = pages[i];  
            if (studentCnt > m) return false;
        } else {
            pageSum += pages[i];
        }
    }
    return true;
}

int allocateBooks(int pages[], int n, int m) {
    if (m > n) return -1;
    
    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        totalSum += pages[i];  
    }
    
    int start = *max_element(pages, pages + n);
    int end = totalSum;
    int result = -1;  
    
    while (start <= end) {
        int mid = start + (end - start) / 2; 
        
        if (isPossible(pages, n, m, mid)) {
            result = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return result;
}

int main() {
    int n;
    cout << "Enter no of books: ";
    cin >> n;
    
    int m;
    cout << "Enter no of students: ";
    cin >> m;
    
    int pages[n];
    cout << "Enter pages of each book: ";
    for (int i = 0; i < n; i++) {
        cin >> pages[i];
    }
    
    int result = allocateBooks(pages, n, m);
    
    if (result == -1) 
        cout << "Not possible to allocate books." << endl;
    else
        cout << "The minimum value of the maximum number of pages in book allocation is: " << result << endl;
    
    return 0;
}
