#include<bits/stdc++.h>
using namespace std;

int main(){

 /*   // Declearing a vector
    vector <int> vec;

    // inserting values in a vector
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);

    // printing the 1st value of vector using begin()
    cout<<"1st Element: "<<*vec.begin()<<endl;

    // printing the last value of vector using begin()
    cout<<"last Element: "<<*(vec.end()-1)<<endl; //returns garbage value for *vec.end()

    // Checking if vector is empty
    cout<<"Is vector empty: "<<vec.empty()<<endl;

    // Clear contents of vector
    vec.clear();

    // Checking if vector is empty
    cout<<"Is vector empty: "<<vec.empty()<<endl;
*/

    queue <int> que_name; // Decleare a queue
    for (int i = 0; i < 5; i++) {//This loop takes input and adds it to queue (at end)
        int temp; cin >> temp;
        que_name.push(temp);
    }
    cout<<que_name.size();

    //This prints the element of queue and clears the queue at the end of loop
    while (!que_name.empty()) {
        cout << que_name.front() << " ";
        que_name.pop();
    }

    cout<<que_name.size();
    return 0;
}