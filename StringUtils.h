#include <cstring>
#include <sstream>

class StringUtils
{
public:
//erase blanks of the both side of the string
	static string trim(const string &str);
  
  //transfer int to string
	static string IntToString(int num);
};
