# cpp-examples

Example code provided by Michael Dawson's [Beginning C++ Through game Programming, 4th edition](https://www.amazon.com/Beginning-C-Through-Game-Programming/dp/1305109910). Code may be modified from origional.


## Compiling C++ in the Terminal
1. You'll need to have g++ installed. Check if it's installed with `g++ --version`, install it with `sudo apt install g++`.
2. Complie with `g++ name_of_file.cpp -o output_name`. Where:
	* `name_of_file.cpp` is the path to your source code file.
	* `-o output_name` is the output name of the executable file. This step is optional, if unused the output file will be called `a.out`.
3. Run the file with `/output_name`, where `output_name` is the name of the compiled file, like a.out