#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: SFD_SetSeekPos
// Address: 0x19ce08 - 0x19ce64
void SFD_SetSeekPos_0x19ce08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("SFD_SetSeekPos");


    ctx->pc = 0x19ce08u;

    // 0x19ce08: 0x27bdffd0
    ctx->pc = 0x19ce08u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19ce0c: 0xffb00000
    ctx->pc = 0x19ce0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x19ce10: 0xffb10010
    ctx->pc = 0x19ce10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x19ce14: 0x80802d
    ctx->pc = 0x19ce14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ce18: 0xffbf0020
    ctx->pc = 0x19ce18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x19ce1c: 0xc064f1e
    ctx->pc = 0x19CE1Cu;
    SET_GPR_U32(ctx, 31, 0x19CE24u);
    ctx->pc = 0x19CE20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x193C78u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_CheckHn_0x193c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CE24u; }
        else if (ctx->pc != 0x19CE24u) { ctx->pc = 0x19CE24u; }
    }
    if (ctx->pc != 0x19CE24u) { return; }
    ctx->pc = 0x19CE24u;
    // 0x19ce24: 0x10400006
    ctx->pc = 0x19CE24u;
    {
        const bool branch_taken_0x19ce24 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x19CE28u;
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x19ce24) {
            ctx->pc = 0x19CE40u;
            goto label_19ce40;
        }
    }
    ctx->pc = 0x19CE2Cu;
    // 0x19ce2c: 0x3c05ff00
    ctx->pc = 0x19ce2cu;
    SET_GPR_U32(ctx, 5, ((uint32_t)65280 << 16));
    // 0x19ce30: 0xc064ea0
    ctx->pc = 0x19CE30u;
    SET_GPR_U32(ctx, 31, 0x19CE38u);
    ctx->pc = 0x19CE34u;
    SET_GPR_U32(ctx, 5, OR32(GPR_U32(ctx, 5), 348));
    ctx->pc = 0x193A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        SFLIB_SetErr_0x193a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19CE38u; }
        else if (ctx->pc != 0x19CE38u) { ctx->pc = 0x19CE38u; }
    }
    if (ctx->pc != 0x19CE38u) { return; }
    ctx->pc = 0x19CE38u;
    // 0x19ce38: 0x10000006
    ctx->pc = 0x19CE38u;
    {
        const bool branch_taken_0x19ce38 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x19CE3Cu;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        if (branch_taken_0x19ce38) {
            ctx->pc = 0x19CE54u;
            goto label_19ce54;
        }
    }
    ctx->pc = 0x19CE40u;
label_19ce40:
    // 0x19ce40: 0x8e046758
    ctx->pc = 0x19ce40u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 26456)));
    // 0x19ce44: 0x54800001
    ctx->pc = 0x19CE44u;
    {
        const bool branch_taken_0x19ce44 = (GPR_U32(ctx, 4) != GPR_U32(ctx, 0));
        if (branch_taken_0x19ce44) {
            ctx->pc = 0x19CE48u;
            WRITE32(ADD32(GPR_U32(ctx, 4), 3520), GPR_U32(ctx, 17));
            ctx->pc = 0x19CE4Cu;
            goto label_19ce4c;
        }
    }
    ctx->pc = 0x19CE4Cu;
label_19ce4c:
    // 0x19ce4c: 0x102d
    ctx->pc = 0x19ce4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ce50: 0xdfbf0020
    ctx->pc = 0x19ce50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_19ce54:
    // 0x19ce54: 0xdfb10010
    ctx->pc = 0x19ce54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ce58: 0xdfb00000
    ctx->pc = 0x19ce58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19ce5c: 0x3e00008
    ctx->pc = 0x19CE5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19CE60u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x19CE40u: goto label_19ce40;
            case 0x19CE4Cu: goto label_19ce4c;
            case 0x19CE54u: goto label_19ce54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x19CE64u;
}
