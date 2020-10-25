#include <iostream>
#include <map>

int main()
{
    const unsigned int COUNT = 10000;

    std::map<int, int> myList;
   
    /*
    for (size_t i = 0; i < COUNT; i++)
    {

    }
    */

    map<char, int> mymap; 
  
    // Compare the key. 
    map<char, int>::key_compare 
        mycomp 
        = mymap.key_comp(); 
  
    mymap['a'] = 100; 
    mymap['b'] = 200; 
    mymap['c'] = 300; 
  
    cout << "mymap contain:\n"; 
  
    char highest = mymap.rbegin()->first; 
  
    // key value of last element 
  
    map<char, int>::iterator 
        it 
        = mymap.begin(); 
  
    do { 
        cout << it->first 
             << " => "
             << it->second 
             << '\n'; 
    } while (mycomp((*it++).first, highest)); 
  
    cout << '\n'; 
  
    return 0; 
}