#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXF_OpenAfs
// Address: 0x16b710 - 0x16b7bc
void ADXF_OpenAfs_0x16b710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXF_OpenAfs");


    ctx->pc = 0x16b710u;

    // 0x16b710: 0x27bdffc0
    ctx->pc = 0x16b710u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16b714: 0x2408ffff
    ctx->pc = 0x16b714u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b718: 0xffb20020
    ctx->pc = 0x16b718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x16b71c: 0xffb10010
    ctx->pc = 0x16b71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x16b720: 0xa0902d
    ctx->pc = 0x16b720u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b724: 0x80882d
    ctx->pc = 0x16b724u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b728: 0xffb00000
    ctx->pc = 0x16b728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16b72c: 0xffbf0030
    ctx->pc = 0x16b72cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16b730: 0x24040002
    ctx->pc = 0x16b730u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x16b734: 0x282d
    ctx->pc = 0x16b734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b738: 0x220302d
    ctx->pc = 0x16b738u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b73c: 0xc05a94a
    ctx->pc = 0x16B73Cu;
    SET_GPR_U32(ctx, 31, 0x16B744u);
    ctx->pc = 0x16B740u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16A528u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxf_SetCmdHstry_0x16a528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B744u; }
        else if (ctx->pc != 0x16B744u) { ctx->pc = 0x16B744u; }
    }
    if (ctx->pc != 0x16B744u) { return; }
    ctx->pc = 0x16B744u;
    // 0x16b744: 0xc05a4e4
    ctx->pc = 0x16B744u;
    SET_GPR_U32(ctx, 31, 0x16B74Cu);
    ctx->pc = 0x169390u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXCRS_Lock_0x169390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B74Cu; }
        else if (ctx->pc != 0x16B74Cu) { ctx->pc = 0x16B74Cu; }
    }
    if (ctx->pc != 0x16B74Cu) { return; }
    ctx->pc = 0x16B74Cu;
    // 0x16b74c: 0xc05ad36
    ctx->pc = 0x16B74Cu;
    SET_GPR_U32(ctx, 31, 0x16B754u);
    ctx->pc = 0x16B4D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxf_CreateAdxFs_0x16b4d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B754u; }
        else if (ctx->pc != 0x16B754u) { ctx->pc = 0x16B754u; }
    }
    if (ctx->pc != 0x16B754u) { return; }
    ctx->pc = 0x16B754u;
    // 0x16b754: 0x40802d
    ctx->pc = 0x16b754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b758: 0x12000009
    ctx->pc = 0x16B758u;
    {
        const bool branch_taken_0x16b758 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x16B75Cu;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16b758) {
            ctx->pc = 0x16B780u;
            goto label_16b780;
        }
    }
    ctx->pc = 0x16B760u;
    // 0x16b760: 0x220282d
    ctx->pc = 0x16b760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b764: 0xc05ad9e
    ctx->pc = 0x16B764u;
    SET_GPR_U32(ctx, 31, 0x16B76Cu);
    ctx->pc = 0x16B768u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16B678u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxf_SetAfsFileInfo_0x16b678(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B76Cu; }
        else if (ctx->pc != 0x16B76Cu) { ctx->pc = 0x16B76Cu; }
    }
    if (ctx->pc != 0x16B76Cu) { return; }
    ctx->pc = 0x16B76Cu;
    // 0x16b76c: 0x4410004
    ctx->pc = 0x16B76Cu;
    {
        const bool branch_taken_0x16b76c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x16b76c) {
            ctx->pc = 0x16B780u;
            goto label_16b780;
        }
    }
    ctx->pc = 0x16B774u;
    // 0x16b774: 0xc05ae0c
    ctx->pc = 0x16B774u;
    SET_GPR_U32(ctx, 31, 0x16B77Cu);
    ctx->pc = 0x16B778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16B830u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_Close_0x16b830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B77Cu; }
        else if (ctx->pc != 0x16B77Cu) { ctx->pc = 0x16B77Cu; }
    }
    if (ctx->pc != 0x16B77Cu) { return; }
    ctx->pc = 0x16B77Cu;
    // 0x16b77c: 0x802d
    ctx->pc = 0x16b77cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16b780:
    // 0x16b780: 0xc05a4f0
    ctx->pc = 0x16B780u;
    SET_GPR_U32(ctx, 31, 0x16B788u);
    ctx->pc = 0x1693C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXCRS_Unlock_0x1693c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B788u; }
        else if (ctx->pc != 0x16B788u) { ctx->pc = 0x16B788u; }
    }
    if (ctx->pc != 0x16B788u) { return; }
    ctx->pc = 0x16B788u;
    // 0x16b788: 0x220302d
    ctx->pc = 0x16b788u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b78c: 0x240382d
    ctx->pc = 0x16b78cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b790: 0x24040002
    ctx->pc = 0x16b790u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x16b794: 0x24050001
    ctx->pc = 0x16b794u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b798: 0xc05a94a
    ctx->pc = 0x16B798u;
    SET_GPR_U32(ctx, 31, 0x16B7A0u);
    ctx->pc = 0x16B79Cu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x16A528u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxf_SetCmdHstry_0x16a528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B7A0u; }
        else if (ctx->pc != 0x16B7A0u) { ctx->pc = 0x16B7A0u; }
    }
    if (ctx->pc != 0x16B7A0u) { return; }
    ctx->pc = 0x16B7A0u;
    // 0x16b7a0: 0x200102d
    ctx->pc = 0x16b7a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b7a4: 0xdfbf0030
    ctx->pc = 0x16b7a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16b7a8: 0xdfb20020
    ctx->pc = 0x16b7a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b7ac: 0xdfb10010
    ctx->pc = 0x16b7acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b7b0: 0xdfb00000
    ctx->pc = 0x16b7b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b7b4: 0x3e00008
    ctx->pc = 0x16B7B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B7B8u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16B780u: goto label_16b780;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16B7BCu;
}
