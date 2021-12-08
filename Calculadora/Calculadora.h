#include <vector>

class Calculadora
{
public:
	// iniciando construtor
	Calculadora();

	void Run();

	Calculadora& operator<<(Calculadora& calc);

private:
	void seePastResults();

	float firstNumber, secondNumber;

	std::vector<float> pastResults;

	void getEntries();

	enum CHOICE
	{
		INVALID = 0,
		ADD,
		SUBTRACT,
		MULTIPLY,
		DIVIDE,
		SEE_PAST
	}_choice;
};