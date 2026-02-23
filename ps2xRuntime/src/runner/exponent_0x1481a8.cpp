#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: exponent
// Address: 0x1481a8 - 0x148288
void exponent_0x1481a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("exponent");


    ctx->pc = 0x1481a8u;

    // 0x1481a8: 0x27bdfec0
    ctx->pc = 0x1481a8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x1481ac: 0x4a10006
    ctx->pc = 0x1481ACu;
    {
        const bool branch_taken_0x1481ac = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1481B0u;
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 6));
        if (branch_taken_0x1481ac) {
            ctx->pc = 0x1481C8u;
            goto label_1481c8;
        }
    }
    ctx->pc = 0x1481B4u;
    // 0x1481b4: 0x2402002d
    ctx->pc = 0x1481b4u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 45));
    // 0x1481b8: 0x52823
    ctx->pc = 0x1481b8u;
    SET_GPR_U32(ctx, 5, SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x1481bc: 0xa0820001
    ctx->pc = 0x1481bcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1481c0: 0x10000004
    ctx->pc = 0x1481C0u;
    {
        const bool branch_taken_0x1481c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1481C4u;
        SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 4), 2));
        if (branch_taken_0x1481c0) {
            ctx->pc = 0x1481D4u;
            goto label_1481d4;
        }
    }
    ctx->pc = 0x1481C8u;
label_1481c8:
    // 0x1481c8: 0x2402002b
    ctx->pc = 0x1481c8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 43));
    // 0x1481cc: 0x24880002
    ctx->pc = 0x1481ccu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 4), 2));
    // 0x1481d0: 0xa0820001
    ctx->pc = 0x1481d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 2));
label_1481d4:
    // 0x1481d4: 0x27a60134
    ctx->pc = 0x1481d4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 29), 308));
    // 0x1481d8: 0x28a2000a
    ctx->pc = 0x1481d8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 10));
    // 0x1481dc: 0x14400021
    ctx->pc = 0x1481DCu;
    {
        const bool branch_taken_0x1481dc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1481E0u;
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1481dc) {
            ctx->pc = 0x148264u;
            goto label_148264;
        }
    }
    ctx->pc = 0x1481E4u;
    // 0x1481e4: 0x2407000a
    ctx->pc = 0x1481e4u;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 0), 10));
    // 0x1481e8: 0x482d
    ctx->pc = 0x1481e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1481ec: 0xa7001a
    ctx->pc = 0x1481ecu;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
label_1481f0:
    // 0x1481f0: 0x50e90001
    ctx->pc = 0x1481F0u;
    {
        const bool branch_taken_0x1481f0 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 9));
        if (branch_taken_0x1481f0) {
            ctx->pc = 0x1481F4u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x1481F8u;
            goto label_1481f8;
        }
    }
    ctx->pc = 0x1481F8u;
label_1481f8:
    // 0x1481f8: 0x24c6ffff
    ctx->pc = 0x1481f8u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1481fc: 0x1010
    ctx->pc = 0x1481fcu;
    SET_GPR_U32(ctx, 2, ctx->hi);
    // 0x148200: 0x1812
    ctx->pc = 0x148200u;
    SET_GPR_U32(ctx, 3, ctx->lo);
    // 0x148204: 0x24420030
    ctx->pc = 0x148204u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 48));
    // 0x148208: 0x60282d
    ctx->pc = 0x148208u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14820c: 0xa0c20000
    ctx->pc = 0x14820cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x148210: 0x28a3000a
    ctx->pc = 0x148210u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 5), 10));
    // 0x148214: 0x50e90001
    ctx->pc = 0x148214u;
    {
        const bool branch_taken_0x148214 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 9));
        if (branch_taken_0x148214) {
            ctx->pc = 0x148218u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x14821Cu;
            goto label_14821c;
        }
    }
    ctx->pc = 0x14821Cu;
label_14821c:
    // 0x14821c: 0x5060fff4
    ctx->pc = 0x14821Cu;
    {
        const bool branch_taken_0x14821c = (GPR_U32(ctx, 3) == GPR_U32(ctx, 0));
        if (branch_taken_0x14821c) {
            ctx->pc = 0x148220u;
            { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
            ctx->pc = 0x1481F0u;
            goto label_1481f0;
        }
    }
    ctx->pc = 0x148224u;
    // 0x148224: 0x24c6ffff
    ctx->pc = 0x148224u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x148228: 0x24a30030
    ctx->pc = 0x148228u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 48));
    // 0x14822c: 0xca102b
    ctx->pc = 0x14822cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x148230: 0x10400012
    ctx->pc = 0x148230u;
    {
        const bool branch_taken_0x148230 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x148234u;
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
        if (branch_taken_0x148230) {
            ctx->pc = 0x14827Cu;
            goto label_14827c;
        }
    }
    ctx->pc = 0x148238u;
    // 0x148238: 0x140282d
    ctx->pc = 0x148238u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14823c: 0x0
    ctx->pc = 0x14823cu;
    // NOP
label_148240:
    // 0x148240: 0x90c20000
    ctx->pc = 0x148240u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x148244: 0x24c60001
    ctx->pc = 0x148244u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 1));
    // 0x148248: 0xa1020000
    ctx->pc = 0x148248u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x14824c: 0xc5182b
    ctx->pc = 0x14824cu;
    SET_GPR_U32(ctx, 3, SLTU32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x148250: 0x25080001
    ctx->pc = 0x148250u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x148254: 0x1460fffa
    ctx->pc = 0x148254u;
    {
        const bool branch_taken_0x148254 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 0));
        if (branch_taken_0x148254) {
            ctx->pc = 0x148240u;
            goto label_148240;
        }
    }
    ctx->pc = 0x14825Cu;
    // 0x14825c: 0x10000008
    ctx->pc = 0x14825Cu;
    {
        const bool branch_taken_0x14825c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x148260u;
        SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
        if (branch_taken_0x14825c) {
            ctx->pc = 0x148280u;
            goto label_148280;
        }
    }
    ctx->pc = 0x148264u;
label_148264:
    // 0x148264: 0x24020030
    ctx->pc = 0x148264u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 48));
    // 0x148268: 0x24a30030
    ctx->pc = 0x148268u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 5), 48));
    // 0x14826c: 0xa1020000
    ctx->pc = 0x14826cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x148270: 0x25080001
    ctx->pc = 0x148270u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
    // 0x148274: 0xa1030000
    ctx->pc = 0x148274u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x148278: 0x25080001
    ctx->pc = 0x148278u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 8), 1));
label_14827c:
    // 0x14827c: 0x1041023
    ctx->pc = 0x14827cu;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_148280:
    // 0x148280: 0x3e00008
    ctx->pc = 0x148280u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x148284u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1481C8u: goto label_1481c8;
            case 0x1481D4u: goto label_1481d4;
            case 0x1481F0u: goto label_1481f0;
            case 0x1481F8u: goto label_1481f8;
            case 0x14821Cu: goto label_14821c;
            case 0x148240u: goto label_148240;
            case 0x148264u: goto label_148264;
            case 0x14827Cu: goto label_14827c;
            case 0x148280u: goto label_148280;
            default: break;
        }
        return;
    }
    ctx->pc = 0x148288u;
}
