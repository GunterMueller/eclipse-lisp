/* Generated by Eclipse Common Lisp 1.1-HOSTED on cad0.
   Friday the tenth of April, 1998, 8:52:01 pm CDT. */
#include <eclipse.h>

clObject cl1PLUS_FUNC(clProto), clAddInteger(clProto),
  clApply(clProto), clAref(clProto),
  clCanonicalizeSpecializer(clProto), clCar(clProto), clCdr(clProto),
  clCharpSimpleBaseString __P((clCharp)), clCons(clProto),
  clEnsureGenericFunction(clProto), clEnsureMethod(clProto),
  clEq(clProto), clExtraArgs(clProto), clFindClass(clProto),
  clGeInteger(clProto), clLength(clProto), clList(clProto),
  clMakeKeyword(clProto), clMissingArgs(clProto), clNot(clProto),
  clNull(clProto), clPackageName(clProto), clRest(clProto),
  clSymbolName(clProto), clSymbolPackage(clProto);

extern clObject clampersandOPTIONAL, clIGNORE, clSYMBOL,
  clstarCONSTANT_CHECK_HOOKstar, clARRAY, clARRAY_DIMENSION,
  clARRAY_ELEMENT_TYPE, clARRAY_RANK, clARRAY_TOTAL_SIZE,
  clCLASS_PROTOTYPE, clCOMPILE_OBJECT, clCOMPILED_FUNCITON,
  clDEFINITION, clEQ_NUMBER, clEQUAL, clGE, clMETHOD_FUNCTION, clNAME,
  clNO_NEXT_METHOD, clNULL, clPACKAGE, clROW_MAJOR_AREF, clSIMILAR,
  clSTANDARD_METHOD, clVECTOR, clX, clY;

static clObject CONS_0, CONS_1, CONS_2, CONS_3, CONS_4, CONS_5, CONS_6,
  CONS_7, I_0, I_1, I_2, keyAROUND, keyDECLARATIONS, keyDOCUMENTATION,
  keyFUNCTION, keyLAMBDA_LIST, keyQUALIFIERS, keySPECIALIZERS,
  STR_AROUND__6, STR_DECLARATIONS__4, STR_DOCUMENTATION__5,
  STR_FUNCTION__3, STR_LAMBDA_LIST__1, STR_QUALIFIERS__0,
  STR_SPECIALIZERS__2;

clObject clSimilar_clT_clT clVdecl(_ap)
{ clObject *L_args1934 = clMakeBinding(),
  *L_methods1935 = clMakeBinding();
  { clBeginParse(_ap);
    clSetq(*L_args1934,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_1, clEOA)));
    clSetq(*L_methods1935,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_2, clEOA)));
    if (_clVp(_ap)) clExtraArgs(clVargs(_ap), clEOA);
    clEndParse(_ap); }
  { clObject L_form1937, x, y;
    clSetq(L_form1937, *L_args1934);
    if (clTrue(L_form1937))
      { clObject L_top1938;
        clSetq(L_top1938, clCar(L_form1937, clEOA));
        { clObject L_0;
          clSetq(L_0, L_form1937);
          clSetq(L_form1937, clCdr(L_0, clEOA)); }
        clSetq(x, L_top1938); }
    else clSetq(x, clMissingArgs(I_1, clEOA));
    if (clTrue(L_form1937))
      { clObject L_top1939;
        { clObject L_0;
          clSetq(L_0, L_form1937);
          clSetq(L_top1939, clCar(L_0, clEOA)); }
        { clObject L_0;
          clSetq(L_0, L_form1937);
          clSetq(L_form1937, clCdr(L_0, clEOA)); }
        clSetq(y, L_top1939); }
    else clSetq(y, clMissingArgs(I_2, clEOA));
    if (clTrue(L_form1937))
      { clObject L_0;
        clSetq(L_0, L_form1937);
        clExtraArgs(L_0, clEOA); }
    return(clFuncallFunction(clSymbolFunctionValue(clEQUAL),
                             x,
                             y,
                             clEOA)); } }

