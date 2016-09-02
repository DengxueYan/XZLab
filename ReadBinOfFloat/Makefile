all: run

ReadBinOfFloat: ReadBinOfFloat.c
	@gcc -o $@ $^

run : ReadBinOfFloat
	@./ReadBinOfFloat

clean:
	rm -rf ReadBinOfFloat
