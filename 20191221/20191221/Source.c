class A
{
public:
	virtual void f()
	{
		cout << "A::f()" << endl;
	}
	void f() const {
		cout << "A::f() const" << endl;
	}
};
class B : public  A
{
public:
	void f(){
		cout << "B::f()" << endl;
	}
};
g(const A* a)
{
	a->f();
}
int main()
{
	A* a = new B();
	a->f();
	g(a);
	delete a;
}
