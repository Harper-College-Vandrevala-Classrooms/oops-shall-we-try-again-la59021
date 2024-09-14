#include <string>
using namespace std;

class Prompt {
    public:
        Prompt();
        void setupPrompt();

    private:
        int lowerBound = 0;
        int upperBound = 100;
        string inputPrompt;
        string invalidResponse;

        void promptUser();
        bool checkValidity(int input);
};
