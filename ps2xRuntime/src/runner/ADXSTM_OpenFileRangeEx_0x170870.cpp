#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSTM_OpenFileRangeEx
// Address: 0x170870 - 0x170904
void ADXSTM_OpenFileRangeEx_0x170870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSTM_OpenFileRangeEx");


    ctx->pc = 0x170870u;

    // 0x170870: 0x27bdffb0
    ctx->pc = 0x170870u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x170874: 0xffb10010
    ctx->pc = 0x170874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x170878: 0xffb00000
    ctx->pc = 0x170878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x17087c: 0xc0882d
    ctx->pc = 0x17087cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170880: 0x80802d
    ctx->pc = 0x170880u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170884: 0xffb30030
    ctx->pc = 0x170884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x170888: 0xffb20020
    ctx->pc = 0x170888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17088c: 0x100982d
    ctx->pc = 0x17088cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170890: 0xe0902d
    ctx->pc = 0x170890u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170894: 0xffbf0040
    ctx->pc = 0x170894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x170898: 0xc05d234
    ctx->pc = 0x170898u;
    SET_GPR_U32(ctx, 31, 0x1708A0u);
    ctx->pc = 0x17089Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1748D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsOpen_0x1748d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1708A0u; }
        else if (ctx->pc != 0x1708A0u) { ctx->pc = 0x1708A0u; }
    }
    if (ctx->pc != 0x1708A0u) { return; }
    ctx->pc = 0x1708A0u;
    // 0x1708a0: 0x14400007
    ctx->pc = 0x1708A0u;
    {
        const bool branch_taken_0x1708a0 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1708A4u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1708a0) {
            ctx->pc = 0x1708C0u;
            goto label_1708c0;
        }
    }
    ctx->pc = 0x1708A8u;
    // 0x1708a8: 0x3c04002c
    ctx->pc = 0x1708a8u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x1708ac: 0x200282d
    ctx->pc = 0x1708acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1708b0: 0xc05a868
    ctx->pc = 0x1708B0u;
    SET_GPR_U32(ctx, 31, 0x1708B8u);
    ctx->pc = 0x1708B4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294943072));
    ctx->pc = 0x16A1A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXERR_CallErrFunc2_0x16a1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1708B8u; }
        else if (ctx->pc != 0x1708B8u) { ctx->pc = 0x1708B8u; }
    }
    if (ctx->pc != 0x1708B8u) { return; }
    ctx->pc = 0x1708B8u;
    // 0x1708b8: 0x1000000b
    ctx->pc = 0x1708B8u;
    {
        const bool branch_taken_0x1708b8 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1708BCu;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1708b8) {
            ctx->pc = 0x1708E8u;
            goto label_1708e8;
        }
    }
    ctx->pc = 0x1708C0u;
label_1708c0:
    // 0x1708c0: 0x220282d
    ctx->pc = 0x1708c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1708c4: 0x1232c0
    ctx->pc = 0x1708c4u;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 18), 11));
    // 0x1708c8: 0xc05c1ec
    ctx->pc = 0x1708C8u;
    SET_GPR_U32(ctx, 31, 0x1708D0u);
    ctx->pc = 0x1708CCu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1707B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTMF_CreateCvfs_0x1707b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1708D0u; }
        else if (ctx->pc != 0x1708D0u) { ctx->pc = 0x1708D0u; }
    }
    if (ctx->pc != 0x1708D0u) { return; }
    ctx->pc = 0x1708D0u;
    // 0x1708d0: 0x40802d
    ctx->pc = 0x1708d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1708d4: 0x12000003
    ctx->pc = 0x1708D4u;
    {
        const bool branch_taken_0x1708d4 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x1708D8u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1708d4) {
            ctx->pc = 0x1708E4u;
            goto label_1708e4;
        }
    }
    ctx->pc = 0x1708DCu;
    // 0x1708dc: 0xc05c2e2
    ctx->pc = 0x1708DCu;
    SET_GPR_U32(ctx, 31, 0x1708E4u);
    ctx->pc = 0x1708E0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x170B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_Seek_0x170b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1708E4u; }
        else if (ctx->pc != 0x1708E4u) { ctx->pc = 0x1708E4u; }
    }
    if (ctx->pc != 0x1708E4u) { return; }
    ctx->pc = 0x1708E4u;
label_1708e4:
    // 0x1708e4: 0x200102d
    ctx->pc = 0x1708e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1708e8:
    // 0x1708e8: 0xdfbf0040
    ctx->pc = 0x1708e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1708ec: 0xdfb30030
    ctx->pc = 0x1708ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1708f0: 0xdfb20020
    ctx->pc = 0x1708f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1708f4: 0xdfb10010
    ctx->pc = 0x1708f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1708f8: 0xdfb00000
    ctx->pc = 0x1708f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1708fc: 0x3e00008
    ctx->pc = 0x1708FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170900u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1708C0u: goto label_1708c0;
            case 0x1708E4u: goto label_1708e4;
            case 0x1708E8u: goto label_1708e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x170904u;
}
