run: first second

first:
	g++ first.cpp -o first
	first $(n) $(filename)

second:
	g++ second.cpp -o second
	second $(filename)
