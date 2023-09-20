//Dynamic Array
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;

    vector<int> a(5,1);//size is 5 and initialise all elements with 1
    cout<<"Print a"<<endl;
    for(int i:a){
        cout<<i<<" ";
    }
    cout<<endl;

    vector<int> last(a);//copy elements of a into last
    cout<<"Print last"<<endl;
    for(int i:last){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"Memory consumed: "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Memory consumed: "<<v.capacity()<<endl;

    v.push_back(2);
    v.push_back(3);
    cout<<"Memory consumed: "<<v.capacity()<<endl;//capacity doubles from 2 to 4
    cout<<"No of elements: "<<v.size()<<endl;

    cout<<"Element at index 2: "<<v.at(2)<<endl;

    cout<<"First Element: "<<v.front()<<endl;//first element
	cout<<"Last Element: "<<v.back()<<endl;//last element


    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }

    cout<<endl;

    v.pop_back();//pops the last element

    cout<<"After Pop"<<endl;

     for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    

    //on clearing vector size becomes 0 but capacity remains the same
    cout<<"Before Clear size is "<<v.size()<<endl;
    v.clear();
    cout<<"After Clear size is "<<v.size()<<endl;

}