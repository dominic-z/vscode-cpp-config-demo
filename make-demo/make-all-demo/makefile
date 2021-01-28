# compile: src/fun2/bar.cpp src/fun1/foo.cpp
# 	gcc -o 
%.o : %.cpp
	@# 修改隐晦方法
	g++ -o $@ -c $< 
compile: src/func1/foo.o src/func2/bar.o
	g++ -o out/$@.out $^