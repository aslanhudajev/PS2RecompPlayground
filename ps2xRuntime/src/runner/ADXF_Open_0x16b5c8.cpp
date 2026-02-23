#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXF_Open
// Address: 0x16b5c8 - 0x16b674
void ADXF_Open_0x16b5c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXF_Open");


    ctx->pc = 0x16b5c8u;

    // 0x16b5c8: 0x27bdffc0
    ctx->pc = 0x16b5c8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16b5cc: 0x2408ffff
    ctx->pc = 0x16b5ccu;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16b5d0: 0xffb20020
    ctx->pc = 0x16b5d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x16b5d4: 0xffb10010
    ctx->pc = 0x16b5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x16b5d8: 0xa0902d
    ctx->pc = 0x16b5d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b5dc: 0x80882d
    ctx->pc = 0x16b5dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b5e0: 0xffb00000
    ctx->pc = 0x16b5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16b5e4: 0xffbf0030
    ctx->pc = 0x16b5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x16b5e8: 0x24040001
    ctx->pc = 0x16b5e8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b5ec: 0x282d
    ctx->pc = 0x16b5ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b5f0: 0x220302d
    ctx->pc = 0x16b5f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b5f4: 0xc05a94a
    ctx->pc = 0x16B5F4u;
    SET_GPR_U32(ctx, 31, 0x16B5FCu);
    ctx->pc = 0x16B5F8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16A528u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxf_SetCmdHstry_0x16a528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B5FCu; }
        else if (ctx->pc != 0x16B5FCu) { ctx->pc = 0x16B5FCu; }
    }
    if (ctx->pc != 0x16B5FCu) { return; }
    ctx->pc = 0x16B5FCu;
    // 0x16b5fc: 0xc05a4e4
    ctx->pc = 0x16B5FCu;
    SET_GPR_U32(ctx, 31, 0x16B604u);
    ctx->pc = 0x169390u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXCRS_Lock_0x169390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B604u; }
        else if (ctx->pc != 0x16B604u) { ctx->pc = 0x16B604u; }
    }
    if (ctx->pc != 0x16B604u) { return; }
    ctx->pc = 0x16B604u;
    // 0x16b604: 0xc05ad36
    ctx->pc = 0x16B604u;
    SET_GPR_U32(ctx, 31, 0x16B60Cu);
    ctx->pc = 0x16B4D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxf_CreateAdxFs_0x16b4d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B60Cu; }
        else if (ctx->pc != 0x16B60Cu) { ctx->pc = 0x16B60Cu; }
    }
    if (ctx->pc != 0x16B60Cu) { return; }
    ctx->pc = 0x16B60Cu;
    // 0x16b60c: 0x40802d
    ctx->pc = 0x16b60cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b610: 0x12000009
    ctx->pc = 0x16B610u;
    {
        const bool branch_taken_0x16b610 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x16B614u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x16b610) {
            ctx->pc = 0x16B638u;
            goto label_16b638;
        }
    }
    ctx->pc = 0x16B618u;
    // 0x16b618: 0x220282d
    ctx->pc = 0x16b618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b61c: 0xc05ad4e
    ctx->pc = 0x16B61Cu;
    SET_GPR_U32(ctx, 31, 0x16B624u);
    ctx->pc = 0x16B620u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16B538u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxf_SetFileInfoEx_0x16b538(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B624u; }
        else if (ctx->pc != 0x16B624u) { ctx->pc = 0x16B624u; }
    }
    if (ctx->pc != 0x16B624u) { return; }
    ctx->pc = 0x16B624u;
    // 0x16b624: 0x4410004
    ctx->pc = 0x16B624u;
    {
        const bool branch_taken_0x16b624 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x16b624) {
            ctx->pc = 0x16B638u;
            goto label_16b638;
        }
    }
    ctx->pc = 0x16B62Cu;
    // 0x16b62c: 0xc05ae0c
    ctx->pc = 0x16B62Cu;
    SET_GPR_U32(ctx, 31, 0x16B634u);
    ctx->pc = 0x16B630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x16B830u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXF_Close_0x16b830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B634u; }
        else if (ctx->pc != 0x16B634u) { ctx->pc = 0x16B634u; }
    }
    if (ctx->pc != 0x16B634u) { return; }
    ctx->pc = 0x16B634u;
    // 0x16b634: 0x802d
    ctx->pc = 0x16b634u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16b638:
    // 0x16b638: 0xc05a4f0
    ctx->pc = 0x16B638u;
    SET_GPR_U32(ctx, 31, 0x16B640u);
    ctx->pc = 0x1693C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        ADXCRS_Unlock_0x1693c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B640u; }
        else if (ctx->pc != 0x16B640u) { ctx->pc = 0x16B640u; }
    }
    if (ctx->pc != 0x16B640u) { return; }
    ctx->pc = 0x16B640u;
    // 0x16b640: 0x220302d
    ctx->pc = 0x16b640u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b644: 0x240382d
    ctx->pc = 0x16b644u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b648: 0x24040001
    ctx->pc = 0x16b648u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b64c: 0x24050001
    ctx->pc = 0x16b64cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x16b650: 0xc05a94a
    ctx->pc = 0x16B650u;
    SET_GPR_U32(ctx, 31, 0x16B658u);
    ctx->pc = 0x16B654u;
    SET_GPR_S32(ctx, 8, ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->pc = 0x16A528u;
    {
        const uint32_t __entryPc = ctx->pc;
        adxf_SetCmdHstry_0x16a528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16B658u; }
        else if (ctx->pc != 0x16B658u) { ctx->pc = 0x16B658u; }
    }
    if (ctx->pc != 0x16B658u) { return; }
    ctx->pc = 0x16B658u;
    // 0x16b658: 0x200102d
    ctx->pc = 0x16b658u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16b65c: 0xdfbf0030
    ctx->pc = 0x16b65cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16b660: 0xdfb20020
    ctx->pc = 0x16b660u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16b664: 0xdfb10010
    ctx->pc = 0x16b664u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16b668: 0xdfb00000
    ctx->pc = 0x16b668u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16b66c: 0x3e00008
    ctx->pc = 0x16B66Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16B670u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16B638u: goto label_16b638;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16B674u;
}
