#include <regex>
#include <cstdio>
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <random>
#include <algorithm>
#include <stdio.h>
using namespace std;
class quiz{
	static vector<int> make_rand_array(int min,int max);
	string save_file_path;
	struct problem{
		string question;
		string answer;
		bool issucceeded;
	};
	public:
		vector<problem>problems;
		quiz(string name);
		void question();
		bool allsucceeded();
		void save(string file_path);
		void reset_save();

};