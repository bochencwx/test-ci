package(default_visibility = ["//visibility:public"])

cc_library(
    name = "tool",
    srcs = ["tool.cc"],
    hdrs = ["tool.h"],
    deps = [],
)

cc_test(
    name = "tool_test",
    srcs = [
        "tool_test.cc",
    ],
    deps = [
        ":tool",
        "@com_google_googletest//:gtest",
        "@com_google_googletest//:gtest_main",
    ],
)
