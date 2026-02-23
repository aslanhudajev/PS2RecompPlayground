#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: entryStage__15CamPathMgrClassFv
// Address: 0x1cc4a0 - 0x1cc560
void entryStage__15CamPathMgrClassFv_0x1cc4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("entryStage__15CamPathMgrClassFv");


    ctx->pc = 0x1cc4a0u;

    // 0x1cc4a0: 0x27bdffe0
    ctx->pc = 0x1cc4a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cc4a4: 0x7fbf0010
    ctx->pc = 0x1cc4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1cc4a8: 0x7fb00000
    ctx->pc = 0x1cc4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1cc4ac: 0x3c010050
    ctx->pc = 0x1cc4acu;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1cc4b0: 0x8424e504
    ctx->pc = 0x1cc4b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294960388)));
    // 0x1cc4b4: 0x24030009
    ctx->pc = 0x1cc4b4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 9));
    // 0x1cc4b8: 0x10830003
    ctx->pc = 0x1CC4B8u;
    {
        const bool branch_taken_0x1cc4b8 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 3));
        if (branch_taken_0x1cc4b8) {
            ctx->pc = 0x1CC4C8u;
            goto label_1cc4c8;
        }
    }
    ctx->pc = 0x1CC4C0u;
    // 0x1cc4c0: 0x10000014
    ctx->pc = 0x1CC4C0u;
    {
        const bool branch_taken_0x1cc4c0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CC4C4u;
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937512)));
        if (branch_taken_0x1cc4c0) {
            ctx->pc = 0x1CC514u;
            goto label_1cc514;
        }
    }
    ctx->pc = 0x1CC4C8u;
label_1cc4c8:
    // 0x1cc4c8: 0x3c020050
    ctx->pc = 0x1cc4c8u;
    SET_GPR_U32(ctx, 2, ((uint32_t)80 << 16));
    // 0x1cc4cc: 0xc2839ac
    ctx->pc = 0x1CC4CCu;
    SET_GPR_U32(ctx, 31, 0x1CC4D4u);
    ctx->pc = 0x1CC4D0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 720));
    ctx->pc = 0xA0E6B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        getDemoNo__12DemoMgrClassFv_0xa0e6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC4D4u; }
        else if (ctx->pc != 0x1CC4D4u) { ctx->pc = 0x1CC4D4u; }
    }
    if (ctx->pc != 0x1CC4D4u) { return; }
    ctx->pc = 0x1CC4D4u;
    // 0x1cc4d4: 0x24030002
    ctx->pc = 0x1cc4d4u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cc4d8: 0x1043000a
    ctx->pc = 0x1CC4D8u;
    {
        const bool branch_taken_0x1cc4d8 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1cc4d8) {
            ctx->pc = 0x1CC504u;
            goto label_1cc504;
        }
    }
    ctx->pc = 0x1CC4E0u;
    // 0x1cc4e0: 0x24030001
    ctx->pc = 0x1cc4e0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cc4e4: 0x10430004
    ctx->pc = 0x1CC4E4u;
    {
        const bool branch_taken_0x1cc4e4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 3));
        if (branch_taken_0x1cc4e4) {
            ctx->pc = 0x1CC4F8u;
            goto label_1cc4f8;
        }
    }
    ctx->pc = 0x1CC4ECu;
    // 0x1cc4ec: 0x3c03002c
    ctx->pc = 0x1cc4ecu;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
    // 0x1cc4f0: 0x10000013
    ctx->pc = 0x1CC4F0u;
    {
        const bool branch_taken_0x1cc4f0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CC4F4u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 4294958080));
        if (branch_taken_0x1cc4f0) {
            ctx->pc = 0x1CC540u;
            goto label_1cc540;
        }
    }
    ctx->pc = 0x1CC4F8u;
