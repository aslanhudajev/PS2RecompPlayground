#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_Destroy
// Address: 0x19bac8 - 0x19bb28
void SFD_Destroy_0x19bac8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_Destroy");


    ctx->pc = 0x19bac8u;

    // 0x19bac8: 0x27bdffe0
    ctx->pc = 0x19bac8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19bacc: 0xffb00000
    ctx->pc = 0x19baccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19bad0: 0xffbf0010
    ctx->pc = 0x19bad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19bad4: 0xc064f1e
    ctx->pc = 0x19BAD4u;
    SET_GPR_U32(ctx, 31, 0x19BADCu);
    ctx->pc = 0x19BAD8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BADCu; }
        else if (ctx->pc != 0x19BADCu) { ctx->pc = 0x19BADCu; }
    }
    if (ctx->pc != 0x19BADCu) { return; }
    ctx->pc = 0x19BADCu;
    // 0x19badc: 0x10400006
    ctx->pc = 0x19BADCu;
    {
        const bool branch_taken_0x19badc = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19BAE0u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19badc) {
            ctx->pc = 0x19BAF8u;
            goto label_19baf8;
        }
    }
    ctx->pc = 0x19BAE4u;
    // 0x19bae4: 0x3c05ff00
    ctx->pc = 0x19bae4u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19bae8: 0xc064ea0
    ctx->pc = 0x19BAE8u;
    SET_GPR_U32(ctx, 31, 0x19BAF0u);
    ctx->pc = 0x19BAECu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 305));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BAF0u; }
        else if (ctx->pc != 0x19BAF0u) { ctx->pc = 0x19BAF0u; }
    }
    if (ctx->pc != 0x19BAF0u) { return; }
    ctx->pc = 0x19BAF0u;
    // 0x19baf0: 0x1000000a
    ctx->pc = 0x19BAF0u;
    {
        const bool branch_taken_0x19baf0 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19BAF4u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x19baf0) {
            ctx->pc = 0x19BB1Cu;
            goto label_19bb1c;
        }
    }
    ctx->pc = 0x19BAF8u;
label_19baf8:
    // 0x19baf8: 0xc066f14
    ctx->pc = 0x19BAF8u;
    SET_GPR_U32(ctx, 31, 0x19BB00u);
    ctx->pc = 0x19BAFCu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19BC50u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFPLY_Stop_0x19bc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BB00u; }
        else if (ctx->pc != 0x19BB00u) { ctx->pc = 0x19BB00u; }
    }
    if (ctx->pc != 0x19BB00u) { return; }
    ctx->pc = 0x19BB00u;
    // 0x19bb00: 0xc064b8e
    ctx->pc = 0x19BB00u;
    SET_GPR_U32(ctx, 31, 0x19BB08u);
    ctx->pc = 0x19BB04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 108));
    ctx->pc = 0x192E38u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFHDS_FinishFhd_0x192e38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BB08u; }
        else if (ctx->pc != 0x19BB08u) { ctx->pc = 0x19BB08u; }
    }
    if (ctx->pc != 0x19BB08u) { return; }
    ctx->pc = 0x19BB08u;
    // 0x19bb08: 0xc0645f0
    ctx->pc = 0x19BB08u;
    SET_GPR_U32(ctx, 31, 0x19BB10u);
    ctx->pc = 0x19BB0Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x1917C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFBUF_DestroySj_0x1917c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BB10u; }
        else if (ctx->pc != 0x19BB10u) { ctx->pc = 0x19BB10u; }
    }
    if (ctx->pc != 0x19BB10u) { return; }
    ctx->pc = 0x19BB10u;
    // 0x19bb10: 0xc066eca
    ctx->pc = 0x19BB10u;
    SET_GPR_U32(ctx, 31, 0x19BB18u);
    ctx->pc = 0x19BB14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x19BB28u;
    {
        const uint32_t __entryPc = ctx->pc;
        sfply_TrDestroy_0x19bb28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BB18u; }
        else if (ctx->pc != 0x19BB18u) { ctx->pc = 0x19BB18u; }
    }
    if (ctx->pc != 0x19BB18u) { return; }
    ctx->pc = 0x19BB18u;
    // 0x19bb18: 0xdfbf0010
    ctx->pc = 0x19bb18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19bb1c:
    // 0x19bb1c: 0xdfb00000
    ctx->pc = 0x19bb1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19bb20: 0x3e00008
    ctx->pc = 0x19BB20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BB24u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19BAF8u: goto label_19baf8;
            case 0x19BB1Cu: goto label_19bb1c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19BB28u;
}
