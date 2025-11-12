g++ -std=c++17 -c .\main.cpp -o .\main.o
g++ -std=c++17 -c .\math.cpp -o .\math.o
g++ .\main.o .\math.o -o .\program_result.exe
