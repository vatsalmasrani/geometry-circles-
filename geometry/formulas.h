#include <math.h>
int hypotenuse(int first_para, int second_para) {
	first_para = pow(first_para,2);
		second_para = pow(second_para,2);
		int third_param;
		
		
		third_param = first_para + second_para;
		
		
		int result;
		 return result = sqrt(third_param);		
}

int hypotenuse2(int new_first_para, int new_second_para) {
	new_first_para = pow(new_first_para,2);
	new_second_para = pow(new_second_para,2);
	int new_third_param;
	if (new_first_para > new_second_para) {
		new_third_param = new_first_para - new_second_para;
	}
	else {
		new_third_param = new_second_para - new_first_para;

	}
	int new_result;
	return new_result = sqrt(new_third_param);
}

