//basic path macros
#define P(PATH) \z\OCI\addons\weapons\##PATH
    //P((Something) => "\z\OCI\addons\weapons\something

#undef QUOTE
// Q(INPUT) => "INPUT"
#define Q(INPUT) QUOTE(INPUT)

#define QP(PATH) #P(PATH)
  // Wraps the expanded path in quotes, e.g.:
  // QP(data\loading_bg.jpg) => "\z\OCI\addons\oclf\data\loading_bg.jpg"

// GLUE(A,B) => AB (concatenates tokens)
#define GLUE(A,B) A##B

#define QUOTE(s) #s