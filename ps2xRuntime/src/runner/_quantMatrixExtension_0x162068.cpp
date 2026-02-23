#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: _quantMatrixExtension
// Address: 0x162068 - 0x162114
void _quantMatrixExtension_0x162068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("_quantMatrixExtension");


    ctx->pc = 0x162068u;

    // 0x162068: 0x27bdffe0
    ctx->pc = 0x162068u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16206c: 0x24040001
    ctx->pc = 0x16206cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x162070: 0xffb00000
    ctx->pc = 0x162070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x162074: 0xffbf0010
    ctx->pc = 0x162074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x162078: 0xc0585d4
    ctx->pc = 0x162078u;
    SET_GPR_U32(ctx, 31, 0x162080u);
    ctx->pc = 0x16207Cu;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162080u; }
        else if (ctx->pc != 0x162080u) { ctx->pc = 0x162080u; }
    }
    if (ctx->pc != 0x162080u) { return; }
    ctx->pc = 0x162080u;
    // 0x162080: 0x10400007
    ctx->pc = 0x162080u;
    {
        const bool branch_taken_0x162080 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x162080) {
            ctx->pc = 0x1620A0u;
            goto label_1620a0;
        }
    }
    ctx->pc = 0x162088u;
    // 0x162088: 0xc05847c
    ctx->pc = 0x162088u;
    SET_GPR_U32(ctx, 31, 0x162090u);
    ctx->pc = 0x1611F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x1611f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162090u; }
        else if (ctx->pc != 0x162090u) { ctx->pc = 0x162090u; }
    }
    if (ctx->pc != 0x162090u) { return; }
    ctx->pc = 0x162090u;
    // 0x162090: 0xc058470
    ctx->pc = 0x162090u;
    SET_GPR_U32(ctx, 31, 0x162098u);
    ctx->pc = 0x162094u;
    SET_GPR_U32(ctx, 4, ((uint32_t)20480 << 16));
    ctx->pc = 0x1611C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sendIpuCommand_0x1611c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x162098u; }
        else if (ctx->pc != 0x162098u) { ctx->pc = 0x162098u; }
    }
    if (ctx->pc != 0x162098u) { return; }
    ctx->pc = 0x162098u;
    // 0x162098: 0xc05847c
    ctx->pc = 0x162098u;
    SET_GPR_U32(ctx, 31, 0x1620A0u);
    ctx->pc = 0x1611F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x1611f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1620A0u; }
        else if (ctx->pc != 0x1620A0u) { ctx->pc = 0x1620A0u; }
    }
    if (ctx->pc != 0x1620A0u) { return; }
    ctx->pc = 0x1620A0u;
label_1620a0:
    // 0x1620a0: 0x24040001
    ctx->pc = 0x1620a0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    // 0x1620a4: 0xc0585d4
    ctx->pc = 0x1620A4u;
    SET_GPR_U32(ctx, 31, 0x1620ACu);
    ctx->pc = 0x1620A8u;
    SET_GPR_U32(ctx, 16, ((uint32_t)35 << 16));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1620ACu; }
        else if (ctx->pc != 0x1620ACu) { ctx->pc = 0x1620ACu; }
    }
    if (ctx->pc != 0x1620ACu) { return; }
    ctx->pc = 0x1620ACu;
    // 0x1620ac: 0x10400007
    ctx->pc = 0x1620ACu;
    {
        const bool branch_taken_0x1620ac = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1620ac) {
            ctx->pc = 0x1620CCu;
            goto label_1620cc;
        }
    }
    ctx->pc = 0x1620B4u;
    // 0x1620b4: 0xc05847c
    ctx->pc = 0x1620B4u;
    SET_GPR_U32(ctx, 31, 0x1620BCu);
    ctx->pc = 0x1611F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x1611f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1620BCu; }
        else if (ctx->pc != 0x1620BCu) { ctx->pc = 0x1620BCu; }
    }
    if (ctx->pc != 0x1620BCu) { return; }
    ctx->pc = 0x1620BCu;
    // 0x1620bc: 0xc058470
    ctx->pc = 0x1620BCu;
    SET_GPR_U32(ctx, 31, 0x1620C4u);
    ctx->pc = 0x1620C0u;
    SET_GPR_U32(ctx, 4, ((uint32_t)22528 << 16));
    ctx->pc = 0x1611C0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _sendIpuCommand_0x1611c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1620C4u; }
        else if (ctx->pc != 0x1620C4u) { ctx->pc = 0x1620C4u; }
    }
    if (ctx->pc != 0x1620C4u) { return; }
    ctx->pc = 0x1620C4u;
    // 0x1620c4: 0xc05847c
    ctx->pc = 0x1620C4u;
    SET_GPR_U32(ctx, 31, 0x1620CCu);
    ctx->pc = 0x1611F0u;
    {
        const uint32_t __entryPc = ctx->pc;
        _waitIpuIdle_0x1611f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1620CCu; }
        else if (ctx->pc != 0x1620CCu) { ctx->pc = 0x1620CCu; }
    }
    if (ctx->pc != 0x1620CCu) { return; }
    ctx->pc = 0x1620CCu;