clObject clSimilar_clPACKAGE_clPACKAGE clVdecl(_ap)
{ clObject *L_args1940 = clMakeBinding(),
  *L_methods1941 = clMakeBinding();
  { clBeginParse(_ap);
    clSetq(*L_args1940,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_1, clEOA)));
    clSetq(*L_methods1941,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_2, clEOA)));
    if (_clVp(_ap)) clExtraArgs(clVargs(_ap), clEOA);
    clEndParse(_ap); }
  { clObject L_form1943, x, y;
    clSetq(L_form1943, *L_args1940);
    if (clTrue(L_form1943))
      { clObject L_top1944;
        clSetq(L_top1944, clCar(L_form1943, clEOA));
        { clObject L_0;
          clSetq(L_0, L_form1943);
          clSetq(L_form1943, clCdr(L_0, clEOA)); }
        clSetq(x, L_top1944); }
    else clSetq(x, clMissingArgs(I_1, clEOA));
    if (clTrue(L_form1943))
      { clObject L_top1945;
        { clObject L_0;
          clSetq(L_0, L_form1943);
          clSetq(L_top1945, clCar(L_0, clEOA)); }
        { clObject L_0;
          clSetq(L_0, L_form1943);
          clSetq(L_form1943, clCdr(L_0, clEOA)); }
        clSetq(y, L_top1945); }
    else clSetq(y, clMissingArgs(I_2, clEOA));
    if (clTrue(L_form1943))
      { clObject L_0;
        clSetq(L_0, L_form1943);
        clExtraArgs(L_0, clEOA); }
    { clObject L_0;
      clSetq(L_0, clPackageName(x, clEOA));
      return(clFuncallFunction(clSymbolFunctionValue(clSIMILAR),
                               L_0,
                               clPackageName(y, clEOA),
                               clEOA)); } } }

clObject clSimilar_clNULL_clNULL clVdecl(_ap)
{ clObject *L_args1946 = clMakeBinding(),
  *L_methods1947 = clMakeBinding();
  { clBeginParse(_ap);
    clSetq(*L_args1946,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_1, clEOA)));
    clSetq(*L_methods1947,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_2, clEOA)));
    if (_clVp(_ap)) clExtraArgs(clVargs(_ap), clEOA);
    clEndParse(_ap); }
  { clObject L_form1949, x, y;
    clSetq(L_form1949, *L_args1946);
    if (clTrue(L_form1949))
      { clObject L_top1950;
        clSetq(L_top1950, clCar(L_form1949, clEOA));
        { clObject L_0;
          clSetq(L_0, L_form1949);
          clSetq(L_form1949, clCdr(L_0, clEOA)); }
        clSetq(x, L_top1950); }
    else clSetq(x, clMissingArgs(I_1, clEOA));
    if (clTrue(L_form1949))
      { clObject L_top1951;
        { clObject L_0;
          clSetq(L_0, L_form1949);
          clSetq(L_top1951, clCar(L_0, clEOA)); }
        { clObject L_0;
          clSetq(L_0, L_form1949);
          clSetq(L_form1949, clCdr(L_0, clEOA)); }
        clSetq(y, L_top1951); }
    else clSetq(y, clMissingArgs(I_2, clEOA));
    if (clTrue(L_form1949))
      { clObject L_0;
        clSetq(L_0, L_form1949);
        clExtraArgs(L_0, clEOA); }
    return(clValues1(clT)); } }

