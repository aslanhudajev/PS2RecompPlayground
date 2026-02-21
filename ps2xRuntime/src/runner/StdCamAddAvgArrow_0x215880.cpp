#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: StdCamAddAvgArrow
// Address: 0x215880 - 0x215938
void StdCamAddAvgArrow_0x215880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x215880u;

    // 0x215880: 0x27bdff80
    ctx->pc = 0x215880u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x215884: 0xffbf0070
    ctx->pc = 0x215884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x215888: 0xffb10060
    ctx->pc = 0x215888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x21588c: 0xffb00050
    ctx->pc = 0x21588cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x215890: 0x80802d
    ctx->pc = 0x215890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215894: 0x27b10040
    ctx->pc = 0x215894u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 29), 64));
    // 0x215898: 0x220202d
    ctx->pc = 0x215898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21589c: 0x282d
    ctx->pc = 0x21589cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2158a0: 0xc0becc6
    ctx->pc = 0x2158A0u;
    SET_GPR_U32(ctx, 31, 0x2158A8u);
    ctx->pc = 0x2158A4u;
    SET_GPR_S32(ctx, 6, ADD32(GPR_U32(ctx, 0), 16));
    ctx->pc = 0x2FB318u;
    {
        const uint32_t __entryPc = ctx->pc;
        memset_0x2fb318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2158A8u; }
    }
    if (ctx->pc != 0x2158A8u) { return; }
    ctx->pc = 0x2158A8u;
    // 0x2158a8: 0x12000018
    ctx->pc = 0x2158A8u;
    {
        const bool branch_taken_0x2158a8 = (GPR_U32(ctx, 16) == GPR_U32(ctx, 0));
        ctx->pc = 0x2158ACu;
        SET_GPR_U32(ctx, 16, ((uint32_t)50 << 16));
        if (branch_taken_0x2158a8) {
            ctx->pc = 0x21590Cu;
            goto label_21590c;
        }
    }
    ctx->pc = 0x2158B0u;
    // 0x2158b0: 0x8e02f7c8
    ctx->pc = 0x2158b0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 16), 4294965192)));
    // 0x2158b4: 0x1440000f
    ctx->pc = 0x2158B4u;
    {
        const bool branch_taken_0x2158b4 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        ctx->pc = 0x2158B8u;
        SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
        if (branch_taken_0x2158b4) {
            ctx->pc = 0x2158F4u;
            goto label_2158f4;
        }
    }
    ctx->pc = 0x2158BCu;
    // 0x2158bc: 0x24040002
    ctx->pc = 0x2158bcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2158c0: 0x24050001
    ctx->pc = 0x2158c0u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    // 0x2158c4: 0x302d
    ctx->pc = 0x2158c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2158c8: 0x3c07003a
    ctx->pc = 0x2158c8u;
    SET_GPR_U32(ctx, 7, ((uint32_t)58 << 16));
    // 0x2158cc: 0x24e72520
    ctx->pc = 0x2158ccu;
    SET_GPR_S32(ctx, 7, ADD32(GPR_U32(ctx, 7), 9504));
    // 0x2158d0: 0x220402d
    ctx->pc = 0x2158d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2158d4: 0xc093fee
    ctx->pc = 0x2158D4u;
    SET_GPR_U32(ctx, 31, 0x2158DCu);
    ctx->pc = 0x2158D8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x24FFB8u;
    {
        const uint32_t __entryPc = ctx->pc;
        add_arrow_0x24ffb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2158DCu; }
    }
    if (ctx->pc != 0x2158DCu) { return; }
    ctx->pc = 0x2158DCu;
    // 0x2158dc: 0xae02f7c8
    ctx->pc = 0x2158dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965192), GPR_U32(ctx, 2));
    // 0x2158e0: 0x40202d
    ctx->pc = 0x2158e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2158e4: 0x282d
    ctx->pc = 0x2158e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2158e8: 0xc0b40c0
    ctx->pc = 0x2158E8u;
    SET_GPR_U32(ctx, 31, 0x2158F0u);
    ctx->pc = 0x2158ECu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0300u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeSetAlpha_0x2d0300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2158F0u; }
    }
    if (ctx->pc != 0x2158F0u) { return; }
    ctx->pc = 0x2158F0u;
    // 0x2158f0: 0x3c020032
    ctx->pc = 0x2158f0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
label_2158f4:
    // 0x2158f4: 0x8c44f7c8
    ctx->pc = 0x2158f4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4294965192)));
    // 0x2158f8: 0x24050002
    ctx->pc = 0x2158f8u;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 2));
    // 0x2158fc: 0xc0b41e4
    ctx->pc = 0x2158FCu;
    SET_GPR_U32(ctx, 31, 0x215904u);
    ctx->pc = 0x215900u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2D0790u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBTreeClearFlags_0x2d0790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215904u; }
    }
    if (ctx->pc != 0x215904u) { return; }
    ctx->pc = 0x215904u;
    // 0x215904: 0x10000008
    ctx->pc = 0x215904u;
    {
        const bool branch_taken_0x215904 = (GPR_U32(ctx, 0) == GPR_U32(ctx, 0));
        ctx->pc = 0x215908u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x215904) {
            ctx->pc = 0x215928u;
            goto label_215928;
        }
    }
    ctx->pc = 0x21590Cu;
label_21590c:
    // 0x21590c: 0x8e04f7c8
    ctx->pc = 0x21590cu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 4294965192)));
    // 0x215910: 0x10800005
    ctx->pc = 0x215910u;
    {
        const bool branch_taken_0x215910 = (GPR_U32(ctx, 4) == GPR_U32(ctx, 0));
        ctx->pc = 0x215914u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        if (branch_taken_0x215910) {
            ctx->pc = 0x215928u;
            goto label_215928;
        }
    }
    ctx->pc = 0x215918u;
    // 0x215918: 0xc0b3f1a
    ctx->pc = 0x215918u;
    SET_GPR_U32(ctx, 31, 0x215920u);
    ctx->pc = 0x21591Cu;
    SET_GPR_S32(ctx, 5, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x2CFC68u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBRemoveNode_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215920u; }
    }
    if (ctx->pc != 0x215920u) { return; }
    ctx->pc = 0x215920u;
    // 0x215920: 0xae00f7c8
    ctx->pc = 0x215920u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294965192), GPR_U32(ctx, 0));
    // 0x215924: 0xdfbf0070
    ctx->pc = 0x215924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_215928:
    // 0x215928: 0xdfb10060
    ctx->pc = 0x215928u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21592c: 0xdfb00050
    ctx->pc = 0x21592cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x215930: 0x3e00008
    ctx->pc = 0x215930u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x215934u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2158F4u: goto label_2158f4;
            case 0x21590Cu: goto label_21590c;
            case 0x215928u: goto label_215928;
            default: break;
        }
        return;
    }
    ctx->pc = 0x215938u;
}
