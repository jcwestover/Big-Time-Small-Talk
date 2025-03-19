#include "Generator.hpp"
#include <cstdlib> 
#include <ctime>
#include <iostream>

using namespace std;

Generator::Generator() {
    srand(time(0));
}

void Generator::addTopic(const Topic& topic) {
    topics.push_back(topic);
}

void Generator::displayTopics() const {
    cout << "Available Topics:" << endl;
    for (int i = 0; i < topics.size(); ++i) {
        cout << i + 1 << ". " << topics[i].getTopicName() << endl;
    }
}

string Generator::generateQuestion(int topicIndex) const {
    if (topicIndex < 1 || topicIndex > topics.size()) {
        return "Error: Invalid topic";
    }

    Topic selectedTopic = topics[topicIndex - 1];
}

