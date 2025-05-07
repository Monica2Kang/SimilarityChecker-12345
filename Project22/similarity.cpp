#include <string>
#include <vector>

using std::string;
using std::vector;

class Similarity {
public:
	int checkLength(string input1, string input2) {
		int len1 = input1.length();
		int len2 = input2.length();
		if (len1 == len2) return 60;
		if (len1 == len2 * 2 || len1 * 2 == len2) return 0;

		 double gap, min;
		if (len1 > len2) {
			gap = len1 - len2;
			min = len2;
			
		}
		else {
			gap = len2 - len1;
			min = len1;
		}
		return (1- gap / min) * 60;
	}
};