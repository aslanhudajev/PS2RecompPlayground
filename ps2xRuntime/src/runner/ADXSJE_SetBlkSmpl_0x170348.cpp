#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: ADXSJE_SetBlkSmpl
// Address: 0x170348 - 0x1703a8
void ADXSJE_SetBlkSmpl_0x170348(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("ADXSJE_SetBlkSmpl");


    ctx->pc = 0x170348u;

    // 0x170348: 0x27bdffe0
    ctx->pc = 0x170348u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17034c: 0xffb00000
    ctx->pc = 0x17034cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x170350: 0xffbf0010
    ctx->pc = 0x170350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x170354: 0x80802d
    ctx->pc = 0x170354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x170358: 0xae050044
    ctx->pc = 0x170358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 5));
    // 0x17035c: 0x8e040080
    ctx->pc = 0x17035cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x170360: 0x10800003
    ctx->pc = 0x170360u;
    {
        const bool branch_taken_0x170360 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x170360) {
            ctx->pc = 0x170370u;
            goto label_170370;
        }
    }
    ctx->pc = 0x170368u;
    // 0x170368: 0xc05bb52
    ctx->pc = 0x170368u;
    SET_GPR_U32(ctx, 31, 0x170370u);
    ctx->pc = 0x16ED48u;
    {
        const uint32_t __entryPc = ctx->pc;
        pflt_destroy_0x16ed48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170370u; }
        else if (ctx->pc != 0x170370u) { ctx->pc = 0x170370u; }
    }
    if (ctx->pc != 0x170370u) { return; }
    ctx->pc = 0x170370u;
label_170370:
    // 0x170370: 0xc05bb2a
    ctx->pc = 0x170370u;
    SET_GPR_U32(ctx, 31, 0x170378u);
    ctx->pc = 0x170374u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->pc = 0x16ECA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pflt_create_0x16eca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170378u; }
        else if (ctx->pc != 0x170378u) { ctx->pc = 0x170378u; }
    }
    if (ctx->pc != 0x170378u) { return; }
    ctx->pc = 0x170378u;
    // 0x170378: 0x8e040084
    ctx->pc = 0x170378u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x17037c: 0x10800003
    ctx->pc = 0x17037Cu;
    {
        const bool branch_taken_0x17037c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x170380u;
        WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
        if (branch_taken_0x17037c) {
            ctx->pc = 0x17038Cu;
            goto label_17038c;
        }
    }
    ctx->pc = 0x170384u;
    // 0x170384: 0xc05bb52
    ctx->pc = 0x170384u;
    SET_GPR_U32(ctx, 31, 0x17038Cu);
    ctx->pc = 0x16ED48u;
    {
        const uint32_t __entryPc = ctx->pc;
        pflt_destroy_0x16ed48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17038Cu; }
        else if (ctx->pc != 0x17038Cu) { ctx->pc = 0x17038Cu; }
    }
    if (ctx->pc != 0x17038Cu) { return; }
    ctx->pc = 0x17038Cu;
label_17038c:
    // 0x17038c: 0xc05bb2a
    ctx->pc = 0x17038Cu;
    SET_GPR_U32(ctx, 31, 0x170394u);
    ctx->pc = 0x170390u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 68)));
    ctx->pc = 0x16ECA8u;
    {
        const uint32_t __entryPc = ctx->pc;
        pflt_create_0x16eca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x170394u; }
        else if (ctx->pc != 0x170394u) { ctx->pc = 0x170394u; }
    }
    if (ctx->pc != 0x170394u) { return; }
    ctx->pc = 0x170394u;
    // 0x170394: 0xae020084
    ctx->pc = 0x170394u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 2));
    // 0x170398: 0xdfbf0010
    ctx->pc = 0x170398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17039c: 0xdfb00000
    ctx->pc = 0x17039cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1703a0: 0x3e00008
    ctx->pc = 0x1703A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1703A4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x170370u: goto label_170370;
            case 0x17038Cu: goto label_17038c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1703A8u;
}
