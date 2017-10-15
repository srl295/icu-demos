#define ASSERT_OK(status) if(U_FAILURE(status)) { \
     puts(u_errorName(status)); \
     return 1; \
}
#define ASSERT_VALID(ptr) if(!ptr.isValid()) { fprintf(stderr, "%s:%d: invalid pointer\n", __FILE__, __LINE__); return 1; }
