//
// Created by hp on 2/2/19.
//
#include <iostream>
#include <vector>
#include <algorithm>
#include "stl.h"
#include <deque>
#include <set>
#include <map>
#include <stack>


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


/* Associative containers*/
void sets(){
    set<int> set1;
    set1.insert(10);
    set1.insert(2);
    set1.insert(20);

    set<int>::iterator it;
    pair<set<int>::iterator, bool> ret;
    ret = set1.insert(2);

    if (ret.second == false)
        it = ret.first;
    set1.insert(it, 99);
    cout << *set1.find(2);

    set1.erase(99);
    set1.erase(it);

    /* Multiset */
    multiset<int> mulSet;
    mulSet.insert(10);
    mulSet.insert(10);
    mulSet.insert(20);
}

/* Map and multimaps
 * They do not allow to modify the keys
 * */

void maps(){
    map<int, char> mymap;
    mymap.insert(pair<int, char> (1, 'a'));
    mymap.insert(make_pair(2, 'b'));
    mymap.insert(make_pair(12, 'b'));
    mymap.insert(make_pair(22, 'b'));

    //    iterating over the map
    map<int, char>::iterator itr1 = mymap.begin();
    map<int, char>::iterator itr2 = mymap.end();

    for (map<int, char>::iterator itr = itr1; itr != itr2; ++itr)
        cout << (*itr).first << " => " << (*itr).second <<endl;

}

void basicDS(){
    stack<int> st;
    st.push(10);
    st.push(10);
    st.push(100);

    auto ele = st.top();
    cout << "the element of the top in the stack : "<< ele;
}



void runMe() {
//    cout << square(10) <<endl;
//    cout << square(10.1) << endl;
//    vecHello();
//    deQHello();
//    sets();
//     maps();
    basicDS();
}



