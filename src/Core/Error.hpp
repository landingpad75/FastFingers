#pragma once

namespace Errors {
    enum Errors : int {
        Success,
    };

    namespace GLFW {
        enum Errors : int {
            Success,
            InitFail,
            WindowCreateFail
        };
    }

    namespace GL {
        enum Errors : int {
            Success,
            LoadFail
        };
    }
}