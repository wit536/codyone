/*#include<iostream>
void main()  //Ascii×ª³ÌÐò
{
char a = 'a';
	std::cout << (int)a << std::endl;
	}*/

/*#include<iostream>
int main()
{
	std::cout<< sizeof(int) <<std::endl;
}*/

/*#include<iostream>
void main()
{
	int sum = 42;
	for(int i = 0; i != 10; ++i)
		sum+=i;

	std::cout<< sum << '\t' << i <<std::endl;
}*/
/*#include<iostream>
using std::endl;
void main()
{
	int i = 1;
    int &j = i;
	i = i + 2;
	j++;
	std::cout << i << j << std::endl;
}*/
/*#include<iostream>
class Foo
{
}
int main()
{
	return 0;
}*/

   
/*#include<iostream>
#include<string> 
using std::cout;
using std::cin;
using std::endl;
using std::string;
void main()
{
	string s(4,'c');
	cout << s << endl;
}*/


/*#include<iostream>
#include<string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
int main()
{
	string word;
	while(cin >> word)
		cout << word << endl;
	return 0;
}*/



/*#include <iostream>
#include <string>
using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;//using namespacce std;
int main()
{
	string line;
	while (getline(cin , line))
		cout << line;
	return 0;
}*/ 

/*#include <iostream>
#include <string>
using namespace std;
int main()
{
	string st("The expense of spirit\n");
	cout << st << "size:" << st.size() << endl;
	return 0;
}*/

/*#include <iostream>
#include <string>
using namespace std;
int main()
{
	string s = ("hello");
	string h = ("world");
	string t = s + "hello" + ",";
	string k = "hello" + "," +h
	cout<< t << endl;
	return 0;   
}*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string h;
	while (getline(cin,h)) 
	cout << h << h.size() << endl;
	//return 0;
}
/*#include <iostream>
#include <string>
using namespace std;
int main()
{
	string h;
	while(cin>>h)
		cout << h << h.size() << endl;
	return 0;
}*/