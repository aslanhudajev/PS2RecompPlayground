#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_Start
// Address: 0x19bb50 - 0x19bbc8
void SFD_Start_0x19bb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_Start");


    ctx->pc = 0x19bb50u;

    // 0x19bb50: 0x27bdffe0
    ctx->pc = 0x19bb50u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19bb54: 0xffb00000
    ctx->pc = 0x19bb54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19bb58: 0xffbf0010
    ctx->pc = 0x19bb58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19bb5c: 0xc064f1e
    ctx->pc = 0x19BB5Cu;
    SET_GPR_U32(ctx, 31, 0x19BB64u);
    ctx->pc = 0x19BB60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BB64u; }
        else if (ctx->pc != 0x19BB64u) { ctx->pc = 0x19BB64u; }
    }
    if (ctx->pc != 0x19BB64u) { return; }
    ctx->pc = 0x19BB64u;
    // 0x19bb64: 0x10400006
    ctx->pc = 0x19BB64u;
    {
        const bool branch_taken_0x19bb64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19BB68u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19bb64) {
            ctx->pc = 0x19BB80u;
            goto label_19bb80;
        }
    }
    ctx->pc = 0x19BB6Cu;
    // 0x19bb6c: 0x3c05ff00
    ctx->pc = 0x19bb6cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19bb70: 0xc064ea0
    ctx->pc = 0x19BB70u;
    SET_GPR_U32(ctx, 31, 0x19BB78u);
    ctx->pc = 0x19BB74u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 306));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BB78u; }
        else if (ctx->pc != 0x19BB78u) { ctx->pc = 0x19BB78u; }
    }
    if (ctx->pc != 0x19BB78u) { return; }
    ctx->pc = 0x19BB78u;
    // 0x19bb78: 0x10000010
    ctx->pc = 0x19BB78u;
    {
        const bool branch_taken_0x19bb78 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19BB7Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x19bb78) {
            ctx->pc = 0x19BBBCu;
            goto label_19bbbc;
        }
    }
    ctx->pc = 0x19BB80u;
label_19bb80:
    // 0x19bb80: 0x200202d
    ctx->pc = 0x19bb80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bb84: 0xc0674c2
    ctx->pc = 0x19BB84u;
    SET_GPR_U32(ctx, 31, 0x19BB8Cu);
    ctx->pc = 0x19BB88u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 47));
    ctx->pc = 0x19D308u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_GetCond_0x19d308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BB8Cu; }
        else if (ctx->pc != 0x19BB8Cu) { ctx->pc = 0x19BB8Cu; }
    }
    if (ctx->pc != 0x19BB8Cu) { return; }
    ctx->pc = 0x19BB8Cu;
    // 0x19bb8c: 0x24030001
    ctx->pc = 0x19bb8cu;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
    // 0x19bb90: 0x14430005
    ctx->pc = 0x19BB90u;
    {
        const bool branch_taken_0x19bb90 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 3));
        if (branch_taken_0x19bb90) {
            ctx->pc = 0x19BBA8u;
            goto label_19bba8;
        }
    }
    ctx->pc = 0x19BB98u;
    // 0x19bb98: 0xc066a66
    ctx->pc = 0x19BB98u;
    SET_GPR_U32(ctx, 31, 0x19BBA0u);
    ctx->pc = 0x19BB9Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19A998u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFPL2_Standby_0x19a998(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BBA0u; }
        else if (ctx->pc != 0x19BBA0u) { ctx->pc = 0x19BBA0u; }
    }
    if (ctx->pc != 0x19BBA0u) { return; }
    ctx->pc = 0x19BBA0u;
    // 0x19bba0: 0x10000004
    ctx->pc = 0x19BBA0u;
    {
        const bool branch_taken_0x19bba0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19BBA4u;
        SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x19bba0) {
            ctx->pc = 0x19BBB4u;
            goto label_19bbb4;
        }
    }
    ctx->pc = 0x19BBA8u;
label_19bba8:
    // 0x19bba8: 0xc066ef2
    ctx->pc = 0x19BBA8u;
    SET_GPR_U32(ctx, 31, 0x19BBB0u);
    ctx->pc = 0x19BBACu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19BBC8u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfply_Start_0x19bbc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BBB0u; }
        else if (ctx->pc != 0x19BBB0u) { ctx->pc = 0x19BBB0u; }
    }
    if (ctx->pc != 0x19BBB0u) { return; }
    ctx->pc = 0x19BBB0u;
    // 0x19bbb0: 0x24030001
    ctx->pc = 0x19bbb0u;
    SET_GPR_S32(ctx, 3, ADD32(GPR_U32(ctx, 0), 1));
label_19bbb4:
    // 0x19bbb4: 0xae03003c
    ctx->pc = 0x19bbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x19bbb8: 0xdfbf0010
    ctx->pc = 0x19bbb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19bbbc:
    // 0x19bbbc: 0xdfb00000
    ctx->pc = 0x19bbbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19bbc0: 0x3e00008
    ctx->pc = 0x19BBC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BBC4u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19BB80u: goto label_19bb80;
            case 0x19BBA8u: goto label_19bba8;
            case 0x19BBB4u: goto label_19bbb4;
            case 0x19BBBCu: goto label_19bbbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19BBC8u;
}
