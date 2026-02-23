#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFTIM_UpdateItime
// Address: 0x19d898 - 0x19d930
void SFTIM_UpdateItime_0x19d898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFTIM_UpdateItime");


    ctx->pc = 0x19d898u;

    // 0x19d898: 0x80402d
    ctx->pc = 0x19d898u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19d89c: 0x8d060240
    ctx->pc = 0x19d89cu;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 8), 576)));
    // 0x19d8a0: 0x2402fffb
    ctx->pc = 0x19d8a0u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x19d8a4: 0x14c20003
    ctx->pc = 0x19D8A4u;
    {
        const bool branch_taken_0x19d8a4 = (GPR_U32(ctx, 6) != GPR_U32(ctx, 2));
        ctx->pc = 0x19D8A8u;
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19d8a4) {
            ctx->pc = 0x19D8B4u;
            goto label_19d8b4;
        }
    }
    ctx->pc = 0x19D8ACu;
    // 0x19d8ac: 0x3e00008
    ctx->pc = 0x19D8ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D8B0u;
        WRITE32(ADD32(GPR_U32(ctx, 8), 576), GPR_U32(ctx, 10));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19D8B4u: goto label_19d8b4;
            case 0x19D924u: goto label_19d924;
            case 0x19D928u: goto label_19d928;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19D8B4u;
label_19d8b4:
    // 0x19d8b4: 0x1463823
    ctx->pc = 0x19d8b4u;
    SET_GPR_U32(ctx, 7, SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x19d8b8: 0x10e0001b
    ctx->pc = 0x19D8B8u;
    {
        const bool branch_taken_0x19d8b8 = (GPR_U32(ctx, 7) == GPR_U32(ctx, 0));
        ctx->pc = 0x19D8BCu;
        SET_GPR_U32(ctx, 5, ((uint32_t)32767 << 16));
        if (branch_taken_0x19d8b8) {
            ctx->pc = 0x19D928u;
            goto label_19d928;
        }
    }
    ctx->pc = 0x19D8C0u;
    // 0x19d8c0: 0x8d030248
    ctx->pc = 0x19d8c0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 8), 584)));
    // 0x19d8c4: 0x8d02024c
    ctx->pc = 0x19d8c4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 588)));
    // 0x19d8c8: 0x34a5ffff
    ctx->pc = 0x19d8c8u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 65535));
    // 0x19d8cc: 0xe3302a
    ctx->pc = 0x19d8ccu;
    SET_GPR_U32(ctx, 6, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 3)));
    // 0x19d8d0: 0x8d090244
    ctx->pc = 0x19d8d0u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 8), 580)));
    // 0x19d8d4: 0x47202a
    ctx->pc = 0x19d8d4u;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 7)));
    // 0x19d8d8: 0xe6180a
    ctx->pc = 0x19d8d8u;
    if (GPR_U32(ctx, 6) == 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 7));
    // 0x19d8dc: 0xe4100a
    ctx->pc = 0x19d8dcu;
    if (GPR_U32(ctx, 4) == 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 7));
    // 0x19d8e0: 0xad0a0240
    ctx->pc = 0x19d8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 576), GPR_U32(ctx, 10));
    // 0x19d8e4: 0xad030248
    ctx->pc = 0x19d8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 584), GPR_U32(ctx, 3));
    // 0x19d8e8: 0x1125000e
    ctx->pc = 0x19D8E8u;
    {
        const bool branch_taken_0x19d8e8 = (GPR_U32(ctx, 9) == GPR_U32(ctx, 5));
        ctx->pc = 0x19D8ECu;
        WRITE32(ADD32(GPR_U32(ctx, 8), 588), GPR_U32(ctx, 2));
        if (branch_taken_0x19d8e8) {
            ctx->pc = 0x19D924u;
            goto label_19d924;
        }
    }
    ctx->pc = 0x19D8F0u;
    // 0x19d8f0: 0xe9102a
    ctx->pc = 0x19d8f0u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 7), GPR_S32(ctx, 9)));
    // 0x19d8f4: 0x1040000b
    ctx->pc = 0x19D8F4u;
    {
        const bool branch_taken_0x19d8f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19D8F8u;
        SET_GPR_U32(ctx, 4, SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
        if (branch_taken_0x19d8f4) {
            ctx->pc = 0x19D924u;
            goto label_19d924;
        }
    }
    ctx->pc = 0x19D8FCu;
    // 0x19d8fc: 0x2403ffff
    ctx->pc = 0x19d8fcu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19d900: 0x64182a
    ctx->pc = 0x19d900u;
    SET_GPR_U32(ctx, 3, SLT32(GPR_S32(ctx, 3), GPR_S32(ctx, 4)));
    // 0x19d904: 0x24820007
    ctx->pc = 0x19d904u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 4), 7));
    // 0x19d908: 0x83100b
    ctx->pc = 0x19d908u;
    if (GPR_U32(ctx, 3) != 0) SET_GPR_U32(ctx, 2, GPR_U32(ctx, 4));
    // 0x19d90c: 0x210c3
    ctx->pc = 0x19d90cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x19d910: 0x50400005
    ctx->pc = 0x19D910u;
    {
        const bool branch_taken_0x19d910 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x19d910) {
            ctx->pc = 0x19D914u;
            WRITE32(ADD32(GPR_U32(ctx, 8), 580), GPR_U32(ctx, 7));
            ctx->pc = 0x19D928u;
            goto label_19d928;
        }
    }
    ctx->pc = 0x19D918u;
    // 0x19d918: 0x1221023
    ctx->pc = 0x19d918u;
    SET_GPR_U32(ctx, 2, SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x19d91c: 0x3e00008
    ctx->pc = 0x19D91Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19D920u;
        WRITE32(ADD32(GPR_U32(ctx, 8), 580), GPR_U32(ctx, 2));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19D8B4u: goto label_19d8b4;
            case 0x19D924u: goto label_19d924;
            case 0x19D928u: goto label_19d928;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19D924u;
label_19d924:
    // 0x19d924: 0xad070244
    ctx->pc = 0x19d924u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 580), GPR_U32(ctx, 7));
label_19d928:
    // 0x19d928: 0x3e00008
    ctx->pc = 0x19D928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19D8B4u: goto label_19d8b4;
            case 0x19D924u: goto label_19d924;
            case 0x19D928u: goto label_19d928;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19D930u;
}
