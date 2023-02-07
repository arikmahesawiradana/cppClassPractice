#include <iostream>

using namespace std;

class school {
	public:
		string pen;
		string eraser;
		int num;
};

int main(){
	school obj1;
	school obj2;
	obj1.pen = "panda";
	obj1.eraser = "hakyu";
	obj1.num = 19;
	obj2.pen = "haaaa";
	obj2.eraser = "tuuu";
	obj2.num = 12;
	cout << obj1.pen << " " << obj1.eraser << " " << obj1.num << "\n";
	cout << obj2.pen << " " << obj2.eraser << " " << obj2.num << "\n";
}
