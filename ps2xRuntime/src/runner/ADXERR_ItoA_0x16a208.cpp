#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXERR_ItoA
// Address: 0x16a208 - 0x16a300
void ADXERR_ItoA_0x16a208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXERR_ItoA");


    ctx->pc = 0x16a208u;

    // 0x16a208: 0x2402000a
    ctx->pc = 0x16a208u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
    // 0x16a20c: 0x27bdffc0
    ctx->pc = 0x16a20cu;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16a210: 0x82001a
    ctx->pc = 0x16a210u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x16a214: 0xffb00000
    ctx->pc = 0x16a214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16a218: 0xffbf0030
    ctx->pc = 0x16a218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16a21c: 0xa0802d
    ctx->pc = 0x16a21cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a220: 0xffb20020
    ctx->pc = 0x16a220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x16a224: 0x282d
    ctx->pc = 0x16a224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a228: 0xffb10010
    ctx->pc = 0x16a228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x16a22c: 0x50400001
    ctx->pc = 0x16A22Cu;
    {
        const bool branch_taken_0x16a22c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x16a22c) {
            ctx->pc = 0x16A230u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x16A234u;
            goto label_16a234;
        }
    }
    ctx->pc = 0x16A234u;
label_16a234:
    // 0x16a234: 0x3810
    ctx->pc = 0x16a234u;
    SET_GPR_U32(ctx, 7, ctx->hi);
    // 0x16a238: 0x2012
    ctx->pc = 0x16a238u;
    SET_GPR_U32(ctx, 4, ctx->lo);
    // 0x16a23c: 0xa2070000
    ctx->pc = 0x16a23cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x16a240: 0x14800005
    ctx->pc = 0x16A240u;
    {
        const bool branch_taken_0x16a240 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x16A244u;
        SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 6), 4294967295));
        if (branch_taken_0x16a240) {
            ctx->pc = 0x16A258u;
            goto label_16a258;
        }
    }
    ctx->pc = 0x16A248u;
    // 0x16a248: 0xa2000000
    ctx->pc = 0x16a248u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x16a24c: 0x10000012
    ctx->pc = 0x16A24Cu;
    {
        const bool branch_taken_0x16a24c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16A250u;
        SET_GPR_U32(ctx, 8, ((uint32_t)46 << 16));
        if (branch_taken_0x16a24c) {
            ctx->pc = 0x16A298u;
            goto label_16a298;
        }
    }
    ctx->pc = 0x16A254u;
    // 0x16a254: 0x0
    ctx->pc = 0x16a254u;
    // NOP
label_16a258:
    // 0x16a258: 0x3c08002e
    ctx->pc = 0x16a258u;
    SET_GPR_U32(ctx, 8, ((uint32_t)46 << 16));
    // 0x16a25c: 0x24a50001
    ctx->pc = 0x16a25cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
label_16a260:
    // 0x16a260: 0x28a20020
    ctx->pc = 0x16a260u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), 32));
    // 0x16a264: 0x1040000c
    ctx->pc = 0x16A264u;
    {
        const bool branch_taken_0x16a264 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x16A268u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 10));
        if (branch_taken_0x16a264) {
            ctx->pc = 0x16A298u;
            goto label_16a298;
        }
    }
    ctx->pc = 0x16A26Cu;
    // 0x16a26c: 0x2053021
    ctx->pc = 0x16a26cu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x16a270: 0x82001a
    ctx->pc = 0x16a270u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint32_t)(dividend / divisor);            ctx->hi = (uint32_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1 : -1; ctx->hi = dividend;    } }
    // 0x16a274: 0x50400001
    ctx->pc = 0x16A274u;
    {
        const bool branch_taken_0x16a274 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x16a274) {
            ctx->pc = 0x16A278u;
            runtime->handleBreak(rdram, ctx);
            ctx->pc = 0x16A27Cu;
            goto label_16a27c;
        }
    }
    ctx->pc = 0x16A27Cu;
