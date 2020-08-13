#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define TT ll
typedef tree<TT, null_type, less<TT>, rb_tree_tag,
        tree_order_statistics_node_update>
        oset;
#define fbo find_by_order
#define ook order_of_key
