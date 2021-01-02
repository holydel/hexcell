#ifdef hexcell_EXPORTS
#ifdef _WINDOWS
#define HEXCELL_EXPORT __declspec(dllexport)
#else
#define HEXCELL_EXPORT
#endif
#else
#ifdef _WINDOWS
#define HEXCELL_EXPORT __declspec(dllimport)
#else
#define HEXCELL_EXPORT
#endif
#endif