#pragma once

#undef _FORTIFY_SOURCE

//__asm__(".symver utimensat, utimensat@GLIBC_2.2.5");
__asm__(".symver memcpy, memcpy@GLIBC_2.2.5");

