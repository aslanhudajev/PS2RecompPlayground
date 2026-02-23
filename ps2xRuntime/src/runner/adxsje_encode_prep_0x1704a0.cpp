#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxsje_encode_prep
// Address: 0x1704a0 - 0x170530
void adxsje_encode_prep_0x1704a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxsje_encode_prep");


    ctx->pc = 0x1704a0u;

    // 0x1704a0: 0x27bdffc0
    ctx->pc = 0x1704a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1704a4: 0xffb00000
    ctx->pc = 0x1704a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1704a8: 0xffbf0030
    ctx->pc = 0x1704a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1704ac: 0x80802d
    ctx->pc = 0x1704acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1704b0: 0xffb20020
    ctx->pc = 0x1704b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1704b4: 0xffb10010
    ctx->pc = 0x1704b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1704b8: 0xc05be96
    ctx->pc = 0x1704B8u;
    SET_GPR_U32(ctx, 31, 0x1704C0u);
    ctx->pc = 0x1704BCu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->pc = 0x16FA58u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxsje_output_header_0x16fa58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1704C0u; }
        else if (ctx->pc != 0x1704C0u) { ctx->pc = 0x1704C0u; }
    }
    if (ctx->pc != 0x1704C0u) { return; }
    ctx->pc = 0x1704C0u;
    // 0x1704c0: 0x40202d
    ctx->pc = 0x1704c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1704c4: 0x10800014
    ctx->pc = 0x1704C4u;
    {
        const bool branch_taken_0x1704c4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x1704C8u;
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1704c4) {
            ctx->pc = 0x170518u;
            goto label_170518;
        }
    }
    ctx->pc = 0x1704CCu;
    // 0x1704cc: 0x8e02002c
    ctx->pc = 0x1704ccu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1704d0: 0x8e030058
    ctx->pc = 0x1704d0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1704d4: 0x441021
    ctx->pc = 0x1704d4u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1704d8: 0x1860000d
    ctx->pc = 0x1704D8u;
    {
        const bool branch_taken_0x1704d8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1704DCu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        if (branch_taken_0x1704d8) {
            ctx->pc = 0x170510u;
            goto label_170510;
        }
    }
    ctx->pc = 0x1704E0u;
    // 0x1704e0: 0x26120080
    ctx->pc = 0x1704e0u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 16), 128));
    // 0x1704e4: 0x111080
    ctx->pc = 0x1704e4u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
label_1704e8:
    // 0x1704e8: 0x8e050064
    ctx->pc = 0x1704e8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 100)));
    // 0x1704ec: 0x2421021
    ctx->pc = 0x1704ecu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x1704f0: 0x8e06005c
    ctx->pc = 0x1704f0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x1704f4: 0x8c440000
    ctx->pc = 0x1704f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1704f8: 0xc05bb5e
    ctx->pc = 0x1704F8u;
    SET_GPR_U32(ctx, 31, 0x170500u);
    ctx->pc = 0x1704FCu;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    ctx->pc = 0x16ED78u;
    {
        const uint32_t __entryPc = ctx->pc;
        pflt_calc_coef_0x16ed78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170500u; }
        else if (ctx->pc != 0x170500u) { ctx->pc = 0x170500u; }
    }
    if (ctx->pc != 0x170500u) { return; }
    ctx->pc = 0x170500u;
    // 0x170500: 0x8e020058
    ctx->pc = 0x170500u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x170504: 0x222102a
    ctx->pc = 0x170504u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), GPR_S32(ctx, 2)));
    // 0x170508: 0x1440fff7
    ctx->pc = 0x170508u;
    {
        const bool branch_taken_0x170508 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17050Cu;
        SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 17), 2));
        if (branch_taken_0x170508) {
            ctx->pc = 0x1704E8u;
            goto label_1704e8;
        }
    }
    ctx->pc = 0x170510u;
label_170510:
    // 0x170510: 0x24020002
    ctx->pc = 0x170510u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 2));
    // 0x170514: 0xa2020001
    ctx->pc = 0x170514u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_170518:
    // 0x170518: 0xdfbf0030
    ctx->pc = 0x170518u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17051c: 0xdfb20020
    ctx->pc = 0x17051cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x170520: 0xdfb10010
    ctx->pc = 0x170520u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170524: 0xdfb00000
    ctx->pc = 0x170524u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170528: 0x3e00008
    ctx->pc = 0x170528u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17052Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1704E8u: goto label_1704e8;
            case 0x170510u: goto label_170510;
            case 0x170518u: goto label_170518;
            default: break;
        }
        return;
    }
    ctx->pc = 0x170530u;
}
