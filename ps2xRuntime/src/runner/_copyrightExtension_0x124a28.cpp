#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: _copyrightExtension
// Address: 0x124a28 - 0x124ad4
void _copyrightExtension_0x124a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x124a28u;

    // 0x124a28: 0x27bdffc0
    ctx->pc = 0x124a28u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x124a2c: 0x24040001
    ctx->pc = 0x124a2cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x124a30: 0xffb20020
    ctx->pc = 0x124a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x124a34: 0xffb10010
    ctx->pc = 0x124a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x124a38: 0x3c120017
    ctx->pc = 0x124a38u;
    SET_GPR_U32(ctx, 18, ((uint32_t)23 << 16));
    // 0x124a3c: 0xffb00000
    ctx->pc = 0x124a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x124a40: 0x3c110017
    ctx->pc = 0x124a40u;
    SET_GPR_U32(ctx, 17, ((uint32_t)23 << 16));
    // 0x124a44: 0xffbf0030
    ctx->pc = 0x124a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x124a48: 0xc048fdc
    ctx->pc = 0x124A48u;
    SET_GPR_U32(ctx, 31, 0x124A50u);
    ctx->pc = 0x124A4Cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)23 << 16));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124A50u; }
    }
    if (ctx->pc != 0x124A50u) { return; }
    ctx->pc = 0x124A50u;
    // 0x124a50: 0xae021a04
    ctx->pc = 0x124a50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6660), GPR_U32(ctx, 2));
    // 0x124a54: 0xc048fdc
    ctx->pc = 0x124A54u;
    SET_GPR_U32(ctx, 31, 0x124A5Cu);
    ctx->pc = 0x124A58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 8));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124A5Cu; }
    }
    if (ctx->pc != 0x124A5Cu) { return; }
    ctx->pc = 0x124A5Cu;
    // 0x124a5c: 0x3c100017
    ctx->pc = 0x124a5cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)23 << 16));
    // 0x124a60: 0xae221a08
    ctx->pc = 0x124a60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6664), GPR_U32(ctx, 2));
    // 0x124a64: 0xc048fdc
    ctx->pc = 0x124A64u;
    SET_GPR_U32(ctx, 31, 0x124A6Cu);
    ctx->pc = 0x124A68u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124A6Cu; }
    }
    if (ctx->pc != 0x124A6Cu) { return; }
    ctx->pc = 0x124A6Cu;
    // 0x124a6c: 0x3c110017
    ctx->pc = 0x124a6cu;
    SET_GPR_U32(ctx, 17, ((uint32_t)23 << 16));
    // 0x124a70: 0xae021a0c
    ctx->pc = 0x124a70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6668), GPR_U32(ctx, 2));
    // 0x124a74: 0xc048fdc
    ctx->pc = 0x124A74u;
    SET_GPR_U32(ctx, 31, 0x124A7Cu);
    ctx->pc = 0x124A78u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 7));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124A7Cu; }
    }
    if (ctx->pc != 0x124A7Cu) { return; }
    ctx->pc = 0x124A7Cu;
    // 0x124a7c: 0x3c100017
    ctx->pc = 0x124a7cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)23 << 16));
    // 0x124a80: 0xc048fdc
    ctx->pc = 0x124A80u;
    SET_GPR_U32(ctx, 31, 0x124A88u);
    ctx->pc = 0x124A84u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124A88u; }
    }
    if (ctx->pc != 0x124A88u) { return; }
    ctx->pc = 0x124A88u;
    // 0x124a88: 0xc048fdc
    ctx->pc = 0x124A88u;
    SET_GPR_U32(ctx, 31, 0x124A90u);
    ctx->pc = 0x124A8Cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 20));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124A90u; }
    }
    if (ctx->pc != 0x124A90u) { return; }
    ctx->pc = 0x124A90u;
    // 0x124a90: 0xae221a10
    ctx->pc = 0x124a90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 6672), GPR_U32(ctx, 2));
    // 0x124a94: 0xc048fdc
    ctx->pc = 0x124A94u;
    SET_GPR_U32(ctx, 31, 0x124A9Cu);
    ctx->pc = 0x124A98u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124A9Cu; }
    }
    if (ctx->pc != 0x124A9Cu) { return; }
    ctx->pc = 0x124A9Cu;
    // 0x124a9c: 0xc048fdc
    ctx->pc = 0x124A9Cu;
    SET_GPR_U32(ctx, 31, 0x124AA4u);
    ctx->pc = 0x124AA0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 22));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124AA4u; }
    }
    if (ctx->pc != 0x124AA4u) { return; }
    ctx->pc = 0x124AA4u;
    // 0x124aa4: 0xae021a14
    ctx->pc = 0x124aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 6676), GPR_U32(ctx, 2));
    // 0x124aa8: 0xc048fdc
    ctx->pc = 0x124AA8u;
    SET_GPR_U32(ctx, 31, 0x124AB0u);
    ctx->pc = 0x124AACu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124AB0u; }
    }
    if (ctx->pc != 0x124AB0u) { return; }
    ctx->pc = 0x124AB0u;
    // 0x124ab0: 0xc048fdc
    ctx->pc = 0x124AB0u;
    SET_GPR_U32(ctx, 31, 0x124AB8u);
    ctx->pc = 0x124AB4u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 22));
    ctx->pc = 0x123F70u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x123f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x124AB8u; }
    }
    if (ctx->pc != 0x124AB8u) { return; }
    ctx->pc = 0x124AB8u;
    // 0x124ab8: 0xae421a18
    ctx->pc = 0x124ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6680), GPR_U32(ctx, 2));
    // 0x124abc: 0xdfbf0030
    ctx->pc = 0x124abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x124ac0: 0xdfb20020
    ctx->pc = 0x124ac0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x124ac4: 0xdfb10010
    ctx->pc = 0x124ac4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x124ac8: 0xdfb00000
    ctx->pc = 0x124ac8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x124acc: 0x3e00008
    ctx->pc = 0x124ACCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x124AD0u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x124AD4u;
}
