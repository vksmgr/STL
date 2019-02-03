//
// Created by hp on 2/2/19.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include "stl.h"
#include <deque>


using namespace std;

template<typename T>

T square(T x) {
    return x * x;
}

/*Vectors */
void vecHello() {
    vector<int> v;

    v.push_back(4);
    v.push_back(1);
    v.push_back(40);

    cout << "The size of the vector is : " << v.size() << endl;

    /*Acessing the Vector elements*/
    cout << v[2] << endl;
    cout << v.at(2) << endl;

    /*Iterating over the vectors*/
    vector<int>::iterator iterator1 = v.begin();
    vector<int>::iterator iterator2 = v.end();
    for (vector<int>::iterator itr = iterator1; itr < iterator2; ++itr) {
        cout << " " << *itr << " ";
    }


    sort(iterator1, iterator2);
    /*This will work c++11 and above*/
/*
    for (it: v){
        cout << it;
    }
*/
}


/* Hello Deque*/
void deQHello(){
    deque<int> dq = {4, 5, 6};
    deque<int>::iterator iterator1 = dq.begin();
    deque<int>::iterator iterator2 = dq.end();

    /*Printing the elements in the iterator*/
    for(deque<int>::iterator itr = iterator1; itr < iterator2; ++itr ){
        cout << " " <<*itr ;
    }
    cout << endl;
    // pusing some elements to the iterator
    dq.push_back(10);
    dq.push_front(20);


    /*Printing the elements in the iterator*/
    deque<int>::iterator iterator11 = dq.begin();
    deque<int>::iterator iterator22 = dq.end();
    for(deque<int>::iterator itr = iterator11; itr < iterator22; ++itr ){
        cout << " " <<*itr ;
    }
}

void runMe() {
//    cout << square(10) <<endl;
//    cout << square(10.1) << endl;
//    vecHello();
    deQHello();
}