label_16a27c:
    // 0x16a27c: 0x2403000a
    ctx->pc = 0x16a27cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 10));
    // 0x16a280: 0x3810
    ctx->pc = 0x16a280u;
    SET_GPR_U32(ctx, 7, ctx->hi);
    // 0x16a284: 0x2012
    ctx->pc = 0x16a284u;
    SET_GPR_U32(ctx, 4, ctx->lo);
    // 0x16a288: 0xa0c70000
    ctx->pc = 0x16a288u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 7));
    // 0x16a28c: 0x1480fff4
    ctx->pc = 0x16A28Cu;
    {
        const bool branch_taken_0x16a28c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x16A290u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
        if (branch_taken_0x16a28c) {
            ctx->pc = 0x16A260u;
            goto label_16a260;
        }
    }
    ctx->pc = 0x16A294u;
    // 0x16a294: 0xa0c00000
    ctx->pc = 0x16a294u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
label_16a298:
    // 0x16a298: 0x2512cf80
    ctx->pc = 0x16a298u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 8), 4294954880));
    // 0x16a29c: 0xc051554
    ctx->pc = 0x16A29Cu;
    SET_GPR_U32(ctx, 31, 0x16A2A4u);
    ctx->pc = 0x16A2A0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x145550u;
    {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x145550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A2A4u; }
        else if (ctx->pc != 0x16A2A4u) { ctx->pc = 0x16A2A4u; }
    }
    if (ctx->pc != 0x16A2A4u) { return; }
    ctx->pc = 0x16A2A4u;
    // 0x16a2a4: 0x40382d
    ctx->pc = 0x16a2a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a2a8: 0xf1102a
    ctx->pc = 0x16a2a8u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 17)));
    // 0x16a2ac: 0x222380a
    ctx->pc = 0x16a2acu;
    if (GPR_U32(ctx, 2) == 0) SET_GPR_U32(ctx, 7, GPR_U32(ctx, 17));
    // 0x16a2b0: 0x18e0000b
    ctx->pc = 0x16A2B0u;
    {
        const bool branch_taken_0x16a2b0 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x16A2B4u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16a2b0) {
            ctx->pc = 0x16A2E0u;
            goto label_16a2e0;
        }
    }
    ctx->pc = 0x16A2B8u;
    // 0x16a2b8: 0x2642ffff
    ctx->pc = 0x16a2b8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x16a2bc: 0xe23021
    ctx->pc = 0x16a2bcu;
    SET_GPR_U32(ctx, 6, ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
label_16a2c0:
    // 0x16a2c0: 0x2052021
    ctx->pc = 0x16a2c0u;
    SET_GPR_U32(ctx, 4, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x16a2c4: 0x90c30000
    ctx->pc = 0x16a2c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16a2c8: 0x24a50001
    ctx->pc = 0x16a2c8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 5), 1));
    // 0x16a2cc: 0x24c6ffff
    ctx->pc = 0x16a2ccu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x16a2d0: 0xa0830000
    ctx->pc = 0x16a2d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x16a2d4: 0xa7102a
    ctx->pc = 0x16a2d4u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 5), GPR_S32(ctx, 7)));
    // 0x16a2d8: 0x1440fff9
    ctx->pc = 0x16A2D8u;
    {
        const bool branch_taken_0x16a2d8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x16a2d8) {
            ctx->pc = 0x16A2C0u;
            goto label_16a2c0;
        }
    }
    ctx->pc = 0x16A2E0u;
label_16a2e0:
    // 0x16a2e0: 0x2051021
    ctx->pc = 0x16a2e0u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x16a2e4: 0xdfbf0030
    ctx->pc = 0x16a2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16a2e8: 0xdfb20020
    ctx->pc = 0x16a2e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16a2ec: 0xdfb10010
    ctx->pc = 0x16a2ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a2f0: 0xdfb00000
    ctx->pc = 0x16a2f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a2f4: 0xa0400000
    ctx->pc = 0x16a2f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x16a2f8: 0x3e00008
    ctx->pc = 0x16A2F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A2FCu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16A234u: goto label_16a234;
            case 0x16A258u: goto label_16a258;
            case 0x16A260u: goto label_16a260;
            case 0x16A27Cu: goto label_16a27c;
            case 0x16A298u: goto label_16a298;
            case 0x16A2C0u: goto label_16a2c0;
            case 0x16A2E0u: goto label_16a2e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16A300u;
}
