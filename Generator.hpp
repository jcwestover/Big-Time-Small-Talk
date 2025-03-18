#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Generator {
    private:
        vector<string> topics;

    public:
        Generator();

        void setTopics(vector<string> topics)
        {
            for (int i = 0; i < 5; i++) {
                this->topics[i] = topics[i];
            }
        }

        vector<string> getTopics()
        {
            return topics;
        }
};