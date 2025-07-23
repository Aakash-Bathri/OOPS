#include<bits/stdc++.h>
using namespace std;

template<typename T>
class genericsExample{
    vector<T> arr;
public: 
    genericsExample(vector<T> arr){
        this->arr = arr;
    }
    void add(T val){
        arr.push_back(val);
    }
    void deleteLastElement(){
        if(arr.size() == 0) cout << "We can't remove elements from empty vector" << endl;
        else arr.pop_back();
    }
    T getIndex(int index){
        if(index >= arr.size()){
            cout << "it is out of bound may have occured undefined behaviour" << endl;
            return arr.back();
        }
        return arr[index];
    }
    void printAll(){
        for(int i=0; i<arr.size(); i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    void displayType(){
        cout << "Type: " << typeid(T).name() << endl;
    }
};

template<typename T>
class calculator{
public:
    double add(T a, T b){
        return (double)a + (double)b;
    }
};

int main(){
    // here should be T and inside the paranthese we should mention the constructor requirement
    genericsExample<int> generics(vector<int>{});
    generics.add(5);
    generics.deleteLastElement();
    generics.add(6);
    generics.add(7);
    generics.add(8);
    generics.getIndex(2);
    generics.getIndex(5);
    generics.printAll();
    generics.displayType();


    genericsExample<string> strobj(vector<string>{"aakash", "test"});
    strobj.displayType();
    strobj.add("hello");
    strobj.printAll();


    // just created a class and used the methods of it
    calculator<int>* calc = new calculator<int>();
    cout << calc->add(2, 3) << endl;
}