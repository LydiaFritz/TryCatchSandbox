#ifndef MYHEADER_H
#define MYHEADER_H

class A {
private:
	int a;
public:
	A() { a = 1;}
	virtual int getValue() { return a; }
};
class B : public A {
private:
	int b;
public:
	B() :A() { b = 2; }
	int getValue() { return b; }
};
class C : public A {
private:
	int c;
public:
	C() :A() { c = 3;}
	int getValue() { return c; }
};


#endif
