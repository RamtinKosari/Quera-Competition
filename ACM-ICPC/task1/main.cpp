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
