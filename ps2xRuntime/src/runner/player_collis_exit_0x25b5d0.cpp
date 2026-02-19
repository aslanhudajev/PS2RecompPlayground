#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: player_collis_exit
// Address: 0x25b5d0 - 0x25b65c
void player_collis_exit_0x25b5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x25b5d0u;

    // 0x25b5d0: 0x27bdffe0
    ctx->pc = 0x25b5d0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x25b5d4: 0xffbf0010
    ctx->pc = 0x25b5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x25b5d8: 0xffb00000
    ctx->pc = 0x25b5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25b5dc: 0x80302d
    ctx->pc = 0x25b5dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b5e0: 0x3c020032
    ctx->pc = 0x25b5e0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x25b5e4: 0x8c4307bc
    ctx->pc = 0x25b5e4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 1980)));
    // 0x25b5e8: 0x2402ffff
    ctx->pc = 0x25b5e8u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x25b5ec: 0x40802d
    ctx->pc = 0x25b5ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25b5f0: 0x8cc40884
    ctx->pc = 0x25b5f0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 2180)));
    // 0x25b5f4: 0x1080000a
    ctx->pc = 0x25B5F4u;
    {
        const bool branch_taken_0x25b5f4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x25B5F8u;
        if (GPR_U32(ctx, 3) == 0) SET_GPR_U32(ctx, 16, GPR_U32(ctx, 0));
        if (branch_taken_0x25b5f4) {
            ctx->pc = 0x25B620u;
            goto label_25b620;
        }
    }
    ctx->pc = 0x25B5FCu;
    // 0x25b5fc: 0x8c850000
    ctx->pc = 0x25b5fcu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25b600: 0x8ca30000
    ctx->pc = 0x25b600u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x25b604: 0x24020009
    ctx->pc = 0x25b604u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 9));
    // 0x25b608: 0x14620006
    ctx->pc = 0x25B608u;
    {
        const bool branch_taken_0x25b608 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x25B60Cu;
        SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
        if (branch_taken_0x25b608) {
            ctx->pc = 0x25B624u;
            goto label_25b624;
        }
    }
    ctx->pc = 0x25B610u;
    // 0x25b610: 0x8ca30004
    ctx->pc = 0x25b610u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x25b614: 0x24020032
    ctx->pc = 0x25b614u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 50));
    // 0x25b618: 0x54620001
    ctx->pc = 0x25B618u;
    {
        const bool branch_taken_0x25b618 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        if (branch_taken_0x25b618) {
            ctx->pc = 0x25B61Cu;
            SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 240)));
            ctx->pc = 0x25B620u;
            goto label_25b620;
        }
    }
    ctx->pc = 0x25B620u;
label_25b620:
    // 0x25b620: 0x3c020031
    ctx->pc = 0x25b620u;
    SET_GPR_U32(ctx, 2, ((uint32_t)49 << 16));
label_25b624:
    // 0x25b624: 0x8c420018
    ctx->pc = 0x25b624u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x25b628: 0x30428000
    ctx->pc = 0x25b628u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 32768));
    // 0x25b62c: 0x10400007
    ctx->pc = 0x25B62Cu;
    {
        const bool branch_taken_0x25b62c = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x25B630u;
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x25b62c) {
            ctx->pc = 0x25B64Cu;
            goto label_25b64c;
        }
    }
    ctx->pc = 0x25B634u;
    // 0x25b634: 0x12000005
    ctx->pc = 0x25B634u;
    {
        const bool branch_taken_0x25b634 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x25B638u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 97));
        if (branch_taken_0x25b634) {
            ctx->pc = 0x25B64Cu;
            goto label_25b64c;
        }
    }
    ctx->pc = 0x25B63Cu;
    // 0x25b63c: 0x8cc50000
    ctx->pc = 0x25b63cu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x25b640: 0xc0a3a1c
    ctx->pc = 0x25B640u;
    SET_GPR_U32(ctx, 31, 0x25B648u);
    ctx->pc = 0x25B644u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 6), 96));
    ctx->pc = 0x28E870u;
    {
        const uint32_t __entryPc = ctx->pc;
        NewHelp_0x28e870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25B648u; }
    }
    if (ctx->pc != 0x25B648u) { return; }
    ctx->pc = 0x25B648u;
    // 0x25b648: 0x200102d
    ctx->pc = 0x25b648u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_25b64c:
    // 0x25b64c: 0xdfbf0010
    ctx->pc = 0x25b64cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25b650: 0xdfb00000
    ctx->pc = 0x25b650u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25b654: 0x3e00008
    ctx->pc = 0x25B654u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25B658u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x25B620u: goto label_25b620;
            case 0x25B624u: goto label_25b624;
            case 0x25B64Cu: goto label_25b64c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x25B65Cu;
}
