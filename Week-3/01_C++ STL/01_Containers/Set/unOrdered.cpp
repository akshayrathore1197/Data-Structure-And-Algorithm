#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;
int main()
{
   unordered_set<int>st;
   st.insert(55);
   st.insert(78);
   st.insert(25);
   st.insert(80);

   unordered_set<int>::iterator it = st.begin();
   while (it != st.end())
   {
    cout<<*it<<" ";
    it++;
   }

   
    
   
return 0;
}