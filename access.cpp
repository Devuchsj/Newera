#include<iostream>
#include<string.h>
using namespace std;

class AccessModifiers
{
private:
  int privateData;
  int getPrivateData()
  {
    return privateData;
  }


public:
  int publicData;
  int getPublicData()
  {
    return publicData;
  }


void setPrivateData(int data)
  {
    privateData = data;
  }


void setPublicData(int data)
  {
    publicData = data;
  }
};


int main()
{

  cout << "Public Data: " << obj.getPublicData() << endl;



  cout << "Private Data: " << obj.getPrivateData() << endl;


return 0;
}
