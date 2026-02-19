#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DoAnimateTreeFrameInterp2
// Address: 0x212af0 - 0x212b60
void DoAnimateTreeFrameInterp2_0x212af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x212af0u;

    // 0x212af0: 0x27bdffb0
    ctx->pc = 0x212af0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x212af4: 0xffbf0040
    ctx->pc = 0x212af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x212af8: 0xffb30030
    ctx->pc = 0x212af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x212afc: 0xffb20020
    ctx->pc = 0x212afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x212b00: 0xffb10010
    ctx->pc = 0x212b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x212b04: 0xffb00000
    ctx->pc = 0x212b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x212b08: 0x80902d
    ctx->pc = 0x212b08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212b0c: 0xa0982d
    ctx->pc = 0x212b0cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212b10: 0x140882d
    ctx->pc = 0x212b10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212b14: 0xc0282d
    ctx->pc = 0x212b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212b18: 0xe0302d
    ctx->pc = 0x212b18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212b1c: 0x100382d
    ctx->pc = 0x212b1cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212b20: 0xc083ff6
    ctx->pc = 0x212B20u;
    SET_GPR_U32(ctx, 31, 0x212B28u);
    ctx->pc = 0x212B24u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x20FFD8u;
    {
        const uint32_t __entryPc = ctx->pc;
        AnimateTreeFrameInterp2_0x20ffd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212B28u; }
    }
    if (ctx->pc != 0x212B28u) { return; }
    ctx->pc = 0x212B28u;
    // 0x212b28: 0x1a200005
    ctx->pc = 0x212B28u;
    {
        const bool branch_taken_0x212b28 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x212B2Cu;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x212b28) {
            ctx->pc = 0x212B40u;
            goto label_212b40;
        }
    }
    ctx->pc = 0x212B30u;
    // 0x212b30: 0x260202d
    ctx->pc = 0x212b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212b34: 0x240282d
    ctx->pc = 0x212b34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212b38: 0xc0849d6
    ctx->pc = 0x212B38u;
    SET_GPR_U32(ctx, 31, 0x212B40u);
    ctx->pc = 0x212B3Cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x212758u;
    {
        const uint32_t __entryPc = ctx->pc;
        AnimateNode_0x212758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x212B40u; }
    }
    if (ctx->pc != 0x212B40u) { return; }
    ctx->pc = 0x212B40u;
label_212b40:
    // 0x212b40: 0x200102d
    ctx->pc = 0x212b40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x212b44: 0xdfbf0040
    ctx->pc = 0x212b44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x212b48: 0xdfb30030
    ctx->pc = 0x212b48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x212b4c: 0xdfb20020
    ctx->pc = 0x212b4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x212b50: 0xdfb10010
    ctx->pc = 0x212b50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x212b54: 0xdfb00000
    ctx->pc = 0x212b54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x212b58: 0x3e00008
    ctx->pc = 0x212B58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x212B5Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x212B40u: goto label_212b40;
            default: break;
        }
        return;
    }
    ctx->pc = 0x212B60u;
}
