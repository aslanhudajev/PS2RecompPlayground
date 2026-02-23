#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSTM_OpenFnameEx
// Address: 0x1709a0 - 0x170a5c
void ADXSTM_OpenFnameEx_0x1709a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSTM_OpenFnameEx");


    ctx->pc = 0x1709a0u;

    // 0x1709a0: 0x27bdffb0
    ctx->pc = 0x1709a0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1709a4: 0xffb30030
    ctx->pc = 0x1709a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x1709a8: 0xffb10010
    ctx->pc = 0x1709a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1709ac: 0xc0982d
    ctx->pc = 0x1709acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1709b0: 0xffb00000
    ctx->pc = 0x1709b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1709b4: 0x80882d
    ctx->pc = 0x1709b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1709b8: 0xffbf0040
    ctx->pc = 0x1709b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1709bc: 0xa0802d
    ctx->pc = 0x1709bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1709c0: 0x16000005
    ctx->pc = 0x1709C0u;
    {
        const bool branch_taken_0x1709c0 = (GPR_U32(ctx, 16) != GPR_U32(ctx, 0));
        ctx->pc = 0x1709C4u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        if (branch_taken_0x1709c0) {
            ctx->pc = 0x1709D8u;
            goto label_1709d8;
        }
    }
    ctx->pc = 0x1709C8u;
    // 0x1709c8: 0xc05d3d2
    ctx->pc = 0x1709C8u;
    SET_GPR_U32(ctx, 31, 0x1709D0u);
    ctx->pc = 0x174F48u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsGetFileSize_0x174f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1709D0u; }
        else if (ctx->pc != 0x1709D0u) { ctx->pc = 0x1709D0u; }
    }
    if (ctx->pc != 0x1709D0u) { return; }
    ctx->pc = 0x1709D0u;
    // 0x1709d0: 0x10000005
    ctx->pc = 0x1709D0u;
    {
        const bool branch_taken_0x1709d0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x1709D4u;
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1709d0) {
            ctx->pc = 0x1709E8u;
            goto label_1709e8;
        }
    }
    ctx->pc = 0x1709D8u;
label_1709d8:
    // 0x1709d8: 0x220202d
    ctx->pc = 0x1709d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1709dc: 0xc05d3fe
    ctx->pc = 0x1709DCu;
    SET_GPR_U32(ctx, 31, 0x1709E4u);
    ctx->pc = 0x1709E0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x174FF8u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsGetFileSizeEx_0x174ff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1709E4u; }
        else if (ctx->pc != 0x1709E4u) { ctx->pc = 0x1709E4u; }
    }
    if (ctx->pc != 0x1709E4u) { return; }
    ctx->pc = 0x1709E4u;
    // 0x1709e4: 0x40902d
    ctx->pc = 0x1709e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1709e8:
    // 0x1709e8: 0x200282d
    ctx->pc = 0x1709e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1709ec: 0x220202d
    ctx->pc = 0x1709ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1709f0: 0xc05d234
    ctx->pc = 0x1709F0u;
    SET_GPR_U32(ctx, 31, 0x1709F8u);
    ctx->pc = 0x1709F4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1748D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        cvFsOpen_0x1748d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1709F8u; }
        else if (ctx->pc != 0x1709F8u) { ctx->pc = 0x1709F8u; }
    }
    if (ctx->pc != 0x1709F8u) { return; }
    ctx->pc = 0x1709F8u;
    // 0x1709f8: 0x14400007
    ctx->pc = 0x1709F8u;
    {
        const bool branch_taken_0x1709f8 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x1709FCu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x1709f8) {
            ctx->pc = 0x170A18u;
            goto label_170a18;
        }
    }
    ctx->pc = 0x170A00u;
    // 0x170a00: 0x3c04002c
    ctx->pc = 0x170a00u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x170a04: 0x220282d
    ctx->pc = 0x170a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170a08: 0xc05a868
    ctx->pc = 0x170A08u;
    SET_GPR_U32(ctx, 31, 0x170A10u);
    ctx->pc = 0x170A0Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294943176));
    ctx->pc = 0x16A1A0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXERR_CallErrFunc2_0x16a1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170A10u; }
        else if (ctx->pc != 0x170A10u) { ctx->pc = 0x170A10u; }
    }
    if (ctx->pc != 0x170A10u) { return; }
    ctx->pc = 0x170A10u;
    // 0x170a10: 0x1000000b
    ctx->pc = 0x170A10u;
    {
        const bool branch_taken_0x170a10 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x170A14u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x170a10) {
            ctx->pc = 0x170A40u;
            goto label_170a40;
        }
    }
    ctx->pc = 0x170A18u;
label_170a18:
    // 0x170a18: 0x240302d
    ctx->pc = 0x170a18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170a1c: 0x260382d
    ctx->pc = 0x170a1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170a20: 0xc05c1ec
    ctx->pc = 0x170A20u;
    SET_GPR_U32(ctx, 31, 0x170A28u);
    ctx->pc = 0x170A24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1707B0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTMF_CreateCvfs_0x1707b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170A28u; }
        else if (ctx->pc != 0x170A28u) { ctx->pc = 0x170A28u; }
    }
    if (ctx->pc != 0x170A28u) { return; }
    ctx->pc = 0x170A28u;
    // 0x170a28: 0x40802d
    ctx->pc = 0x170a28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170a2c: 0x12000003
    ctx->pc = 0x170A2Cu;
    {
        const bool branch_taken_0x170a2c = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x170A30u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x170a2c) {
            ctx->pc = 0x170A3Cu;
            goto label_170a3c;
        }
    }
    ctx->pc = 0x170A34u;
    // 0x170a34: 0xc05c2e2
    ctx->pc = 0x170A34u;
    SET_GPR_U32(ctx, 31, 0x170A3Cu);
    ctx->pc = 0x170A38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x170B88u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_Seek_0x170b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170A3Cu; }
        else if (ctx->pc != 0x170A3Cu) { ctx->pc = 0x170A3Cu; }
    }
    if (ctx->pc != 0x170A3Cu) { return; }
    ctx->pc = 0x170A3Cu;
label_170a3c:
    // 0x170a3c: 0x200102d
    ctx->pc = 0x170a3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_170a40:
    // 0x170a40: 0xdfbf0040
    ctx->pc = 0x170a40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x170a44: 0xdfb30030
    ctx->pc = 0x170a44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x170a48: 0xdfb20020
    ctx->pc = 0x170a48u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x170a4c: 0xdfb10010
    ctx->pc = 0x170a4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x170a50: 0xdfb00000
    ctx->pc = 0x170a50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x170a54: 0x3e00008
    ctx->pc = 0x170A54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170A58u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1709D8u: goto label_1709d8;
            case 0x1709E8u: goto label_1709e8;
            case 0x170A18u: goto label_170a18;
            case 0x170A3Cu: goto label_170a3c;
            case 0x170A40u: goto label_170a40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x170A5Cu;
}
