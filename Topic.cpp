#include "Topic.hpp"
using namespace std;

Topic::Topic(const string& name) : topicName(name) {
            
}

void Topic::setTopicName(string name) {
    topicName = name;
}

void Topic::setQuestions(vector<string> questions) {
    for (int i = 0; i < 5; i++) {
        this->questions[i] = questions[i];
    }
}

string Topic::getTopicName() {
    return topicName;
}

vector<string> Topic::getQuestions() {
    return questions;
}