#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Topic {
    private:

        string topicName;

        vector<string> questions;

    public:
        Topic(const string& name);

        void setTopicName(string name);

        void setQuestions(vector<string> questions);

        string getTopicName();

        vector<string> getQuestions();
};