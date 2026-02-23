#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSTM_OpenFileRangeExRt
// Address: 0x170908 - 0x17099c
void ADXSTM_OpenFileRangeExRt_0x170908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSTM_OpenFileRangeExRt");


    ctx->pc = 0x170908u;

    // 0x170908: 0x27bdffb0
    ctx->pc = 0x170908u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x17090c: 0xffb10010
    ctx->pc = 0x17090cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x170910: 0xffb00000
    ctx->pc = 0x170910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x170914: 0xc0882d
    ctx->pc = 0x170914u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170918: 0x80802d
    ctx->pc = 0x170918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17091c: 0xffb30030
    ctx->pc = 0x17091cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x170920: 0xffb20020
    ctx->pc = 0x170920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x170924: 0x100982d
    ctx->pc = 0x170924u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170928: 0xe0902d
    ctx->pc = 0x170928u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17092c: 0xffbf0040
    ctx->pc = 0x17092cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x170930: 0xc05d234
    ctx->pc = 0x170930u;
    SET_GPR_U32(ctx, 31, 0x170938u);
    ctx->pc = 0x170934u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1748D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsOpen_0x1748d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170938u; }
        else if (ctx->pc != 0x170938u) { ctx->pc = 0x170938u; }
    }
    if (ctx->pc != 0x170938u) { return; }
    ctx->pc = 0x170938u;
    // 0x170938: 0x14400007
    ctx->pc = 0x170938u;
    {
        const bool branch_taken_0x170938 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x17093Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x170938) {
            ctx->pc = 0x170958u;
            goto label_170958;
        }
    }
    ctx->pc = 0x170940u;
    // 0x170940: 0x3c04002c
    ctx->pc = 0x170940u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x170944: 0x200282d
    ctx->pc = 0x170944u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170948: 0xc05a868
    ctx->pc = 0x170948u;
    SET_GPR_U32(ctx, 31, 0x170950u);
    ctx->pc = 0x17094Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294943120));
    ctx->pc = 0x16A1A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXERR_CallErrFunc2_0x16a1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170950u; }
        else if (ctx->pc != 0x170950u) { ctx->pc = 0x170950u; }
    }
    if (ctx->pc != 0x170950u) { return; }
    ctx->pc = 0x170950u;
    // 0x170950: 0x1000000b
    ctx->pc = 0x170950u;
    {
        const bool branch_taken_0x170950 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x170954u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x170950) {
            ctx->pc = 0x170980u;
            goto label_170980;
        }
    }
    ctx->pc = 0x170958u;
label_170958:
    // 0x170958: 0x220282d
    ctx->pc = 0x170958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17095c: 0x1232c0
    ctx->pc = 0x17095cu;
    SET_GPR_U32(ctx, 6, SLL32(GPR_U32(ctx, 18), 11));
    // 0x170960: 0xc05c1c0
    ctx->pc = 0x170960u;
    SET_GPR_U32(ctx, 31, 0x170968u);
    ctx->pc = 0x170964u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x170700u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTMF_CreateCvfsRt_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170968u; }
        else if (ctx->pc != 0x170968u) { ctx->pc = 0x170968u; }
    }
    if (ctx->pc != 0x170968u) { return; }
    ctx->pc = 0x170968u;
    // 0x170968: 0x40802d
    ctx->pc = 0x170968u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17096c: 0x12000003
    ctx->pc = 0x17096Cu;
    {
        const bool branch_taken_0x17096c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x170970u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x17096c) {
            ctx->pc = 0x17097Cu;
            goto label_17097c;
        }
    }
    ctx->pc = 0x170974u;
    // 0x170974: 0xc05c2e2
    ctx->pc = 0x170974u;
    SET_GPR_U32(ctx, 31, 0x17097Cu);
    ctx->pc = 0x170978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x170B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_Seek_0x170b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17097Cu; }
        else if (ctx->pc != 0x17097Cu) { ctx->pc = 0x17097Cu; }
    }
    if (ctx->pc != 0x17097Cu) { return; }
    ctx->pc = 0x17097Cu;
label_17097c:
    // 0x17097c: 0x200102d
    ctx->pc = 0x17097cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_170980:
    // 0x170980: 0xdfbf0040
    ctx->pc = 0x170980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x170984: 0xdfb30030
    ctx->pc = 0x170984u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x170988: 0xdfb20020
    ctx->pc = 0x170988u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17098c: 0xdfb10010
    ctx->pc = 0x17098cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170990: 0xdfb00000
    ctx->pc = 0x170990u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170994: 0x3e00008
    ctx->pc = 0x170994u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170998u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170958u: goto label_170958;
            case 0x17097Cu: goto label_17097c;
            case 0x170980u: goto label_170980;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17099Cu;
}
