#include <string>
#include <vector>

using std::string;
using std::vector;

const int MAX_LEN_POINT = 60;
const int MIN_LEN_POINT = 0;

class Similarity {
public:
	int checkLength(string input1, string input2) {
		int len1 = input1.length();
		int len2 = input2.length();
		if (len1 == len2) return MAX_LEN_POINT;
		if (len1 == len2 * 2 || len1 * 2 == len2) return MIN_LEN_POINT;

		 double gap, min;
		if (len1 > len2) {
			gap = len1 - len2;
			min = len2;
			return (1 - static_cast<double>(len1 - len2) / len2) * 60;
		}
		else {
			gap = len2 - len1;
			min = len1;
		}
		return (1- gap / min) * 60;
	}
};