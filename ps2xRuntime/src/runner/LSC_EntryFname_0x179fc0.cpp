#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: LSC_EntryFname
// Address: 0x179fc0 - 0x17a064
void LSC_EntryFname_0x179fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("LSC_EntryFname");


    ctx->pc = 0x179fc0u;

    // 0x179fc0: 0x27bdffb0
    ctx->pc = 0x179fc0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x179fc4: 0xffb30030
    ctx->pc = 0x179fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x179fc8: 0xffb20020
    ctx->pc = 0x179fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x179fcc: 0x80982d
    ctx->pc = 0x179fccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179fd0: 0xffb10010
    ctx->pc = 0x179fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x179fd4: 0xa0902d
    ctx->pc = 0x179fd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179fd8: 0xffbf0040
    ctx->pc = 0x179fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x179fdc: 0x240202d
    ctx->pc = 0x179fdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179fe0: 0xffb00000
    ctx->pc = 0x179fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x179fe4: 0xc05c298
    ctx->pc = 0x179FE4u;
    SET_GPR_U32(ctx, 31, 0x179FECu);
    ctx->pc = 0x179FE8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 19), 8)));
    ctx->pc = 0x170A60u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_OpenFname_0x170a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179FECu; }
        else if (ctx->pc != 0x179FECu) { ctx->pc = 0x179FECu; }
    }
    if (ctx->pc != 0x179FECu) { return; }
    ctx->pc = 0x179FECu;
    // 0x179fec: 0x40882d
    ctx->pc = 0x179fecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179ff0: 0x16200004
    ctx->pc = 0x179FF0u;
    {
        const bool branch_taken_0x179ff0 = (GPR_U32(ctx, 17) != GPR_U32(ctx, 0));
        ctx->pc = 0x179FF4u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x179ff0) {
            ctx->pc = 0x17A004u;
            goto label_17a004;
        }
    }
    ctx->pc = 0x179FF8u;
    // 0x179ff8: 0x240282d
    ctx->pc = 0x179ff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179ffc: 0xc05e9c6
    ctx->pc = 0x179FFCu;
    SET_GPR_U32(ctx, 31, 0x17A004u);
    ctx->pc = 0x17A000u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294949448));
    ctx->pc = 0x17A718u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_CallErrFunc_0x17a718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A004u; }
        else if (ctx->pc != 0x17A004u) { ctx->pc = 0x17A004u; }
    }
    if (ctx->pc != 0x17A004u) { return; }
    ctx->pc = 0x17A004u;
label_17a004:
    // 0x17a004: 0xc05c442
    ctx->pc = 0x17A004u;
    SET_GPR_U32(ctx, 31, 0x17A00Cu);
    ctx->pc = 0x17A008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x171108u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_GetFileLen_0x171108(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A00Cu; }
        else if (ctx->pc != 0x17A00Cu) { ctx->pc = 0x17A00Cu; }
    }
    if (ctx->pc != 0x17A00Cu) { return; }
    ctx->pc = 0x17A00Cu;
    // 0x17a00c: 0x40802d
    ctx->pc = 0x17a00cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a010: 0x220202d
    ctx->pc = 0x17a010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a014: 0x260307ff
    ctx->pc = 0x17a014u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 16), 2047));
    // 0x17a018: 0x2402ffff
    ctx->pc = 0x17a018u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x17a01c: 0x26100ffe
    ctx->pc = 0x17a01cu;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 16), 4094));
    // 0x17a020: 0x43102a
    ctx->pc = 0x17a020u;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), GPR_S32(ctx, 3)));
    // 0x17a024: 0x62800b
    ctx->pc = 0x17a024u;
    if (GPR_U32(ctx, 2) != 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 3));
    // 0x17a028: 0xc05c2ca
    ctx->pc = 0x17A028u;
    SET_GPR_U32(ctx, 31, 0x17A030u);
    ctx->pc = 0x17A02Cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 11));
    ctx->pc = 0x170B28u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXSTM_Close_0x170b28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A030u; }
        else if (ctx->pc != 0x17A030u) { ctx->pc = 0x17A030u; }
    }
    if (ctx->pc != 0x17A030u) { return; }
    ctx->pc = 0x17A030u;
    // 0x17a030: 0x260202d
    ctx->pc = 0x17a030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a034: 0x240282d
    ctx->pc = 0x17a034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a038: 0x200402d
    ctx->pc = 0x17a038u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a03c: 0x302d
    ctx->pc = 0x17a03cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a040: 0xc05e81a
    ctx->pc = 0x17A040u;
    SET_GPR_U32(ctx, 31, 0x17A048u);
    ctx->pc = 0x17A044u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x17A068u;
    {
        const uint32_t __entryPc = ctx->pc;
        LSC_EntryFileRange_0x17a068(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A048u; }
        else if (ctx->pc != 0x17A048u) { ctx->pc = 0x17A048u; }
    }
    if (ctx->pc != 0x17A048u) { return; }
    ctx->pc = 0x17A048u;
    // 0x17a048: 0xdfbf0040
    ctx->pc = 0x17a048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17a04c: 0xdfb30030
    ctx->pc = 0x17a04cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a050: 0xdfb20020
    ctx->pc = 0x17a050u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a054: 0xdfb10010
    ctx->pc = 0x17a054u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a058: 0xdfb00000
    ctx->pc = 0x17a058u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a05c: 0x3e00008
    ctx->pc = 0x17A05Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A060u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A004u: goto label_17a004;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A064u;
}
