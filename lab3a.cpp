#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <vector>

using namespace std;
int main()
{
    int weight;
    ifstream inFile("file.in",ios::in);
    if(!inFile)
    {
        cerr<<"Failed opening"<<endl;
        exit(1);
    }
    
    ofstream outFile("file.out",ios::out);
    if(!outFile)
    {
        cerr<<"Failed opening"<<endl;
        exit(2);
    }
    
    const int size = 9;
    vector<int> vec(size);
    int insert,move;
    int arr[9];   
 
   for(int i=0;i<9;i++)
{
inFile>>arr[i];
}

for(int i=0;i<9;i++)
{
vec.at(i)=arr[i];
}
    
    for(int next=1;next<size;next++)
    {
        insert=vec.at(next);
        move=next;
        while((move>0)&&(vec.at(move-1)>insert))
        {
            vec.at(move)=vec.at(move-1);
            move--;
        }
         vec.at(move)=insert;
    }

int sum=0;
    for(int i=8;i>3;i--)
{sum=vec.at(i)+sum;}

    outFile<<sum<<endl;

    



    
    
    
}
