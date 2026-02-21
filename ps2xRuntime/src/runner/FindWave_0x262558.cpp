#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: FindWave
// Address: 0x262558 - 0x2625fc
void FindWave_0x262558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x262558u;

    // 0x262558: 0x80382d
    ctx->pc = 0x262558u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26255c: 0x2406ffff
    ctx->pc = 0x26255cu;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x262560: 0x80e30000
    ctx->pc = 0x262560u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x262564: 0x3c02003c
    ctx->pc = 0x262564u;
    SET_GPR_U32(ctx, 2, ((uint32_t)60 << 16));
    // 0x262568: 0x2442a781
    ctx->pc = 0x262568u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294944641));
    // 0x26256c: 0x621021
    ctx->pc = 0x26256cu;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x262570: 0x90420000
    ctx->pc = 0x262570u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x262574: 0x30420002
    ctx->pc = 0x262574u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 2));
    // 0x262578: 0x2464ffe0
    ctx->pc = 0x262578u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 3), 4294967264));
    // 0x26257c: 0x82180b
    ctx->pc = 0x26257cu;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 4));
    // 0x262580: 0x31e00
    ctx->pc = 0x262580u;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 3), 24));
    // 0x262584: 0x32e03
    ctx->pc = 0x262584u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 24));
    // 0x262588: 0x3c030034
    ctx->pc = 0x262588u;
    SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
    // 0x26258c: 0x2462e520
    ctx->pc = 0x26258cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 3), 4294960416));
    // 0x262590: 0x8042000f
    ctx->pc = 0x262590u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 15)));
    // 0x262594: 0x14450004
    ctx->pc = 0x262594u;
    {
        const bool branch_taken_0x262594 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        ctx->pc = 0x262598u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x262594) {
            ctx->pc = 0x2625A8u;
            goto label_2625a8;
        }
    }
    ctx->pc = 0x26259Cu;
    // 0x26259c: 0x1000000e
    ctx->pc = 0x26259Cu;
    {
        const bool branch_taken_0x26259c = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2625A0u;
        SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 4294960416)));
        if (branch_taken_0x26259c) {
            ctx->pc = 0x2625D8u;
            goto label_2625d8;
        }
    }
    ctx->pc = 0x2625A4u;
    // 0x2625a4: 0x0
    ctx->pc = 0x2625a4u;
    // NOP
label_2625a8:
    // 0x2625a8: 0x24840001
    ctx->pc = 0x2625a8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
label_2625ac:
    // 0x2625ac: 0x2c82000e
    ctx->pc = 0x2625acu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 4), 14));
    // 0x2625b0: 0x10400009
    ctx->pc = 0x2625B0u;
    {
        const bool branch_taken_0x2625b0 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2625B4u;
        SET_GPR_U32(ctx, 3, ((uint32_t)52 << 16));
        if (branch_taken_0x2625b0) {
            ctx->pc = 0x2625D8u;
            goto label_2625d8;
        }
    }
    ctx->pc = 0x2625B8u;
    // 0x2625b8: 0x2463e520
    ctx->pc = 0x2625b8u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294960416));
    // 0x2625bc: 0x2402002c
    ctx->pc = 0x2625bcu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 44));
    // 0x2625c0: 0x821018
    ctx->pc = 0x2625c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x2625c4: 0x431821
    ctx->pc = 0x2625c4u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2625c8: 0x8062000f
    ctx->pc = 0x2625c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 15)));
    // 0x2625cc: 0x5445fff7
    ctx->pc = 0x2625CCu;
    {
        const bool branch_taken_0x2625cc = (GPR_U32(ctx, 2) != GPR_U32(ctx, 5));
        if (branch_taken_0x2625cc) {
            ctx->pc = 0x2625D0u;
            SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 1));
            ctx->pc = 0x2625ACu;
            goto label_2625ac;
        }
    }
    ctx->pc = 0x2625D4u;
    // 0x2625d4: 0x8c660000
    ctx->pc = 0x2625d4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2625d8:
    // 0x2625d8: 0x4c30003
    ctx->pc = 0x2625D8u;
    {
        const bool branch_taken_0x2625d8 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x2625d8) {
            ctx->pc = 0x2625DCu;
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
            ctx->pc = 0x2625E8u;
            goto label_2625e8;
        }
    }
    ctx->pc = 0x2625E0u;
    // 0x2625e0: 0x3e00008
    ctx->pc = 0x2625E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2625E4u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2625A8u: goto label_2625a8;
            case 0x2625ACu: goto label_2625ac;
            case 0x2625D8u: goto label_2625d8;
            case 0x2625E8u: goto label_2625e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2625E8u;
label_2625e8:
    // 0x2625e8: 0x2442ffcf
    ctx->pc = 0x2625e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 2), 4294967247));
    // 0x2625ec: 0x61a00
    ctx->pc = 0x2625ecu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 8));
    // 0x2625f0: 0x304200ff
    ctx->pc = 0x2625f0u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 255));
    // 0x2625f4: 0x3e00008
    ctx->pc = 0x2625F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2625F8u;
        SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2625A8u: goto label_2625a8;
            case 0x2625ACu: goto label_2625ac;
            case 0x2625D8u: goto label_2625d8;
            case 0x2625E8u: goto label_2625e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2625FCu;
}
