/**
 * @file main.cpp
 * @author Ramtin Kosari (ramtinkosari@gmail.com)
 * @brief Check Blood Type According to Parents Blood Types
 * @date 2023-03-20
 */
/**
 * @brief Task Given Data
 * @note There are 8 Types of Blood Type
 * @note O-, O+, A-, A+, B-, B+, AB-, AB+
 * @note There are 3 Types of Matter
 * @note A, B, +
 */
# define __TASK_DATA
//-- Include Needed Libraries
# include <iostream>
# include <string>
# include <vector>
/**
 * @brief Structure to Store Father's Blood Type
 */
struct Father {
    /**
     * @brief Literal Part of Blood Type
     */
    std::string type;
    /**
     * @brief Symbolic Part of Blood Type
     */
    bool plus;
};
/**
 * @brief Structure to Store Mother's Blood Type
 */
struct Mother {
    /**
     * @brief Literal Part of Blood Type
     */
    std::string type;
    /**
     * @brief Symbolic Part of Blood Type
     */
    bool plus;
};
/**
 * @brief Structure to Store Child's Blood Type
 */
struct Child {
    /**
     * @brief Literal Part of Blood Type
     */
    std::string type;
    /**
     * @brief Symbolic Part of Blood Type
     */
    bool plus;
};

/**
 * @brief Vector to Store Answers
 */
std::vector<std::string> answers;

/**
 * @brief Check Blood Types
 * @param father Father's Blood Type
 * @param mother Mother's Blood Type
 * @param child Child's Blood Type
 * @return true 
 * @return false 
 */
bool checkBloodTypes(Father &father, Mother &mother, Child &child) {
    if (child.type == "O") {
        if (child.plus == false) {
            return true;
        } else {
            if (father.plus == true || mother.plus == true) {
                return true;
            } else {
                return false;
            }
        }
    } else {
        if (child.type == "AB") {
            if ((father.type == "B" && mother.type == "A") || (father.type == "A" && mother.type == "B") || (father.type == "AB") || (mother.type == "AB")) {
                if (child.plus == father.plus || child.plus == mother.plus) {
                    return true;
                } else {
                    return false;
                }
            } else {
                return false;
            }
        } else {
            if (child.type == father.type || child.type == mother.type) {
                if (child.plus == father.plus || child.plus == mother.plus) {
                    return true;
                } else {
                    return false;
                }
            } else {
                return false;
            }
        }
    }

    bool validSign;
    if (child.plus == father.plus || child.plus == mother.plus) {
        validSign = true;
    } else {
        validSign = false;
    }
    if (child.type != "O") {
        if (validSign) {
            if (child.type == father.type || child.type == mother.type) {
                return true;
            } else {
                return false;
            }
        } else {
            return false;
        }
    } else {
        if (child.plus = false || validSign) {
            return true;
        } else {
            return false;
        }
    }
}

/**
 * @brief Set Blood Types
 * @param father Father's Blood Type
 * @param mother Mother's Blood Type
 * @param child Child's Blood Type
 */
void setBloodTypes(std::string &father, std::string &mother, std::string &child) {
    Father f;
    Mother m;
    Child c;
    int tmpSize;
    //-- Set Father's Blood Type
    tmpSize = father.size();
    for (int i = 0; i < tmpSize; i++) {
        if (i < tmpSize - 1) {
            f.type.push_back(father[i]);
        } else if (i == tmpSize - 1) {
            if (father[i] == '+') {
                f.plus = true;
            } else {
                f.plus = false;
            }
        }
    }
    //-- Set Mother's Blood Type
    tmpSize = mother.size();
    for (int i = 0; i < tmpSize; i++) {
        if (i < tmpSize - 1) {
            m.type.push_back(mother[i]);
        } else if (i == tmpSize - 1) {
            if (mother[i] == '+') {
                m.plus = true;
            } else {
                m.plus = false;
            }
        }
    }
    //-- Set Child's Blood Type
    tmpSize = child.size();
    for (int i = 0; i < tmpSize; i++) {
        if (i < tmpSize - 1) {
            c.type.push_back(child[i]);
        } else if (i == tmpSize - 1) {
            if (child[i] == '+') {
                c.plus = true;
            } else {
                c.plus = false;
            }
        }
    }
    //-- Check Blood Types
    if (checkBloodTypes(f, m, c)) {
        answers.push_back("valid");
    } else {
        answers.push_back("invalid");
    }
}

int main() {
    //-- Get Amount of 't'
    int t;
    std::cin >> t;
    //-- Get Input Blood Types
    answers.resize(0);
    std::string father, mother, child;
    for (int i = 0; i < t; i++) {
        std::cin >> father >> mother >> child;
        setBloodTypes(father, mother, child);
    }
    //-- Show Output
    for (int i = 0; i < t; i++) {
        std::cout << answers[i] << std::endl;
    }
    return 0;
}