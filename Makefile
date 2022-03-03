run: first second

first:
	g++ first.cpp -o first.exe
	first.exe $(n) $(filename)

second:
	g++ second.cpp -o second.exe
	second.exe $(filename)