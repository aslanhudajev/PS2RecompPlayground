#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFBUF_FixAringBuf
// Address: 0x191998 - 0x191a18
void SFBUF_FixAringBuf_0x191998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFBUF_FixAringBuf");


    ctx->pc = 0x191998u;

    // 0x191998: 0x24020388
    ctx->pc = 0x191998u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 904));
    // 0x19199c: 0x24840d34
    ctx->pc = 0x19199cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 3380));
    // 0x1919a0: 0xa22818
    ctx->pc = 0x1919a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)(uint32_t)result); }
    // 0x1919a4: 0x28e20002
    ctx->pc = 0x1919a4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), 2));
    // 0x1919a8: 0x852021
    ctx->pc = 0x1919a8u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1919ac: 0x24890010
    ctx->pc = 0x1919acu;
    SET_GPR_S32(ctx, 9, ADD32(GPR_U32(ctx, 4), 16));
    // 0x1919b0: 0x8c8b0010
    ctx->pc = 0x1919b0u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1919b4: 0x14400006
    ctx->pc = 0x1919B4u;
    {
        const bool branch_taken_0x1919b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1919B8u;
        SET_GPR_U32(ctx, 10, READ32(ADD32(GPR_U32(ctx, 9), 4)));
        if (branch_taken_0x1919b4) {
            ctx->pc = 0x1919D0u;
            goto label_1919d0;
        }
    }
    ctx->pc = 0x1919BCu;
    // 0x1919bc: 0x147001a
    ctx->pc = 0x1919bcu;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 10);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1919c0: 0x50e00001
    ctx->pc = 0x1919C0u;
    {
        const bool branch_taken_0x1919c0 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        if (branch_taken_0x1919c0) {
            ctx->pc = 0x1919C4u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x1919C8u;
            goto label_1919c8;
        }
    }
    ctx->pc = 0x1919C8u;
label_1919c8:
    // 0x1919c8: 0x1012
    ctx->pc = 0x1919c8u;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x1919cc: 0x40502d
    ctx->pc = 0x1919ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1919d0:
    // 0x1919d0: 0x24c40007
    ctx->pc = 0x1919d0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 6), 7));
    // 0x1919d4: 0x2402ffff
    ctx->pc = 0x1919d4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1919d8: 0x44102a
    ctx->pc = 0x1919d8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 4)));
    // 0x1919dc: 0x24c3000e
    ctx->pc = 0x1919dcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 6), 14));
    // 0x1919e0: 0x82180b
    ctx->pc = 0x1919e0u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 4));
    // 0x1919e4: 0x16a2821
    ctx->pc = 0x1919e4u;
    SET_GPR_U32(ctx, 5, ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 10)));
    // 0x1919e8: 0x318c3
    ctx->pc = 0x1919e8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
    // 0x1919ec: 0xad26000c
    ctx->pc = 0x1919ecu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 6));
    // 0x1919f0: 0x143001a
    ctx->pc = 0x1919f0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 10);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x1919f4: 0xad270010
    ctx->pc = 0x1919f4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 16), GPR_U32(ctx, 7));
    // 0x1919f8: 0xad280008
    ctx->pc = 0x1919f8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 8));
    // 0x1919fc: 0xad250018
    ctx->pc = 0x1919fcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 24), GPR_U32(ctx, 5));
    // 0x191a00: 0xad2b0014
    ctx->pc = 0x191a00u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 20), GPR_U32(ctx, 11));
    // 0x191a04: 0x50600001
    ctx->pc = 0x191A04u;
    {
        const bool branch_taken_0x191a04 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x191a04) {
            ctx->pc = 0x191A08u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x191A0Cu;
            goto label_191a0c;
        }
    }
    ctx->pc = 0x191A0Cu;
label_191a0c:
    // 0x191a0c: 0x1012
    ctx->pc = 0x191a0cu;
    SET_GPR_U32(ctx, 2, ctx->lo);
    // 0x191a10: 0x3e00008
    ctx->pc = 0x191A10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191A14u;
        WRITE32(ADD32(GPR_U32(ctx, 9), 28), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1919C8u: goto label_1919c8;
            case 0x1919D0u: goto label_1919d0;
            case 0x191A0Cu: goto label_191a0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x191A18u;
}
