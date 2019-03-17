#include<iostream>
int main(){
	int currVal = 0, val = 0;
	if(std::cin>>currVal){
		int cnt =1;
		while(std::cin >> val){	//输入EOF，退出循环 window Ctrl+z linux Ctrl+d 
			if(val == currVal){
				++cnt;
			}else{
				std::cout << currVal << " occurs "
				  		  << cnt << " times " << std::endl;
			    currVal = val;
			    cnt = 1;
			}//if
		}//while
		std::cout << currVal << " occurs "
		          << cnt << " times " << std::endl;
	}//最外层if 
	return 0;
}

/*
输入的值全都相等，本节程序会输出单行
输入的值没有重复值，输出每一个值
*/
