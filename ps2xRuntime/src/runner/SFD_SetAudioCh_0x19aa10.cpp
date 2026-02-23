#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_SetAudioCh
// Address: 0x19aa10 - 0x19aa70
void SFD_SetAudioCh_0x19aa10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_SetAudioCh");


    ctx->pc = 0x19aa10u;

    // 0x19aa10: 0x27bdffd0
    ctx->pc = 0x19aa10u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19aa14: 0xffb00000
    ctx->pc = 0x19aa14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19aa18: 0xffb10010
    ctx->pc = 0x19aa18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19aa1c: 0x80802d
    ctx->pc = 0x19aa1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aa20: 0xffbf0020
    ctx->pc = 0x19aa20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19aa24: 0xc064f1e
    ctx->pc = 0x19AA24u;
    SET_GPR_U32(ctx, 31, 0x19AA2Cu);
    ctx->pc = 0x19AA28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AA2Cu; }
        else if (ctx->pc != 0x19AA2Cu) { ctx->pc = 0x19AA2Cu; }
    }
    if (ctx->pc != 0x19AA2Cu) { return; }
    ctx->pc = 0x19AA2Cu;
    // 0x19aa2c: 0x10400006
    ctx->pc = 0x19AA2Cu;
    {
        const bool branch_taken_0x19aa2c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19AA30u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19aa2c) {
            ctx->pc = 0x19AA48u;
            goto label_19aa48;
        }
    }
    ctx->pc = 0x19AA34u;
    // 0x19aa34: 0x3c05ff00
    ctx->pc = 0x19aa34u;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19aa38: 0xc064ea0
    ctx->pc = 0x19AA38u;
    SET_GPR_U32(ctx, 31, 0x19AA40u);
    ctx->pc = 0x19AA3Cu;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 325));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AA40u; }
        else if (ctx->pc != 0x19AA40u) { ctx->pc = 0x19AA40u; }
    }
    if (ctx->pc != 0x19AA40u) { return; }
    ctx->pc = 0x19AA40u;
    // 0x19aa40: 0x10000007
    ctx->pc = 0x19AA40u;
    {
        const bool branch_taken_0x19aa40 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19AA44u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x19aa40) {
            ctx->pc = 0x19AA60u;
            goto label_19aa60;
        }
    }
    ctx->pc = 0x19AA48u;
label_19aa48:
    // 0x19aa48: 0x200202d
    ctx->pc = 0x19aa48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aa4c: 0x220302d
    ctx->pc = 0x19aa4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aa50: 0xc067464
    ctx->pc = 0x19AA50u;
    SET_GPR_U32(ctx, 31, 0x19AA58u);
    ctx->pc = 0x19AA54u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 30));
    ctx->pc = 0x19D190u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFSET_SetCond_0x19d190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19AA58u; }
        else if (ctx->pc != 0x19AA58u) { ctx->pc = 0x19AA58u; }
    }
    if (ctx->pc != 0x19AA58u) { return; }
    ctx->pc = 0x19AA58u;
    // 0x19aa58: 0x102d
    ctx->pc = 0x19aa58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19aa5c: 0xdfbf0020
    ctx->pc = 0x19aa5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19aa60:
    // 0x19aa60: 0xdfb10010
    ctx->pc = 0x19aa60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19aa64: 0xdfb00000
    ctx->pc = 0x19aa64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19aa68: 0x3e00008
    ctx->pc = 0x19AA68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19AA6Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19AA48u: goto label_19aa48;
            case 0x19AA60u: goto label_19aa60;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19AA70u;
}
