#pragma once
public ref class CodeCls
{
public:
    // Managed wrappers are generally less concerned 
    // with copy constructors and operators, since .NET will
    // not call them most of the time.
    // The methods that do actually matter are:
    // The constructor, the "destructor" and the finalizer
    Logic();
    ~Logic();
    !Logic();

    int Get();

    void Destroy(); // Helper function
private:
    // Pointer to our implementation
    Cpp::Logic* _impl;
};

