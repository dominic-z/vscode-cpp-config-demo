#隐含规则
INCL=-I${HOME}/incl

.SUFFIXES: .cpp .c
.cpp.o:
	g++ ${INCL} -c ${HOME}/$<

.c.o:
	gcc ${INCL} -c $<

#C++编译
hellocpp:hellocpp.o
	echo "开始编译"
	g++ -o hellocpp hellocpp.o
	rm -f hellocpp.o
	mv hellocpp ${HOME}/bin
	echo "编译结束"

#C编译
# hello:hello.o
# 	echo "开始编译"
# 	gcc -o hello hello.o
# 	rm -f hello.o
# 	mv hello ${HOME}/bin
# 	echo "编译结束"