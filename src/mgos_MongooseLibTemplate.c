// the init function requires a boolean return value,
// but booleans are not included as a default datatype:
#include <stdbool.h>

// init function is required
bool mgos_MongooseLibTemplate_init(void) {
    return true;
}

// Example function
int add(int a, int b){
    return a + b;
}
