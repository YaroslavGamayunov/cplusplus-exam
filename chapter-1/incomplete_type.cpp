class A;

class B {
    A someField;
};

// this code produces compilation error because class A is declared but not yet defined and B uses it as a field