clObject clSimilar_clSYMBOL_clSYMBOL clVdecl(_ap)
{ clObject *L_args1952 = clMakeBinding(),
  *L_methods1953 = clMakeBinding();
  { clBeginParse(_ap);
    clSetq(*L_args1952,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_1, clEOA)));
    clSetq(*L_methods1953,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_2, clEOA)));
    if (_clVp(_ap)) clExtraArgs(clVargs(_ap), clEOA);
    clEndParse(_ap); }
  { clObject L_form1955, x, y;
    clSetq(L_form1955, *L_args1952);
    if (clTrue(L_form1955))
      { clObject L_top1956;
        clSetq(L_top1956, clCar(L_form1955, clEOA));
        { clObject L_0;
          clSetq(L_0, L_form1955);
          clSetq(L_form1955, clCdr(L_0, clEOA)); }
        clSetq(x, L_top1956); }
    else clSetq(x, clMissingArgs(I_1, clEOA));
    if (clTrue(L_form1955))
      { clObject L_top1957;
        { clObject L_0;
          clSetq(L_0, L_form1955);
          clSetq(L_top1957, clCar(L_0, clEOA)); }
        { clObject L_0;
          clSetq(L_0, L_form1955);
          clSetq(L_form1955, clCdr(L_0, clEOA)); }
        clSetq(y, L_top1957); }
    else clSetq(y, clMissingArgs(I_2, clEOA));
    if (clTrue(L_form1955))
      { clObject L_0;
        clSetq(L_0, L_form1955);
        clExtraArgs(L_0, clEOA); }
    { clObject L_g1958;
      clSetq(L_g1958, clEq(x, y, clEOA));
      if (clTrue(L_g1958))
        return(clValues1(L_g1958));
      else if (clTrue(clNull(clSymbolPackage(x, clEOA), clEOA)))
        if (clTrue(clNull(clSymbolPackage(y, clEOA), clEOA)))
          { clObject L_0;
            clSetq(L_0, clSymbolName(x, clEOA));
            return(clFuncallFunction(clSymbolFunctionValue(clEQUAL),
                                     L_0,
                                     clSymbolName(y, clEOA),
                                     clEOA)); }
        else return(clValues1(clNIL));
      else return(clValues1(clNIL)); } } }

clDeclareEnv(clSimilar_keyAROUND_clARRAY_clARRAY_CallNextMethod);
static clObject clSimilar_keyAROUND_clARRAY_clARRAY_CallNextMethod clVdecl(_ap)
{ clUseEnv(clSimilar_keyAROUND_clARRAY_clARRAY_CallNextMethod);
  { clObject cnm_args;
    { clBeginParse(_ap);
      clSetq(cnm_args, clVargs(_ap));
      clEndParse(_ap); }
    { clObject next_method;
      clSetq(next_method, clCar(clEnv(0, *L_methods1960), clEOA));
      if (clTrue(next_method))
        { clObject L_1, L_0;
          clSetq(L_0,
                 clFuncallFunction(clSymbolFunctionValue(clMETHOD_FUNCTION),
                                   next_method,
                                   clEOA));
          clSetq(L_1,
                 (clTrue(cnm_args) ? cnm_args :
                  clEnv(1, *L_args1959)));
          return(clFuncallFunction(L_0,
                                   L_1,
                                   clRest(clEnv(0, *L_methods1960),
                                          clEOA),
                                   clEOA)); }
      else
        { clObject L_2, L_1, L_0;
          clSetq(L_0, clSymbolFunctionValue(clNO_NEXT_METHOD));
          clSetq(L_1, clFdefinition(clSIMILAR, clEOA));
          clSetq(L_2,
                 clFuncallFunction(clSymbolFunctionValue(clCLASS_PROTOTYPE),
                                   clFindClass(clSTANDARD_METHOD,
                                               clEOA),
                                   clEOA));
          return(clApply(L_0, L_1, L_2, cnm_args, clEOA)); } } } }

clObject clSimilar_keyAROUND_clARRAY_clARRAY clVdecl(_ap)
{ clObject *L_args1959 = clMakeBinding(),
  *L_methods1960 = clMakeBinding();
  { clBeginParse(_ap);
    clSetq(*L_args1959,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_1, clEOA)));
    clSetq(*L_methods1960,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_2, clEOA)));
    if (_clVp(_ap)) clExtraArgs(clVargs(_ap), clEOA);
    clEndParse(_ap); }
  { clObject _CallNextMethod_;
    clSetq(_CallNextMethod_,
           clMakeClosure(2,
                         clSimilar_keyAROUND_clARRAY_clARRAY_CallNextMethod,
                         &clEnvHook(clSimilar_keyAROUND_clARRAY_clARRAY_CallNextMethod),
                         &*L_methods1960,
                         &*L_args1959));
    { clObject L_form1962, x, y;
      clSetq(L_form1962, *L_args1959);
      if (clTrue(L_form1962))
        { clObject L_top1963;
          clSetq(L_top1963, clCar(L_form1962, clEOA));
          { clObject L_0;
            clSetq(L_0, L_form1962);
            clSetq(L_form1962, clCdr(L_0, clEOA)); }
          clSetq(x, L_top1963); }
      else clSetq(x, clMissingArgs(I_1, clEOA));
      if (clTrue(L_form1962))
        { clObject L_top1964;
          { clObject L_0;
            clSetq(L_0, L_form1962);
            clSetq(L_top1964, clCar(L_0, clEOA)); }
          { clObject L_0;
            clSetq(L_0, L_form1962);
            clSetq(L_form1962, clCdr(L_0, clEOA)); }
          clSetq(y, L_top1964); }
      else clSetq(y, clMissingArgs(I_2, clEOA));
      if (clTrue(L_form1962))
        { clObject L_0;
          clSetq(L_0, L_form1962);
          clExtraArgs(L_0, clEOA); }
      { clObject L_test;
        { clObject L_0;
          clSetq(L_0,
                 clFuncallFunction(clSymbolFunctionValue(clARRAY_ELEMENT_TYPE),
                                   x,
                                   clEOA));
          clSetq(L_test,
                 clEq(L_0,
                      clFuncallFunction(clSymbolFunctionValue(clARRAY_ELEMENT_TYPE),
                                        y,
                                        clEOA),
                      clEOA)); }
        if (clTrue(L_test))
          return(clFuncallFunction(_CallNextMethod_, clEOA));
        else return(clValues1(clNIL)); } } } }

