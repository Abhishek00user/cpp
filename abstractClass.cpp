class AbstractBase {
public:
    virtual void pureVirtualFunction() = 0; //needs to be overridden in the derived classes
};
class Derived : public AbstractBase {
public:
    void pureVirtualFunction() override {
        // Provide implementation for the pure virtual function
    }
};
