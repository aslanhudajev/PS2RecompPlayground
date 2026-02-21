#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: joy_close
// Address: 0x2037e0 - 0x20383c
void joy_close_0x2037e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2037e0u;

    // 0x2037e0: 0x27bdffe0
    ctx->pc = 0x2037e0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2037e4: 0xffbf0010
    ctx->pc = 0x2037e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2037e8: 0xffb00000
    ctx->pc = 0x2037e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2037ec: 0x80302d
    ctx->pc = 0x2037ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2037f0: 0x3c040031
    ctx->pc = 0x2037f0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)49 << 16));
    // 0x2037f4: 0x24840ee8
    ctx->pc = 0x2037f4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 3816));
    // 0x2037f8: 0x51080
    ctx->pc = 0x2037f8u;
    SET_GPR_U32(ctx, 2, SLL32(GPR_U32(ctx, 5), 2));
    // 0x2037fc: 0x61900
    ctx->pc = 0x2037fcu;
    SET_GPR_U32(ctx, 3, SLL32(GPR_U32(ctx, 6), 4));
    // 0x203800: 0x431021
    ctx->pc = 0x203800u;
    SET_GPR_U32(ctx, 2, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x203804: 0x448021
    ctx->pc = 0x203804u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x203808: 0x8e020000
    ctx->pc = 0x203808u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20380c: 0x10400007
    ctx->pc = 0x20380Cu;
    {
        const bool branch_taken_0x20380c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x203810u;
        SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 1));
        if (branch_taken_0x20380c) {
            ctx->pc = 0x20382Cu;
            goto label_20382c;
        }
    }
    ctx->pc = 0x203814u;
    // 0x203814: 0xc0b9046
    ctx->pc = 0x203814u;
    SET_GPR_U32(ctx, 31, 0x20381Cu);
    ctx->pc = 0x203818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2E4118u;
    {
        const uint32_t __entryPc = ctx->pc;
        scePadPortClose_0x2e4118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20381Cu; }
    }
    if (ctx->pc != 0x20381Cu) { return; }
    ctx->pc = 0x20381Cu;
    // 0x20381c: 0x54400003
    ctx->pc = 0x20381Cu;
    {
        const bool branch_taken_0x20381c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x20381c) {
            ctx->pc = 0x203820u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
            ctx->pc = 0x20382Cu;
            goto label_20382c;
        }
    }
    ctx->pc = 0x203824u;
    // 0x203824: 0x10000002
    ctx->pc = 0x203824u;
    {
        const bool branch_taken_0x203824 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x203828u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x203824) {
            ctx->pc = 0x203830u;
            goto label_203830;
        }
    }
    ctx->pc = 0x20382Cu;
label_20382c:
    // 0x20382c: 0xdfbf0010
    ctx->pc = 0x20382cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_203830:
    // 0x203830: 0xdfb00000
    ctx->pc = 0x203830u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x203834: 0x3e00008
    ctx->pc = 0x203834u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x203838u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20382Cu: goto label_20382c;
            case 0x203830u: goto label_203830;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20383Cu;
}
