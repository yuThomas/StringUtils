#include <cstring>
#include <sstream>

class StringUtils
{
public:
//erase blanks of the both side of the string
	static string trim(const string &str);
  
  //transfer int to string
	static string IntToString(int num);

 //detect whether startswith character specified
	static bool startsWith(char s);

 //detect whether endswith character specified
	static bool endsWith(char s);
};
