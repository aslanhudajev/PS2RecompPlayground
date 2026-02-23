#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: adxf_SetFileInfoEx
// Address: 0x16b538 - 0x16b5c4
void adxf_SetFileInfoEx_0x16b538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("adxf_SetFileInfoEx");


    ctx->pc = 0x16b538u;

    // 0x16b538: 0x27bdffe0
    ctx->pc = 0x16b538u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16b53c: 0xffb00000
    ctx->pc = 0x16b53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16b540: 0x80802d
    ctx->pc = 0x16b540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b544: 0xffbf0010
    ctx->pc = 0x16b544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16b548: 0xa0202d
    ctx->pc = 0x16b548u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b54c: 0x14800004
    ctx->pc = 0x16B54Cu;
    {
        const bool branch_taken_0x16b54c = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        ctx->pc = 0x16B550u;
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16b54c) {
            ctx->pc = 0x16B560u;
            goto label_16b560;
        }
    }
    ctx->pc = 0x16B554u;
    // 0x16b554: 0x3c04002c
    ctx->pc = 0x16b554u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x16b558: 0x10000007
    ctx->pc = 0x16B558u;
    {
        const bool branch_taken_0x16b558 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16B55Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294939616));
        if (branch_taken_0x16b558) {
            ctx->pc = 0x16B578u;
            goto label_16b578;
        }
    }
    ctx->pc = 0x16B560u;
label_16b560:
    // 0x16b560: 0xc05c268
    ctx->pc = 0x16B560u;
    SET_GPR_U32(ctx, 31, 0x16B568u);
    ctx->pc = 0x16B564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1709A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_OpenFnameEx_0x1709a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B568u; }
        else if (ctx->pc != 0x16B568u) { ctx->pc = 0x16B568u; }
    }
    if (ctx->pc != 0x16B568u) { return; }
    ctx->pc = 0x16B568u;
    // 0x16b568: 0x14400007
    ctx->pc = 0x16B568u;
    {
        const bool branch_taken_0x16b568 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x16B56Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16b568) {
            ctx->pc = 0x16B588u;
            goto label_16b588;
        }
    }
    ctx->pc = 0x16B570u;
    // 0x16b570: 0x3c04002c
    ctx->pc = 0x16b570u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x16b574: 0x24849418
    ctx->pc = 0x16b574u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294939672));
label_16b578:
    // 0x16b578: 0xc05a854
    ctx->pc = 0x16B578u;
    SET_GPR_U32(ctx, 31, 0x16B580u);
    ctx->pc = 0x16A150u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXERR_CallErrFunc1_0x16a150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B580u; }
        else if (ctx->pc != 0x16B580u) { ctx->pc = 0x16B580u; }
    }
    if (ctx->pc != 0x16B580u) { return; }
    ctx->pc = 0x16B580u;
    // 0x16b580: 0x1000000c
    ctx->pc = 0x16B580u;
    {
        const bool branch_taken_0x16b580 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x16B584u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
        if (branch_taken_0x16b580) {
            ctx->pc = 0x16B5B4u;
            goto label_16b5b4;
        }
    }
    ctx->pc = 0x16B588u;
label_16b588:
    // 0x16b588: 0xc05c442
    ctx->pc = 0x16B588u;
    SET_GPR_U32(ctx, 31, 0x16B590u);
    ctx->pc = 0x16B58Cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x171108u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_GetFileLen_0x171108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B590u; }
        else if (ctx->pc != 0x16B590u) { ctx->pc = 0x16B590u; }
    }
    if (ctx->pc != 0x16B590u) { return; }
    ctx->pc = 0x16B590u;
    // 0x16b590: 0x244507ff
    ctx->pc = 0x16b590u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 2), 2047));
    // 0x16b594: 0x2404ffff
    ctx->pc = 0x16b594u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b598: 0x24430ffe
    ctx->pc = 0x16b598u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 2), 4094));
    // 0x16b59c: 0x85202a
    ctx->pc = 0x16b59cu;
    SET_GPR_U32(ctx, 4, SLT32(GPR_S32(ctx, 4), GPR_S32(ctx, 5)));
    // 0x16b5a0: 0xa4180b
    ctx->pc = 0x16b5a0u;
    if (GPR_U32(ctx, 4) != 0) SET_GPR_U32(ctx, 3, GPR_U32(ctx, 5));
    // 0x16b5a4: 0xae020010
    ctx->pc = 0x16b5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x16b5a8: 0x31ac3
    ctx->pc = 0x16b5a8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 11));
    // 0x16b5ac: 0x102d
    ctx->pc = 0x16b5acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b5b0: 0xae03000c
    ctx->pc = 0x16b5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_16b5b4:
    // 0x16b5b4: 0xdfbf0010
    ctx->pc = 0x16b5b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b5b8: 0xdfb00000
    ctx->pc = 0x16b5b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b5bc: 0x3e00008
    ctx->pc = 0x16B5BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B5C0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16B560u: goto label_16b560;
            case 0x16B578u: goto label_16b578;
            case 0x16B588u: goto label_16b588;
            case 0x16B5B4u: goto label_16b5b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16B5C4u;
}