clObject clSimilar_clVECTOR_clVECTOR clVdecl(_ap)
{ clObject *L_args1965 = clMakeBinding(),
  *L_methods1966 = clMakeBinding();
  { clBeginParse(_ap);
    clSetq(*L_args1965,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_1, clEOA)));
    clSetq(*L_methods1966,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_2, clEOA)));
    if (_clVp(_ap)) clExtraArgs(clVargs(_ap), clEOA);
    clEndParse(_ap); }
  { clObject L_form1968, x, y;
    clSetq(L_form1968, *L_args1965);
    if (clTrue(L_form1968))
      { clObject L_top1969;
        clSetq(L_top1969, clCar(L_form1968, clEOA));
        { clObject L_0;
          clSetq(L_0, L_form1968);
          clSetq(L_form1968, clCdr(L_0, clEOA)); }
        clSetq(x, L_top1969); }
    else clSetq(x, clMissingArgs(I_1, clEOA));
    if (clTrue(L_form1968))
      { clObject L_top1970;
        { clObject L_0;
          clSetq(L_0, L_form1968);
          clSetq(L_top1970, clCar(L_0, clEOA)); }
        { clObject L_0;
          clSetq(L_0, L_form1968);
          clSetq(L_form1968, clCdr(L_0, clEOA)); }
        clSetq(y, L_top1970); }
    else clSetq(y, clMissingArgs(I_2, clEOA));
    if (clTrue(L_form1968))
      { clObject L_0;
        clSetq(L_0, L_form1968);
        clExtraArgs(L_0, clEOA); }
    { clObject ex, L_g1, L_g2, ey, L_g4, L_g5;
      clSetq(ex, clNIL);
      clSetq(L_g1, I_0);
      clSetq(L_g2, I_0);
      clSetq(ey, clNIL);
      clSetq(L_g4, I_0);
      clSetq(L_g5, I_0);
      clSetq(L_g2, clLength(x, clEOA));
      clSetq(L_g5, clLength(y, clEOA));
      clLabel(NEXT_LOOP);
      { clObject L_test;
        { clObject L_g1971;
          { clObject L_1;
            clSetq(L_1, L_g2);
            clSetq(L_g1971,
                   clFuncallFunction(clSymbolFunctionValue(clGE),
                                     L_g1,
                                     L_1,
                                     clEOA)); }
          if (clTrue(L_g1971))
            clSetq(L_test, L_g1971);
          else
            { clObject L_1;
              clSetq(L_1, L_g5);
              clSetq(L_test,
                     clFuncallFunction(clSymbolFunctionValue(clGE),
                                       L_g4,
                                       L_1,
                                       clEOA)); } }
        if (clTrue(L_test)) goto END_LOOP; }
      { clObject L_first_val1972;
        clSetq(L_first_val1972, clAref(x, L_g1, clEOA));
        clSetq(ey, clAref(y, L_g4, clEOA));
        clSetq(ex, L_first_val1972); }
      { clObject L_0;
        clSetq(L_0, L_g1);
        clSetq(L_g1, cl1PLUS_FUNC(L_0, clEOA)); }
      { clObject L_0;
        clSetq(L_0, L_g4);
        clSetq(L_g4, cl1PLUS_FUNC(L_0, clEOA)); }
      { clObject L_test;
        { clObject L_0;
          { clObject L_1, L_0__R1;
            clSetq(L_0__R1, ex);
            clSetq(L_1, ey);
            clSetq(L_0,
                   clFuncallFunction(clSymbolFunctionValue(clSIMILAR),
                                     L_0__R1,
                                     L_1,
                                     clEOA)); }
          clSetq(L_test, clNot(L_0, clEOA)); }
        if (clTrue(L_test)) return(clValues1(clNIL)); }
      goto NEXT_LOOP;
      clLabel(END_LOOP);
      return(clValues1(clT));
      return(clValues1(clNIL)); } } }

