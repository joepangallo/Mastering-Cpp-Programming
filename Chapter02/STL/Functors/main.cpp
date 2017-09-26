#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <forward_list>
#include <iterator>
#include <algorithm>
using namespace std;

// Use vector,deque,list,forward_list
template<typename T,template<typename Elem, typename = std::allocator<Elem>> class Cont = std::deque>
class Printer
{
public:
       Printer(const Cont<T>& c) : elems(c)
       {
              for_each(begin(elems), end(elems), [](T elem) {cout << elem << "\t"; });
       }
       Printer() = default;
 
private:
       Cont<T> elems;
};
 
 
int main() {
 
       std::vector<int> v = { 10, 20, 30, 40, 50 };
       Printer<int,std::vector> p(v);
      
       return 0;
}
