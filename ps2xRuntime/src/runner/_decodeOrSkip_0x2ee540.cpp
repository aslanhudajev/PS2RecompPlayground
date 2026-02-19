#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _decodeOrSkip
// Address: 0x2ee540 - 0x2ee57c
void _decodeOrSkip_0x2ee540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2ee540u;

    // 0x2ee540: 0x3c02003a
    ctx->pc = 0x2ee540u;
    SET_GPR_U32(ctx, 2, ((uint32_t)58 << 16));
    // 0x2ee544: 0x27bdfff0
    ctx->pc = 0x2ee544u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ee548: 0x8c4331ec
    ctx->pc = 0x2ee548u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 12780)));
    // 0x2ee54c: 0x24020003
    ctx->pc = 0x2ee54cu;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 3));
    // 0x2ee550: 0x10620005
    ctx->pc = 0x2EE550u;
    {
        const bool branch_taken_0x2ee550 = (GPR_U32(ctx, 3) == GPR_U32(ctx, 2));
        ctx->pc = 0x2EE554u;
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        if (branch_taken_0x2ee550) {
            ctx->pc = 0x2EE568u;
            goto label_2ee568;
        }
    }
    ctx->pc = 0x2EE558u;
    // 0x2ee558: 0xc0bb960
    ctx->pc = 0x2EE558u;
    SET_GPR_U32(ctx, 31, 0x2EE560u);
    ctx->pc = 0x2EE580u;
    {
        const uint32_t __entryPc = ctx->pc;
        _decodeOrSkipField_0x2ee580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE560u; }
    }
    if (ctx->pc != 0x2EE560u) { return; }
    ctx->pc = 0x2EE560u;
    // 0x2ee560: 0x10000004
    ctx->pc = 0x2EE560u;
    {
        const bool branch_taken_0x2ee560 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x2EE564u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        if (branch_taken_0x2ee560) {
            ctx->pc = 0x2EE574u;
            goto label_2ee574;
        }
    }
    ctx->pc = 0x2EE568u;
label_2ee568:
    // 0x2ee568: 0xc0bb906
    ctx->pc = 0x2EE568u;
    SET_GPR_U32(ctx, 31, 0x2EE570u);
    ctx->pc = 0x2EE418u;
    {
        const uint32_t __entryPc = ctx->pc;
        _decodeOrSkipFrame_0x2ee418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EE570u; }
    }
    if (ctx->pc != 0x2EE570u) { return; }
    ctx->pc = 0x2EE570u;
    // 0x2ee570: 0xdfbf0000
    ctx->pc = 0x2ee570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ee574:
    // 0x2ee574: 0x3e00008
    ctx->pc = 0x2EE574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EE578u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2EE568u: goto label_2ee568;
            case 0x2EE574u: goto label_2ee574;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2EE57Cu;
}