clObject clSimilar_clARRAY_clARRAY clVdecl(_ap)
{ clObject *L_args1973 = clMakeBinding(),
  *L_methods1974 = clMakeBinding();
  { clBeginParse(_ap);
    clSetq(*L_args1973,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_1, clEOA)));
    clSetq(*L_methods1974,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_2, clEOA)));
    if (_clVp(_ap)) clExtraArgs(clVargs(_ap), clEOA);
    clEndParse(_ap); }
  { clObject L_form1976, x, y;
    clSetq(L_form1976, *L_args1973);
    if (clTrue(L_form1976))
      { clObject L_top1977;
        clSetq(L_top1977, clCar(L_form1976, clEOA));
        { clObject L_0;
          clSetq(L_0, L_form1976);
          clSetq(L_form1976, clCdr(L_0, clEOA)); }
        clSetq(x, L_top1977); }
    else clSetq(x, clMissingArgs(I_1, clEOA));
    if (clTrue(L_form1976))
      { clObject L_top1978;
        { clObject L_0;
          clSetq(L_0, L_form1976);
          clSetq(L_top1978, clCar(L_0, clEOA)); }
        { clObject L_0;
          clSetq(L_0, L_form1976);
          clSetq(L_form1976, clCdr(L_0, clEOA)); }
        clSetq(y, L_top1978); }
    else clSetq(y, clMissingArgs(I_2, clEOA));
    if (clTrue(L_form1976))
      { clObject L_0;
        clSetq(L_0, L_form1976);
        clExtraArgs(L_0, clEOA); }
    { clObject rank;
      clSetq(rank,
             clFuncallFunction(clSymbolFunctionValue(clARRAY_RANK),
                               x,
                               clEOA));
      if (clTrue(clFuncallFunction(clSymbolFunctionValue(clEQ_NUMBER),
                                   rank,
                                   clFuncallFunction(clSymbolFunctionValue(clARRAY_RANK),
                                                     y,
                                                     clEOA),
                                   clEOA)))
        { clObject L_test__R1;
          { clObject i;
            clSetq(i, I_0);
            clLabel(l_ITERATE1980);
            if (clTrue(clGeInteger(i, rank, clEOA)))
              { clSetq(L_test__R1, clT); clLocalReturn(NIL__r1); }
            { clObject L_test__R2;
              { clObject L_0;
                { clObject L_0__R1;
                  clSetq(L_0__R1,
                         clFuncallFunction(clSymbolFunctionValue(clARRAY_DIMENSION),
                                           x,
                                           i,
                                           clEOA));
                  clSetq(L_0,
                         clFuncallFunction(clSymbolFunctionValue(clEQ_NUMBER),
                                           L_0__R1,
                                           clFuncallFunction(clSymbolFunctionValue(clARRAY_DIMENSION),
                                                             y,
                                                             i,
                                                             clEOA),
                                           clEOA)); }
                clSetq(L_test__R2, clNot(L_0, clEOA)); }
              if (clTrue(L_test__R2))
                { clSetq(L_test__R1, clNIL);
                  clLocalReturn(NIL__r1); } }
            { clObject L_0;
              clSetq(L_0, i);
              clSetq(i, clAddInteger(L_0, I_1, clEOA)); }
            goto l_ITERATE1980; }
          clBlockEnd(NIL__r1);
          if (clTrue(L_test__R1))
            { clObject L_end1981, i;
              clSetq(L_end1981,
                     clFuncallFunction(clSymbolFunctionValue(clARRAY_TOTAL_SIZE),
                                       x,
                                       clEOA));
              clSetq(i, I_0);
              clLabel(l_ITERATE1982);
              if (clTrue(clGeInteger(i, L_end1981, clEOA)))
                return(clValues1(clT));
              { clObject L_test__R2;
                { clObject L_0;
                  { clObject L_0__R1;
                    clSetq(L_0__R1,
                           clFuncallFunction(clSymbolFunctionValue(clROW_MAJOR_AREF),
                                             x,
                                             i,
                                             clEOA));
                    clSetq(L_0,
                           clFuncallFunction(clSymbolFunctionValue(clSIMILAR),
                                             L_0__R1,
                                             clFuncallFunction(clSymbolFunctionValue(clROW_MAJOR_AREF),
                                                               y,
                                                               i,
                                                               clEOA),
                                             clEOA)); }
                  clSetq(L_test__R2, clNot(L_0, clEOA)); }
                if (clTrue(L_test__R2)) return(clValues1(clNIL)); }
              { clObject L_0;
                clSetq(L_0, i);
                clSetq(i, clAddInteger(L_0, I_1, clEOA)); }
              goto l_ITERATE1982; }
          else return(clValues1(clNIL)); }
      else return(clValues1(clNIL)); } } }

