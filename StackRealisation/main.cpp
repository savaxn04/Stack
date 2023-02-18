#include "stack.h"

int main() {
    Stack st;
    st.push(6);
    st.push(60);
    st.push(40);
    st.show(); // should output "6 60 40\n"
    st.multiPop(2);
    st.show(); // should output "6\n"
    Stack st2(st);
    st2.show(); // should output "6\n"
    Stack st3;
    st3 = st2;
    st3.show(); // should output "6\n"
    return 0;
}