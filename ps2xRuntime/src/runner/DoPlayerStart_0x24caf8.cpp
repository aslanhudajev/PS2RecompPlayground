#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: DoPlayerStart
// Address: 0x24caf8 - 0x24cbb0
void DoPlayerStart_0x24caf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x24caf8u;

    // 0x24caf8: 0x27bdffc0
    ctx->pc = 0x24caf8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x24cafc: 0xffbf0030
    ctx->pc = 0x24cafcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x24cb00: 0xffb00020
    ctx->pc = 0x24cb00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x24cb04: 0x3c020032
    ctx->pc = 0x24cb04u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x24cb08: 0x8c42080c
    ctx->pc = 0x24cb08u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 2060)));
    // 0x24cb0c: 0x28420002
    ctx->pc = 0x24cb0cu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 2), 2));
    // 0x24cb10: 0x14400017
    ctx->pc = 0x24CB10u;
    {
        const bool branch_taken_0x24cb10 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x24CB14u;
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        if (branch_taken_0x24cb10) {
            ctx->pc = 0x24CB70u;
            goto label_24cb70;
        }
    }
    ctx->pc = 0x24CB18u;
    // 0x24cb18: 0x8e040080
    ctx->pc = 0x24cb18u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x24cb1c: 0x24050002
    ctx->pc = 0x24cb1cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x24cb20: 0xc0b41e4
    ctx->pc = 0x24CB20u;
    SET_GPR_U32(ctx, 31, 0x24CB28u);
    ctx->pc = 0x24CB24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearFlags_0x2d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CB28u; }
    }
    if (ctx->pc != 0x24CB28u) { return; }
    ctx->pc = 0x24CB28u;
    // 0x24cb28: 0x8e0406a0
    ctx->pc = 0x24cb28u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 1696)));
    // 0x24cb2c: 0x10800003
    ctx->pc = 0x24CB2Cu;
    {
        const bool branch_taken_0x24cb2c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x24CB30u;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x24cb2c) {
            ctx->pc = 0x24CB3Cu;
            goto label_24cb3c;
        }
    }
    ctx->pc = 0x24CB34u;
    // 0x24cb34: 0xc0b41e4
    ctx->pc = 0x24CB34u;
    SET_GPR_U32(ctx, 31, 0x24CB3Cu);
    ctx->pc = 0x24CB38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearFlags_0x2d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CB3Cu; }
    }
    if (ctx->pc != 0x24CB3Cu) { return; }
    ctx->pc = 0x24CB3Cu;
label_24cb3c:
    // 0x24cb3c: 0x8e0301e0
    ctx->pc = 0x24cb3cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 16), 480)));
    // 0x24cb40: 0x2402007c
    ctx->pc = 0x24cb40u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 124));
    // 0x24cb44: 0x14620004
    ctx->pc = 0x24CB44u;
    {
        const bool branch_taken_0x24cb44 = (GPR_U32(ctx, 3) != GPR_U32(ctx, 2));
        ctx->pc = 0x24CB48u;
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2364)));
        if (branch_taken_0x24cb44) {
            ctx->pc = 0x24CB58u;
            goto label_24cb58;
        }
    }
    ctx->pc = 0x24CB4Cu;
    // 0x24cb4c: 0x34421000
    ctx->pc = 0x24cb4cu;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 4096));
    // 0x24cb50: 0xa602093c
    ctx->pc = 0x24cb50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2364), (uint16_t)GPR_U32(ctx, 2));
    // 0x24cb54: 0x9602093c
    ctx->pc = 0x24cb54u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2364)));
label_24cb58:
    // 0x24cb58: 0x30421000
    ctx->pc = 0x24cb58u;
    SET_GPR_U32(ctx, 2, AND32(GPR_U32(ctx, 2), 4096));
    // 0x24cb5c: 0x5440000e
    ctx->pc = 0x24CB5Cu;
    {
        const bool branch_taken_0x24cb5c = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x24cb5c) {
            ctx->pc = 0x24CB60u;
            WRITE32(ADD32(GPR_U32(ctx, 16), 484), GPR_U32(ctx, 0));
            ctx->pc = 0x24CB98u;
            goto label_24cb98;
        }
    }
    ctx->pc = 0x24CB64u;
    // 0x24cb64: 0x2402007c
    ctx->pc = 0x24cb64u;
    SET_GPR_S32(ctx, 2, ADD32(GPR_U32(ctx, 0), 124));
    // 0x24cb68: 0x1000000b
    ctx->pc = 0x24CB68u;
    {
        const bool branch_taken_0x24cb68 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x24CB6Cu;
        WRITE32(ADD32(GPR_U32(ctx, 16), 484), GPR_U32(ctx, 2));
        if (branch_taken_0x24cb68) {
            ctx->pc = 0x24CB98u;
            goto label_24cb98;
        }
    }
    ctx->pc = 0x24CB70u;
label_24cb70:
    // 0x24cb70: 0xae0001e4
    ctx->pc = 0x24cb70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 484), GPR_U32(ctx, 0));
    // 0x24cb74: 0x8e040080
    ctx->pc = 0x24cb74u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x24cb78: 0x24050002
    ctx->pc = 0x24cb78u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x24cb7c: 0xc0b41b8
    ctx->pc = 0x24CB7Cu;
    SET_GPR_U32(ctx, 31, 0x24CB84u);
    ctx->pc = 0x24CB80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CB84u; }
    }
    if (ctx->pc != 0x24CB84u) { return; }
    ctx->pc = 0x24CB84u;
    // 0x24cb84: 0x8e0406a0
    ctx->pc = 0x24cb84u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 1696)));
    // 0x24cb88: 0x10800003
    ctx->pc = 0x24CB88u;
    {
        const bool branch_taken_0x24cb88 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x24CB8Cu;
        SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
        if (branch_taken_0x24cb88) {
            ctx->pc = 0x24CB98u;
            goto label_24cb98;
        }
    }
    ctx->pc = 0x24CB90u;
    // 0x24cb90: 0xc0b41b8
    ctx->pc = 0x24CB90u;
    SET_GPR_U32(ctx, 31, 0x24CB98u);
    ctx->pc = 0x24CB94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D06E0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetFlags_0x2d06e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CB98u; }
    }
    if (ctx->pc != 0x24CB98u) { return; }
    ctx->pc = 0x24CB98u;
label_24cb98:
    // 0x24cb98: 0xc09dea0
    ctx->pc = 0x24CB98u;
    SET_GPR_U32(ctx, 31, 0x24CBA0u);
    ctx->pc = 0x24CB9Cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x277A80u;
    {
        const uint32_t __entryPc = ctx->pc;
        DoPlayerAction_0x277a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24CBA0u; }
    }
    if (ctx->pc != 0x24CBA0u) { return; }
    ctx->pc = 0x24CBA0u;
    // 0x24cba0: 0xdfbf0030
    ctx->pc = 0x24cba0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24cba4: 0xdfb00020
    ctx->pc = 0x24cba4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24cba8: 0x3e00008
    ctx->pc = 0x24CBA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24CBACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24CB3Cu: goto label_24cb3c;
            case 0x24CB58u: goto label_24cb58;
            case 0x24CB70u: goto label_24cb70;
            case 0x24CB98u: goto label_24cb98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x24CBB0u;
}