clObject clCompileObject_clCOMPILED_FUNCITON clVdecl(_ap)
{ clObject *L_args1984 = clMakeBinding(),
  *L_methods1985 = clMakeBinding();
  { clBeginParse(_ap);
    clSetq(*L_args1984,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_1, clEOA)));
    clSetq(*L_methods1985,
           (_clVp(_ap) ? clVpop(_ap) : clMissingArgs(I_2, clEOA)));
    if (_clVp(_ap)) clExtraArgs(clVargs(_ap), clEOA);
    clEndParse(_ap); }
  { clObject L_form1987, definition, name;
    clSetq(L_form1987, *L_args1984);
    if (clTrue(L_form1987))
      { clObject L_top1988;
        clSetq(L_top1988, clCar(L_form1987, clEOA));
        { clObject L_0;
          clSetq(L_0, L_form1987);
          clSetq(L_form1987, clCdr(L_0, clEOA)); }
        clSetq(definition, L_top1988); }
    else clSetq(definition, clMissingArgs(I_1, clEOA));
    if (clTrue(L_form1987))
      { clObject L_top1989;
        { clObject L_0;
          clSetq(L_0, L_form1987);
          clSetq(L_top1989, clCar(L_0, clEOA)); }
        { clObject L_0;
          clSetq(L_0, L_form1987);
          clSetq(L_form1987, clCdr(L_0, clEOA)); }
        clSetq(name, L_top1989); }
    else clSetq(name, clNIL);
    if (clTrue(L_form1987))
      { clObject L_0;
        clSetq(L_0, L_form1987);
        clExtraArgs(L_0, clEOA); }
    return(clValues1(definition)); } }

