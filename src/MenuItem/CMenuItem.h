#include <string>

using namespace std;

namespace CM{
    class CMenuItem{
        private:
            typedef void (*Cb)();
            string title;
            Cb cb{};
        public:
            CMenuItem(string, Cb);
            string getTitle();
            void setTitle(string newTitle);
            void renderHeader();
            void pick();
    };
}