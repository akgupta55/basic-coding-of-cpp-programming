#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main()
{

    //creation
    // unordered_map<string,int>m;
    map<string,int>m;//read line no. 60 pls

    //insertion

    //1
    pair<string,int> p = make_pair("ajay",3);
    m.insert(p); 

    //2
    pair<string,int> pair2("kumar",2);
    m.insert(pair2);

    //3
    m["mera"]=1;

    //what will happen? ans. is it update privious value because each creation is unique
    m["mera"]=2;

    //search
    cout<<m["mera"]<<endl; 
    cout<<m.at("ajay")<<endl;

    cout<<m["unknownKey"]<<endl;
    cout<<m.at("unknownKey")<<endl; 

    //size
    cout<<m.size()<<endl;

    //to check presence 
    cout<<m.count("bhai")<<endl; 
    cout<<m.count("kumar")<<endl;

    //erase
    m.erase("kumar");
    cout<<m.size()<<endl ;

    //access
    
    
    //1
    // for(auto i:m){
    //     cout<<i.first<<" "<<i.second<<endl;
    // }

    //2
    // unordered_map<string,int> :: iterator it = m.begin();

    // while(it != m.end()){
    //     cout<<it->first<<" "<<it->second<<endl;
    //     it++;
    // }//the list is shown in random order for squencial order we use map
    // but time complexity of map is 0(logn) for insertion and deletion and searching
    // and for unordered_map time complexity is constant time 0(1)


    map<string,int> :: iterator it = m.begin();

    while(it != m.end()){
        cout<<it->first<<" "<<it->second<<endl;
        it++;
    }




    return 0;
}