void clInitInit __P((void)) 
{ clDbind(clstarPACKAGEstar);
  clDbind(clstarREADTABLEstar);
  clDbind(clstarLOAD_TRUENAMEstar);
  clDbind(clstarLOAD_PATHNAMEstar);
  clSetq(STR_QUALIFIERS__0,
         clCharpSimpleBaseString("QUALIFIERS"));
  clSetq(keyQUALIFIERS, clMakeKeyword(STR_QUALIFIERS__0, clEOA));
  clSetq(STR_LAMBDA_LIST__1,
         clCharpSimpleBaseString("LAMBDA-LIST"));
  clSetq(keyLAMBDA_LIST, clMakeKeyword(STR_LAMBDA_LIST__1, clEOA));
  clSetq(CONS_1, clCons(clY, clNIL, clEOA));
  clSetq(CONS_0, clCons(clX, CONS_1, clEOA));
  clSetq(STR_SPECIALIZERS__2,
         clCharpSimpleBaseString("SPECIALIZERS"));
  clSetq(keySPECIALIZERS, clMakeKeyword(STR_SPECIALIZERS__2, clEOA));
  clSetq(STR_FUNCTION__3,
         clCharpSimpleBaseString("FUNCTION"));
  clSetq(keyFUNCTION, clMakeKeyword(STR_FUNCTION__3, clEOA));
  clSetq(I_1, clIntFixnum(1));
  clSetq(I_2, clIntFixnum(2));
  clSetq(STR_DECLARATIONS__4,
         clCharpSimpleBaseString("DECLARATIONS"));
  clSetq(keyDECLARATIONS, clMakeKeyword(STR_DECLARATIONS__4, clEOA));
  clSetq(STR_DOCUMENTATION__5,
         clCharpSimpleBaseString("DOCUMENTATION"));
  clSetq(keyDOCUMENTATION, clMakeKeyword(STR_DOCUMENTATION__5, clEOA));
  clSetq(STR_AROUND__6,
         clCharpSimpleBaseString("AROUND"));
  clSetq(keyAROUND, clMakeKeyword(STR_AROUND__6, clEOA));
  clSetq(CONS_2, clCons(keyAROUND, clNIL, clEOA));
  clSetq(I_0, clIntFixnum(0));
  clSetq(CONS_5, clCons(clNAME, clNIL, clEOA));
  clSetq(CONS_4, clCons(clampersandOPTIONAL, CONS_5, clEOA));
  clSetq(CONS_3, clCons(clDEFINITION, CONS_4, clEOA));
  clSetq(CONS_7, clCons(clIGNORE, CONS_5, clEOA));
  clSetq(CONS_6, clCons(CONS_7, clNIL, clEOA));

  { clObject L_8, L_6, L_0;
    clSetq(L_0, clEnsureGenericFunction(clSIMILAR, clEOA));
    { clObject L_0__R1;
      clSetq(L_0__R1, clCanonicalizeSpecializer(clT, clEOA));
      clSetq(L_6,
             clList(L_0__R1, clCanonicalizeSpecializer(clT, clEOA),
                    clEOA)); }
    clSetq(L_8, clMakeClosure(0, clSimilar_clT_clT, clNULL_HOOK));
    clEnsureMethod(L_0, keyQUALIFIERS, clNIL, keyLAMBDA_LIST, CONS_0,
                   keySPECIALIZERS, L_6, keyFUNCTION, L_8,
                   keyDECLARATIONS, clNIL, keyDOCUMENTATION, clNIL,
                   clEOA); }
  { clObject L_8, L_6, L_0;
    clSetq(L_0, clEnsureGenericFunction(clSIMILAR, clEOA));
    { clObject L_0__R1;
      clSetq(L_0__R1, clCanonicalizeSpecializer(clPACKAGE, clEOA));
      clSetq(L_6,
             clList(L_0__R1,
                    clCanonicalizeSpecializer(clPACKAGE, clEOA),
                    clEOA)); }
    clSetq(L_8,
           clMakeClosure(0,
                         clSimilar_clPACKAGE_clPACKAGE,
                         clNULL_HOOK));
    clEnsureMethod(L_0, keyQUALIFIERS, clNIL, keyLAMBDA_LIST, CONS_0,
                   keySPECIALIZERS, L_6, keyFUNCTION, L_8,
                   keyDECLARATIONS, clNIL, keyDOCUMENTATION, clNIL,
                   clEOA); }
  { clObject L_8, L_6, L_0;
    clSetq(L_0, clEnsureGenericFunction(clSIMILAR, clEOA));
    { clObject L_0__R1;
      clSetq(L_0__R1, clCanonicalizeSpecializer(clNULL, clEOA));
      clSetq(L_6,
             clList(L_0__R1, clCanonicalizeSpecializer(clNULL, clEOA),
                    clEOA)); }
    clSetq(L_8,
           clMakeClosure(0, clSimilar_clNULL_clNULL, clNULL_HOOK));
    clEnsureMethod(L_0, keyQUALIFIERS, clNIL, keyLAMBDA_LIST, CONS_0,
                   keySPECIALIZERS, L_6, keyFUNCTION, L_8,
                   keyDECLARATIONS, clNIL, keyDOCUMENTATION, clNIL,
                   clEOA); }
  { clObject L_8, L_6, L_0;
    clSetq(L_0, clEnsureGenericFunction(clSIMILAR, clEOA));
    { clObject L_0__R1;
      clSetq(L_0__R1, clCanonicalizeSpecializer(clSYMBOL, clEOA));
      clSetq(L_6,
             clList(L_0__R1,
                    clCanonicalizeSpecializer(clSYMBOL, clEOA),
                    clEOA)); }
    clSetq(L_8,
           clMakeClosure(0, clSimilar_clSYMBOL_clSYMBOL, clNULL_HOOK));
    clEnsureMethod(L_0, keyQUALIFIERS, clNIL, keyLAMBDA_LIST, CONS_0,
                   keySPECIALIZERS, L_6, keyFUNCTION, L_8,
                   keyDECLARATIONS, clNIL, keyDOCUMENTATION, clNIL,
                   clEOA); }
  { clObject L_8, L_6, L_0;
    clSetq(L_0, clEnsureGenericFunction(clSIMILAR, clEOA));
    { clObject L_0__R1;
      clSetq(L_0__R1, clCanonicalizeSpecializer(clARRAY, clEOA));
      clSetq(L_6,
             clList(L_0__R1, clCanonicalizeSpecializer(clARRAY, clEOA),
                    clEOA)); }
    clSetq(L_8,
           clMakeClosure(0,
                         clSimilar_keyAROUND_clARRAY_clARRAY,
                         clNULL_HOOK));
    clEnsureMethod(L_0, keyQUALIFIERS, CONS_2, keyLAMBDA_LIST, CONS_0,
                   keySPECIALIZERS, L_6, keyFUNCTION, L_8,
                   keyDECLARATIONS, clNIL, keyDOCUMENTATION, clNIL,
                   clEOA); }
  { clObject L_8, L_6, L_0;
    clSetq(L_0, clEnsureGenericFunction(clSIMILAR, clEOA));
    { clObject L_0__R1;
      clSetq(L_0__R1, clCanonicalizeSpecializer(clVECTOR, clEOA));
      clSetq(L_6,
             clList(L_0__R1,
                    clCanonicalizeSpecializer(clVECTOR, clEOA),
                    clEOA)); }
    clSetq(L_8,
           clMakeClosure(0, clSimilar_clVECTOR_clVECTOR, clNULL_HOOK));
    clEnsureMethod(L_0, keyQUALIFIERS, clNIL, keyLAMBDA_LIST, CONS_0,
                   keySPECIALIZERS, L_6, keyFUNCTION, L_8,
                   keyDECLARATIONS, clNIL, keyDOCUMENTATION, clNIL,
                   clEOA); }
  { clObject L_8, L_6, L_0;
    clSetq(L_0, clEnsureGenericFunction(clSIMILAR, clEOA));
    { clObject L_0__R1;
      clSetq(L_0__R1, clCanonicalizeSpecializer(clARRAY, clEOA));
      clSetq(L_6,
             clList(L_0__R1, clCanonicalizeSpecializer(clARRAY, clEOA),
                    clEOA)); }
    clSetq(L_8,
           clMakeClosure(0, clSimilar_clARRAY_clARRAY, clNULL_HOOK));
    clEnsureMethod(L_0, keyQUALIFIERS, clNIL, keyLAMBDA_LIST, CONS_0,
                   keySPECIALIZERS, L_6, keyFUNCTION, L_8,
                   keyDECLARATIONS, clNIL, keyDOCUMENTATION, clNIL,
                   clEOA); }
  clSetSymbolValueValue(clstarCONSTANT_CHECK_HOOKstar,
                        clSymbolFunctionValue(clSIMILAR));
  clEnsureGenericFunction(clCOMPILE_OBJECT,
                          keyLAMBDA_LIST,
                          CONS_3,
                          clEOA);
  { clObject L_8, L_6, L_0;
    clSetq(L_0, clEnsureGenericFunction(clCOMPILE_OBJECT, clEOA));
    clSetq(L_6,
           clList(clCanonicalizeSpecializer(clCOMPILED_FUNCITON,
                                            clEOA),
                  clEOA));
    clSetq(L_8,
           clMakeClosure(0,
                         clCompileObject_clCOMPILED_FUNCITON,
                         clNULL_HOOK));
    clEnsureMethod(L_0, keyQUALIFIERS, clNIL, keyLAMBDA_LIST, CONS_3,
                   keySPECIALIZERS, L_6, keyFUNCTION, L_8,
                   keyDECLARATIONS, CONS_6, keyDOCUMENTATION, clNIL,
                   clEOA); }

  clUnwind(4); }