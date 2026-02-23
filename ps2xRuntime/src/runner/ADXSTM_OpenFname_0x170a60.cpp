#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSTM_OpenFname
// Address: 0x170a60 - 0x170af4
void ADXSTM_OpenFname_0x170a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSTM_OpenFname");


    ctx->pc = 0x170a60u;

    // 0x170a60: 0x27bdffc0
    ctx->pc = 0x170a60u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x170a64: 0xffb00000
    ctx->pc = 0x170a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x170a68: 0x80802d
    ctx->pc = 0x170a68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170a6c: 0xffb20020
    ctx->pc = 0x170a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x170a70: 0xffb10010
    ctx->pc = 0x170a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x170a74: 0xffbf0030
    ctx->pc = 0x170a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x170a78: 0xc05d3d2
    ctx->pc = 0x170A78u;
    SET_GPR_U32(ctx, 31, 0x170A80u);
    ctx->pc = 0x170A7Cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x174F48u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsGetFileSize_0x174f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170A80u; }
        else if (ctx->pc != 0x170A80u) { ctx->pc = 0x170A80u; }
    }
    if (ctx->pc != 0x170A80u) { return; }
    ctx->pc = 0x170A80u;
    // 0x170a80: 0x40882d
    ctx->pc = 0x170a80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170a84: 0x200202d
    ctx->pc = 0x170a84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170a88: 0x282d
    ctx->pc = 0x170a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170a8c: 0xc05d234
    ctx->pc = 0x170A8Cu;
    SET_GPR_U32(ctx, 31, 0x170A94u);
    ctx->pc = 0x170A90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1748D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsOpen_0x1748d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170A94u; }
        else if (ctx->pc != 0x170A94u) { ctx->pc = 0x170A94u; }
    }
    if (ctx->pc != 0x170A94u) { return; }
    ctx->pc = 0x170A94u;
    // 0x170a94: 0x14400007
    ctx->pc = 0x170A94u;
    {
        const bool branch_taken_0x170a94 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x170A98u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x170a94) {
            ctx->pc = 0x170AB4u;
            goto label_170ab4;
        }
    }
    ctx->pc = 0x170A9Cu;
    // 0x170a9c: 0x3c04002c
    ctx->pc = 0x170a9cu;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x170aa0: 0x200282d
    ctx->pc = 0x170aa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170aa4: 0xc05a868
    ctx->pc = 0x170AA4u;
    SET_GPR_U32(ctx, 31, 0x170AACu);
    ctx->pc = 0x170AA8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294943176));
    ctx->pc = 0x16A1A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXERR_CallErrFunc2_0x16a1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170AACu; }
        else if (ctx->pc != 0x170AACu) { ctx->pc = 0x170AACu; }
    }
    if (ctx->pc != 0x170AACu) { return; }
    ctx->pc = 0x170AACu;
    // 0x170aac: 0x1000000b
    ctx->pc = 0x170AACu;
    {
        const bool branch_taken_0x170aac = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x170AB0u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x170aac) {
            ctx->pc = 0x170ADCu;
            goto label_170adc;
        }
    }
    ctx->pc = 0x170AB4u;
label_170ab4:
    // 0x170ab4: 0x220302d
    ctx->pc = 0x170ab4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170ab8: 0x240382d
    ctx->pc = 0x170ab8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170abc: 0xc05c1c0
    ctx->pc = 0x170ABCu;
    SET_GPR_U32(ctx, 31, 0x170AC4u);
    ctx->pc = 0x170AC0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x170700u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTMF_CreateCvfsRt_0x170700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170AC4u; }
        else if (ctx->pc != 0x170AC4u) { ctx->pc = 0x170AC4u; }
    }
    if (ctx->pc != 0x170AC4u) { return; }
    ctx->pc = 0x170AC4u;
    // 0x170ac4: 0x40802d
    ctx->pc = 0x170ac4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170ac8: 0x12000003
    ctx->pc = 0x170AC8u;
    {
        const bool branch_taken_0x170ac8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x170ACCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x170ac8) {
            ctx->pc = 0x170AD8u;
            goto label_170ad8;
        }
    }
    ctx->pc = 0x170AD0u;
    // 0x170ad0: 0xc05c2e2
    ctx->pc = 0x170AD0u;
    SET_GPR_U32(ctx, 31, 0x170AD8u);
    ctx->pc = 0x170AD4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x170B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_Seek_0x170b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170AD8u; }
        else if (ctx->pc != 0x170AD8u) { ctx->pc = 0x170AD8u; }
    }
    if (ctx->pc != 0x170AD8u) { return; }
    ctx->pc = 0x170AD8u;
label_170ad8:
    // 0x170ad8: 0x200102d
    ctx->pc = 0x170ad8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_170adc:
    // 0x170adc: 0xdfbf0030
    ctx->pc = 0x170adcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x170ae0: 0xdfb20020
    ctx->pc = 0x170ae0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x170ae4: 0xdfb10010
    ctx->pc = 0x170ae4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170ae8: 0xdfb00000
    ctx->pc = 0x170ae8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170aec: 0x3e00008
    ctx->pc = 0x170AECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170AF0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170AB4u: goto label_170ab4;
            case 0x170AD8u: goto label_170ad8;
            case 0x170ADCu: goto label_170adc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x170AF4u;
}
