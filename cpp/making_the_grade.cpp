#include <array>
#include <string>
#include <vector>

// Round down all provided student scores.
std::vector<int> round_down_scores(std::vector<double> student_scores) {
    // TODO: Implement round_down_scores
    std::vector<int> rounded{};
    for(const auto &i: student_scores) rounded.push_back(static_cast<int>(i));
    return rounded;
}


// Count the number of failing students out of the group provided.
int count_failed_students(std::vector<int> student_scores) {
    // TODO: Implement count_failed_students
    int count{0};
    for(const auto &i: student_scores) if(i < 41) count++;
    return count;
}

// Determine how many of the provided student scores were 'the best' based on the provided threshold.
std::vector<int> above_threshold(std::vector<int> student_scores, int threshold) {
    // TODO: Implement above_threshold
    std::vector<int> above_threshold;
    for(const auto &score: student_scores) if(score >= threshold) above_threshold.push_back(score);
    return above_threshold;
}

// Create a list of grade thresholds based on the provided highest grade.
std::array<int, 4> letter_grades(int highest_score) {
    // TODO: Implement letter_grades
    std::array<int, 4> grades;
    grades.fill(0);
    int range = (highest_score - 40) / 4;
    for(int i = 0; i < 4; i++){
        grades.at(i) = i * range + 41;
    }
    return grades;
}

// Organize the student's rank, name, and grade information in ascending order.
std::vector<std::string> student_ranking(std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement student_ranking
    std::vector<std::string> student_ranks;
    std::array<std::string, 2> format_container {". ", ": "};
    int i = 1;
    std::string parser{};
    for(const auto &score: student_scores){
        parser = std::to_string(i) + format_container.at(0) + student_names.at(i-1) + format_container.at(1) + std::to_string(score);
        student_ranks.push_back(parser);
        i++;
    }
    return student_ranks;
}

// Create a string that contains the name of the first student to make a perfect score on the exam.
std::string perfect_score(std::vector<int> student_scores, std::vector<std::string> student_names) {
    // TODO: Implement perfect_score
    int index{0};
    for(const auto &iter1: student_scores){
        if(iter1 == 100) return student_names.at(index);
        index++;
    }
    return "";
}