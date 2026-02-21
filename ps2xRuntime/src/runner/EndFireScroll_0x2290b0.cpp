#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: EndFireScroll
// Address: 0x2290b0 - 0x229160
void EndFireScroll_0x2290b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2290b0u;

    // 0x2290b0: 0x27bdffe0
    ctx->pc = 0x2290b0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2290b4: 0xffbf0010
    ctx->pc = 0x2290b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2290b8: 0xffb00000
    ctx->pc = 0x2290b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2290bc: 0x3c100032
    ctx->pc = 0x2290bcu;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
    // 0x2290c0: 0x8e040ab4
    ctx->pc = 0x2290c0u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 2740)));
    // 0x2290c4: 0x50800005
    ctx->pc = 0x2290C4u;
    {
        const bool branch_taken_0x2290c4 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x2290c4) {
            ctx->pc = 0x2290C8u;
            SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
            ctx->pc = 0x2290DCu;
            goto label_2290dc;
        }
    }
    ctx->pc = 0x2290CCu;
    // 0x2290cc: 0xc0b0b38
    ctx->pc = 0x2290CCu;
    SET_GPR_U32(ctx, 31, 0x2290D4u);
    ctx->pc = 0x2C2CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveBlit_0x2c2ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2290D4u; }
    }
    if (ctx->pc != 0x2290D4u) { return; }
    ctx->pc = 0x2290D4u;
    // 0x2290d4: 0xae020ab4
    ctx->pc = 0x2290d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2740), GPR_U32(ctx, 2));
    // 0x2290d8: 0x3c100032
    ctx->pc = 0x2290d8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
label_2290dc:
    // 0x2290dc: 0x8e040ab8
    ctx->pc = 0x2290dcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 2744)));
    // 0x2290e0: 0x10800005
    ctx->pc = 0x2290E0u;
    {
        const bool branch_taken_0x2290e0 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x2290E4u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x2290e0) {
            ctx->pc = 0x2290F8u;
            goto label_2290f8;
        }
    }
    ctx->pc = 0x2290E8u;
    // 0x2290e8: 0xc0b0b38
    ctx->pc = 0x2290E8u;
    SET_GPR_U32(ctx, 31, 0x2290F0u);
    ctx->pc = 0x2C2CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveBlit_0x2c2ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2290F0u; }
    }
    if (ctx->pc != 0x2290F0u) { return; }
    ctx->pc = 0x2290F0u;
    // 0x2290f0: 0xae020ab8
    ctx->pc = 0x2290f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2744), GPR_U32(ctx, 2));
    // 0x2290f4: 0x3c020032
    ctx->pc = 0x2290f4u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_2290f8:
    // 0x2290f8: 0x24500ab8
    ctx->pc = 0x2290f8u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 2744));
    // 0x2290fc: 0x8e040004
    ctx->pc = 0x2290fcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x229100: 0x50800005
    ctx->pc = 0x229100u;
    {
        const bool branch_taken_0x229100 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        if (branch_taken_0x229100) {
            ctx->pc = 0x229104u;
            SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
            ctx->pc = 0x229118u;
            goto label_229118;
        }
    }
    ctx->pc = 0x229108u;
    // 0x229108: 0xc0b0b38
    ctx->pc = 0x229108u;
    SET_GPR_U32(ctx, 31, 0x229110u);
    ctx->pc = 0x2C2CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveBlit_0x2c2ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229110u; }
    }
    if (ctx->pc != 0x229110u) { return; }
    ctx->pc = 0x229110u;
    // 0x229110: 0xae020004
    ctx->pc = 0x229110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x229114: 0x3c100032
    ctx->pc = 0x229114u;
    SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
label_229118:
    // 0x229118: 0x8e040ac0
    ctx->pc = 0x229118u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 2752)));
    // 0x22911c: 0x10800005
    ctx->pc = 0x22911Cu;
    {
        const bool branch_taken_0x22911c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x229120u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x22911c) {
            ctx->pc = 0x229134u;
            goto label_229134;
        }
    }
    ctx->pc = 0x229124u;
    // 0x229124: 0xc0b0b38
    ctx->pc = 0x229124u;
    SET_GPR_U32(ctx, 31, 0x22912Cu);
    ctx->pc = 0x2C2CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveBlit_0x2c2ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22912Cu; }
    }
    if (ctx->pc != 0x22912Cu) { return; }
    ctx->pc = 0x22912Cu;
    // 0x22912c: 0xae020ac0
    ctx->pc = 0x22912cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2752), GPR_U32(ctx, 2));
    // 0x229130: 0x3c020032
    ctx->pc = 0x229130u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_229134:
    // 0x229134: 0x24500ac0
    ctx->pc = 0x229134u;
    SET_GPR_S32(ctx, 16, ADD32(GPR_U32(ctx, 2), 2752));
    // 0x229138: 0x8e040004
    ctx->pc = 0x229138u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x22913c: 0x10800005
    ctx->pc = 0x22913Cu;
    {
        const bool branch_taken_0x22913c = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x229140u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x22913c) {
            ctx->pc = 0x229154u;
            goto label_229154;
        }
    }
    ctx->pc = 0x229144u;
    // 0x229144: 0xc0b0b38
    ctx->pc = 0x229144u;
    SET_GPR_U32(ctx, 31, 0x22914Cu);
    ctx->pc = 0x2C2CE0u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveBlit_0x2c2ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22914Cu; }
    }
    if (ctx->pc != 0x22914Cu) { return; }
    ctx->pc = 0x22914Cu;
    // 0x22914c: 0xae020004
    ctx->pc = 0x22914cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x229150: 0xdfbf0010
    ctx->pc = 0x229150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_229154:
    // 0x229154: 0xdfb00000
    ctx->pc = 0x229154u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229158: 0x3e00008
    ctx->pc = 0x229158u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22915Cu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2290DCu: goto label_2290dc;
            case 0x2290F8u: goto label_2290f8;
            case 0x229118u: goto label_229118;
            case 0x229134u: goto label_229134;
            case 0x229154u: goto label_229154;
            default: break;
        }
        return;
    }
    ctx->pc = 0x229160u;
}
