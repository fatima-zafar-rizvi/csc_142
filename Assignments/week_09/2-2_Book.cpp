enum class Operation
{
    ADD,
    SUBTRACT,
    MULTIPLY,
    DIVIDE
};

class Calculator
{
public:
    Calculator(Operation operation);

private:
    Operation m_operation;
};