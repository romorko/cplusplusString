#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
using std::string;
using std::cout;
int main()
{
    std::string meno("Roman");
    string meno1="Tibor";
    string pismena(15,'*');
    string cast("polnohospodar",1,10);
    //std::cout<<cast;
    //std::getline(std::cin,meno);
    //std::cout<<meno;
    //std::getline(std::cin,meno,':');
    //std::cout<<meno;
    meno+=" pridal som";
/*    for(int i=0;i<meno.length();++i)
    {
        std::cout<<meno[i]<<" ";
    }
    for(auto i:meno)
    {
        std::cout<<i<<" ";
    }*/
    //std::for_each(meno.begin(),meno.end(),[](char &i){ i=std::toupper(i);});
    std::copy(meno.begin(),meno.end(),std::ostream_iterator<char>(std::cout," "));
/*    auto nasiel=meno.find('a');
    cout<<nasiel;
    nasiel=meno.find("man");
    cout<<nasiel;
    if((nasiel=meno.find("men"))==string::npos)
    {
        cout<<"nenasiel som";
    }
    else
    {
        cout<<"Nasiel som na pozicii "<<nasiel;
    }*/
    size_t od=0;
    auto kde=meno.find_first_of("aeiouyAEIOUY");
    cout<<kde;
    return 0;
}