label_1620cc:
    // 0x1620cc: 0xc0585d4
    ctx->pc = 0x1620CCu;
    SET_GPR_U32(ctx, 31, 0x1620D4u);
    ctx->pc = 0x1620D0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1620D4u; }
        else if (ctx->pc != 0x1620D4u) { ctx->pc = 0x1620D4u; }
    }
    if (ctx->pc != 0x1620D4u) { return; }
    ctx->pc = 0x1620D4u;
    // 0x1620d4: 0x10400003
    ctx->pc = 0x1620D4u;
    {
        const bool branch_taken_0x1620d4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1620D8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
        if (branch_taken_0x1620d4) {
            ctx->pc = 0x1620E4u;
            goto label_1620e4;
        }
    }
    ctx->pc = 0x1620DCu;
    // 0x1620dc: 0xc059112
    ctx->pc = 0x1620DCu;
    SET_GPR_U32(ctx, 31, 0x1620E4u);
    ctx->pc = 0x1620E0u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937736));
    ctx->pc = 0x164448u;
    {
        const uint32_t __entryPc = ctx->pc;
        ps2__Error_0x164448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1620E4u; }
        else if (ctx->pc != 0x1620E4u) { ctx->pc = 0x1620E4u; }
    }
    if (ctx->pc != 0x1620E4u) { return; }
    ctx->pc = 0x1620E4u;
label_1620e4:
    // 0x1620e4: 0xc0585d4
    ctx->pc = 0x1620E4u;
    SET_GPR_U32(ctx, 31, 0x1620ECu);
    ctx->pc = 0x1620E8u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x161750u;
    {
        const uint32_t __entryPc = ctx->pc;
        _nextBit_0x161750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1620ECu; }
        else if (ctx->pc != 0x1620ECu) { ctx->pc = 0x1620ECu; }
    }
    if (ctx->pc != 0x1620ECu) { return; }
    ctx->pc = 0x1620ECu;
    // 0x1620ec: 0x10400006
    ctx->pc = 0x1620ECu;
    {
        const bool branch_taken_0x1620ec = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1620F0u;
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        if (branch_taken_0x1620ec) {
            ctx->pc = 0x162108u;
            goto label_162108;
        }
    }
    ctx->pc = 0x1620F4u;
    // 0x1620f4: 0x3c04002c
    ctx->pc = 0x1620f4u;
    SET_GPR_U32(ctx, 4, ((uint32_t)44 << 16));
    // 0x1620f8: 0xdfb00000
    ctx->pc = 0x1620f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1620fc: 0x24848cb0
    ctx->pc = 0x1620fcu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294937776));
    // 0x162100: 0x8059112
    ctx->pc = 0x162100u;
    ctx->pc = 0x162104u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
    ctx->pc = 0x164448u;
    ps2__Error_0x164448(rdram, ctx, runtime); return;
    ctx->pc = 0x162108u;
label_162108:
    // 0x162108: 0xdfb00000
    ctx->pc = 0x162108u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16210c: 0x3e00008
    ctx->pc = 0x16210Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162110u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1620A0u: goto label_1620a0;
            case 0x1620CCu: goto label_1620cc;
            case 0x1620E4u: goto label_1620e4;
            case 0x162108u: goto label_162108;
            default: break;
        }
        return;
    }
    ctx->pc = 0x162114u;
}
