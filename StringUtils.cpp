string StringUtils::trim(const string &str)
{
	int len = str.length();
	int left;

	int i=0;
	while(str[i]==' ' || str[i] == '\t') ++i;
	left = i;

	i=len-1;
	while(str[i] == ' ' || str[i] == '\t') --i;

	return str.substr(left, i-left+1);
}


string StringUtils::IntToString(int num)
{
	ostringstream s;
	s << num;
	return s.str();
}
