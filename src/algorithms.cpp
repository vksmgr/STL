//
// Created by hp on 4/2/19.
//
#include <iostream>
#include <vector>
#include "algorithms.h"
#include <algorithm>
using namespace std;

void printV(vector<int> v){
    cout<<endl;
    vector<int>::iterator itr1 = v.begin();
    vector<int>::iterator itr2 = v.end();

    for (vector<int>::iterator itr = itr1;  itr<itr2 ; ++itr) {
        cout << *itr <<" ";
    }
    cout <<endl;
}
/*some basic operation on the vectors*/
void basic(){
     vector<int> vec;
     vec.push_back(10);
     vec.push_back(20);
     vec.push_back(9);
     vec.push_back(99);
     vec.push_back(90);
     printV(vec);
     vector<int>::iterator itr = min_element(vec.begin(), vec.end());
     cout << "the minimum element : "<< *itr;
     sort(vec.begin(), vec.end());
     printV(vec);
}

/*This is the calling function*/
void algoRun(){
    basic();
}