label_1cc4f8:
    // 0x1cc4f8: 0x3c03002c
    ctx->pc = 0x1cc4f8u;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
    // 0x1cc4fc: 0x10000010
    ctx->pc = 0x1CC4FCu;
    {
        const bool branch_taken_0x1cc4fc = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CC500u;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 4294958088));
        if (branch_taken_0x1cc4fc) {
            ctx->pc = 0x1CC540u;
            goto label_1cc540;
        }
    }
    ctx->pc = 0x1CC504u;
label_1cc504:
    // 0x1cc504: 0x3c03002c
    ctx->pc = 0x1cc504u;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
    // 0x1cc508: 0x1000000d
    ctx->pc = 0x1CC508u;
    {
        const bool branch_taken_0x1cc508 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CC50Cu;
        SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 3), 4294958088));
        if (branch_taken_0x1cc508) {
            ctx->pc = 0x1CC540u;
            goto label_1cc540;
        }
    }
    ctx->pc = 0x1CC510u;
    // 0x1cc510: 0x83848ba8
    ctx->pc = 0x1cc510u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937512)));
label_1cc514:
    // 0x1cc514: 0x3c03002c
    ctx->pc = 0x1cc514u;
    SET_GPR_U32(ctx, 3, ((uint32_t)44 << 16));
    // 0x1cc518: 0x2463dc50
    ctx->pc = 0x1cc518u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 3), 4294958160));
    // 0x1cc51c: 0x42080
    ctx->pc = 0x1cc51cu;
    SET_GPR_U32(ctx, 4, SLL32(GPR_U32(ctx, 4), 2));
    // 0x1cc520: 0x641821
    ctx->pc = 0x1cc520u;
    SET_GPR_U32(ctx, 3, ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1cc524: 0x10000006
    ctx->pc = 0x1CC524u;
    {
        const bool branch_taken_0x1cc524 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1CC528u;
        SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 3), 0)));
        if (branch_taken_0x1cc524) {
            ctx->pc = 0x1CC540u;
            goto label_1cc540;
        }
    }
    ctx->pc = 0x1CC52Cu;
label_1cc52c:
    // 0x1cc52c: 0x82050000
    ctx->pc = 0x1cc52cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cc530: 0x3c020051
    ctx->pc = 0x1cc530u;
    SET_GPR_U32(ctx, 2, ((uint32_t)81 << 16));
    // 0x1cc534: 0x244437a0
    ctx->pc = 0x1cc534u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 2), 14240));
    // 0x1cc538: 0xc0865b0
    ctx->pc = 0x1CC538u;
    SET_GPR_U32(ctx, 31, 0x1CC540u);
    ctx->pc = 0x1CC53Cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x2196C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        entryBankCamPath__13EntryDatClassFi_0x2196c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC540u; }
        else if (ctx->pc != 0x1CC540u) { ctx->pc = 0x1CC540u; }
    }
    if (ctx->pc != 0x1CC540u) { return; }
    ctx->pc = 0x1CC540u;
label_1cc540:
    // 0x1cc540: 0x82040000
    ctx->pc = 0x1cc540u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cc544: 0x2403ffff
    ctx->pc = 0x1cc544u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cc548: 0x1483fff8
    ctx->pc = 0x1CC548u;
    {
        const bool branch_taken_0x1cc548 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 3));
        if (branch_taken_0x1cc548) {
            ctx->pc = 0x1CC52Cu;
            goto label_1cc52c;
        }
    }
    ctx->pc = 0x1CC550u;
    // 0x1cc550: 0x7bbf0010
    ctx->pc = 0x1cc550u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cc554: 0x7bb00000
    ctx->pc = 0x1cc554u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cc558: 0x3e00008
    ctx->pc = 0x1CC558u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CC55Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1CC4C8u: goto label_1cc4c8;
            case 0x1CC4F8u: goto label_1cc4f8;
            case 0x1CC504u: goto label_1cc504;
            case 0x1CC514u: goto label_1cc514;
            case 0x1CC52Cu: goto label_1cc52c;
            case 0x1CC540u: goto label_1cc540;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1CC560u;
}
