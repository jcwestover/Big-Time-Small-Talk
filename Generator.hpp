#ifndef GENERATOR_HPP
#define GENERATOR_HPP


#include <iostream>
#include <string>
#include <vector>
#include "Topic.hpp"

using namespace std;

class Generator {
    private:
        vector<Topic> topics;

    public:
        Generator();

        void addTopic(const Topic& topic);

        void displayTopics() const;

        string generateQuestion(int topicIndex) const;

};

#endif // GENERATOR_HPP