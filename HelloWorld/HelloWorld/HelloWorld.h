/*
    Declarations - Here will reside all relevant functions declarations
*/
extern "C" {

}
/* 
    alloc_text - This pragma names each funcions' text section residience.
    Functions that reside in the INIT section are discarded after DriverEntry has been called.
    Functions that reside in the PAGE section can be paged out and will be loaded on-use.

    Examples:
    #pragma alloc_text(INIT, FunctionThatIsDiscarded)
    #pragma alloc_text(PAGE, FunctionThatCanBePagedOut)
*/

#ifdef ALLOC_PRAGMA

#endif