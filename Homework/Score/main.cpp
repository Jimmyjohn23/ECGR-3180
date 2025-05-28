#include <iostream>
#include <vector>

void analyzeScores();

int main() {
    analyzeScores();
    return 0;
}
void analyzeScores() {
    int score = 0;
    int numScores;
    std::vector<int> totalScores;
    double averageScore;

    while (score != -1) {
        std::cin >> score;
        if (score >= 0 && score <= 100) {
            ++numScores;
            totalScores.push_back(score);
        } else{
            std::cerr << "Invalid Score";
        }
    }
    int total = 0;
    for(int i = 0; i < totalScores.size(); i++){
        total += totalScores[i];
    }
    std::cout << "Total scores entered: " << numScores << std::endl;
    std::cout << "Average score: " << total / numScores << std::endl;
}