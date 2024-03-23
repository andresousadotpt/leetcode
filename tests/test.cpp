#define ASSERT_EQ(testName, actual, expected) \
    if ((actual) != (expected)) { \
        std::cout << "'" << testName << "' " << Colors::red("FAILED") << "\nExpected " << expected \
        << ", got " << actual << std::endl; \
    } else { \
        std::cout << "'" << testName << "' " << Colors::green("PASSED") << std::endl; \
    }

#define ASSERT_NOT_EQ(testName, actual, expected) \
    if ((actual) == (expected)) { \
        std::cout << "'" << testName << "' " << Colors::red("FAILED") << "\nExpected " << expected \
        << ", got " << actual << std::endl; \
    } else { \
        std::cout << "'" << testName << "' " << Colors::green("PASSED") << std::endl; \
    }