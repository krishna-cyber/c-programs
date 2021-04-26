#include<iostream>
using namespace std;
#include<string.h>
#include<stdlib.h>
// for strcpy() stcat()
// for exit()

class string
{
  private:
  const sz=80;
  char str[sz];
  
  public:
   string()
   {
     strcpy(str,"");
   }
  string(char s[])
  {
    strcpy(str,s);
  }
  void display()
  {
    cout<<"string is:"<<str<<endl;
  }
  
  string operator+ (string ss) const
  {
    string temp;
    if(strlen(str)+ss.strlen(str)<sz)
    {
      strcpy(temp.str,ss.str);
      strcat(str,temp.str);
    }
    else
    {
      cout<<"string overflow"<<endl;
    }
  }
};

// main function

int main()
{
  string s1="hello";
  string s2="world";
  string s3;
  s3=s1+s2;
  s3.display();
  return 0;
}
