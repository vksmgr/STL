//
// Created by hp on 4/2/19.
//

#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include "iterators.h"
using namespace std;


/* There are 5 types of the iterators*/
/*1. Random iterators: iterators to the Vector, dequeue, array
 *  it can acess elements int he container randomly
 * */
void randomItr(){
    vector<int> v ;
    v.push_back(10);
    v.push_back(10);
    v.push_back(10);
    v.push_back(10);
    vector<int>::iterator itr;
    itr = v.begin();
    cout <<*itr <<endl;

    cout<< *(itr+3) << endl;

    /* i can compair two iterators*/
    if (itr > itr+3) cout << "greater";
    /* can preincrement and decreament*/
    cout << *(++itr) << endl;
}

void printMe(int elem){
    cout << "The element form the for each loop : "<<elem <<endl;
}
/* thses are the second type of the iterator
 * we can increment and dcrement only
 * no arithmentic manupulation and comarison*/
void bidirectional(){
    list<int> li;
    li.push_back(10);
    li.push_back(20);
    li.push_back(30);
    li.push_front(40);

    list<int>::iterator itr = li.begin();
    cout <<*itr << endl;
    cout << *(++itr) << endl;

    /* For_each() function*/
    for_each(li.begin(), li.end(), printMe);
}

/*
 * Rest of the
 *  3. forward Iterator
 *  4. inout iterator
 *  5. Output iterator
 *
 * */




/*Main function of this file*/
void run(void){
//    randomItr();
    bidirectional();
}











