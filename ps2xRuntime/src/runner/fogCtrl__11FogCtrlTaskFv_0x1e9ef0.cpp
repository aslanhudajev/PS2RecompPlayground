#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"
#include "ps2_init_log.h"

// Function: fogCtrl__11FogCtrlTaskFv
// Address: 0x1e9ef0 - 0x1e9fb0
void fogCtrl__11FogCtrlTaskFv_0x1e9ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
    PS2_INIT_LOG_ENTRY("fogCtrl__11FogCtrlTaskFv");


    ctx->pc = 0x1e9ef0u;

    // 0x1e9ef0: 0x27bdffe0
    ctx->pc = 0x1e9ef0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e9ef4: 0x7fbf0010
    ctx->pc = 0x1e9ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x1e9ef8: 0x7fb00000
    ctx->pc = 0x1e9ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1e9efc: 0x70808628
    ctx->pc = 0x1e9efcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 4), GPR_VEC(ctx, 0)));
    // 0x1e9f00: 0xc07aa5c
    ctx->pc = 0x1E9F00u;
    SET_GPR_U32(ctx, 31, 0x1E9F08u);
    ctx->pc = 0x1E9F04u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 4));
    ctx->pc = 0x1EA970u;
    {
        const uint32_t __entryPc = ctx->pc;
        valChgCtrl__FP4VALM_0x1ea970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9F08u; }
        else if (ctx->pc != 0x1E9F08u) { ctx->pc = 0x1E9F08u; }
    }
    if (ctx->pc != 0x1E9F08u) { return; }
    ctx->pc = 0x1E9F08u;
    // 0x1e9f08: 0x10400004
    ctx->pc = 0x1E9F08u;
    {
        const bool branch_taken_0x1e9f08 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E9F0Cu;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 20));
        if (branch_taken_0x1e9f08) {
            ctx->pc = 0x1E9F1Cu;
            goto label_1e9f1c;
        }
    }
    ctx->pc = 0x1E9F10u;
    // 0x1e9f10: 0xc6000008
    ctx->pc = 0x1e9f10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9f14: 0x3c010050
    ctx->pc = 0x1e9f14u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e9f18: 0xe4200ce0
    ctx->pc = 0x1e9f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 3296), bits); }
label_1e9f1c:
    // 0x1e9f1c: 0xc07aa5c
    ctx->pc = 0x1E9F1Cu;
    SET_GPR_U32(ctx, 31, 0x1E9F24u);
    ctx->pc = 0x1EA970u;
    {
        const uint32_t __entryPc = ctx->pc;
        valChgCtrl__FP4VALM_0x1ea970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9F24u; }
        else if (ctx->pc != 0x1E9F24u) { ctx->pc = 0x1E9F24u; }
    }
    if (ctx->pc != 0x1E9F24u) { return; }
    ctx->pc = 0x1E9F24u;
    // 0x1e9f24: 0x10400004
    ctx->pc = 0x1E9F24u;
    {
        const bool branch_taken_0x1e9f24 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E9F28u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 36));
        if (branch_taken_0x1e9f24) {
            ctx->pc = 0x1E9F38u;
            goto label_1e9f38;
        }
    }
    ctx->pc = 0x1E9F2Cu;
    // 0x1e9f2c: 0xc6000018
    ctx->pc = 0x1e9f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e9f30: 0x3c010050
    ctx->pc = 0x1e9f30u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e9f34: 0xe4200ce4
    ctx->pc = 0x1e9f34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 3300), bits); }
label_1e9f38:
    // 0x1e9f38: 0xc07aa5c
    ctx->pc = 0x1E9F38u;
    SET_GPR_U32(ctx, 31, 0x1E9F40u);
    ctx->pc = 0x1EA970u;
    {
        const uint32_t __entryPc = ctx->pc;
        valChgCtrl__FP4VALM_0x1ea970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9F40u; }
        else if (ctx->pc != 0x1E9F40u) { ctx->pc = 0x1E9F40u; }
    }
    if (ctx->pc != 0x1E9F40u) { return; }
    ctx->pc = 0x1E9F40u;
    // 0x1e9f40: 0x10400006
    ctx->pc = 0x1E9F40u;
    {
        const bool branch_taken_0x1e9f40 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E9F44u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 52));
        if (branch_taken_0x1e9f40) {
            ctx->pc = 0x1E9F5Cu;
            goto label_1e9f5c;
        }
    }
    ctx->pc = 0x1E9F48u;
    // 0x1e9f48: 0xc053146
    ctx->pc = 0x1E9F48u;
    SET_GPR_U32(ctx, 31, 0x1E9F50u);
    ctx->pc = 0x1E9F4Cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x14C518u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x14c518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9F50u; }
        else if (ctx->pc != 0x1E9F50u) { ctx->pc = 0x1E9F50u; }
    }
    if (ctx->pc != 0x1E9F50u) { return; }
    ctx->pc = 0x1E9F50u;
    // 0x1e9f50: 0x3c010050
    ctx->pc = 0x1e9f50u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e9f54: 0xac220cd4
    ctx->pc = 0x1e9f54u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3284), GPR_U32(ctx, 2));
    // 0x1e9f58: 0x26040034
    ctx->pc = 0x1e9f58u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 52));
label_1e9f5c:
    // 0x1e9f5c: 0xc07aa5c
    ctx->pc = 0x1E9F5Cu;
    SET_GPR_U32(ctx, 31, 0x1E9F64u);
    ctx->pc = 0x1EA970u;
    {
        const uint32_t __entryPc = ctx->pc;
        valChgCtrl__FP4VALM_0x1ea970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9F64u; }
        else if (ctx->pc != 0x1E9F64u) { ctx->pc = 0x1E9F64u; }
    }
    if (ctx->pc != 0x1E9F64u) { return; }
    ctx->pc = 0x1E9F64u;
    // 0x1e9f64: 0x10400006
    ctx->pc = 0x1E9F64u;
    {
        const bool branch_taken_0x1e9f64 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x1E9F68u;
        SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 68));
        if (branch_taken_0x1e9f64) {
            ctx->pc = 0x1E9F80u;
            goto label_1e9f80;
        }
    }
    ctx->pc = 0x1E9F6Cu;
    // 0x1e9f6c: 0xc053146
    ctx->pc = 0x1E9F6Cu;
    SET_GPR_U32(ctx, 31, 0x1E9F74u);
    ctx->pc = 0x1E9F70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x14C518u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x14c518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9F74u; }
        else if (ctx->pc != 0x1E9F74u) { ctx->pc = 0x1E9F74u; }
    }
    if (ctx->pc != 0x1E9F74u) { return; }
    ctx->pc = 0x1E9F74u;
    // 0x1e9f74: 0x3c010050
    ctx->pc = 0x1e9f74u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e9f78: 0xac220cd8
    ctx->pc = 0x1e9f78u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3288), GPR_U32(ctx, 2));
    // 0x1e9f7c: 0x26040044
    ctx->pc = 0x1e9f7cu;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 16), 68));
label_1e9f80:
    // 0x1e9f80: 0xc07aa5c
    ctx->pc = 0x1E9F80u;
    SET_GPR_U32(ctx, 31, 0x1E9F88u);
    ctx->pc = 0x1EA970u;
    {
        const uint32_t __entryPc = ctx->pc;
        valChgCtrl__FP4VALM_0x1ea970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9F88u; }
        else if (ctx->pc != 0x1E9F88u) { ctx->pc = 0x1E9F88u; }
    }
    if (ctx->pc != 0x1E9F88u) { return; }
    ctx->pc = 0x1E9F88u;
    // 0x1e9f88: 0x10400005
    ctx->pc = 0x1E9F88u;
    {
        const bool branch_taken_0x1e9f88 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        if (branch_taken_0x1e9f88) {
            ctx->pc = 0x1E9FA0u;
            goto label_1e9fa0;
        }
    }
    ctx->pc = 0x1E9F90u;
    // 0x1e9f90: 0xc053146
    ctx->pc = 0x1E9F90u;
    SET_GPR_U32(ctx, 31, 0x1E9F98u);
    ctx->pc = 0x1E9F94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->pc = 0x14C518u;
    {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x14c518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E9F98u; }
        else if (ctx->pc != 0x1E9F98u) { ctx->pc = 0x1E9F98u; }
    }
    if (ctx->pc != 0x1E9F98u) { return; }
    ctx->pc = 0x1E9F98u;
    // 0x1e9f98: 0x3c010050
    ctx->pc = 0x1e9f98u;
    SET_GPR_U32(ctx, 1, ((uint32_t)80 << 16));
    // 0x1e9f9c: 0xac220cdc
    ctx->pc = 0x1e9f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 3292), GPR_U32(ctx, 2));
label_1e9fa0:
    // 0x1e9fa0: 0x7bbf0010
    ctx->pc = 0x1e9fa0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e9fa4: 0x7bb00000
    ctx->pc = 0x1e9fa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e9fa8: 0x3e00008
    ctx->pc = 0x1E9FA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E9FACu;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E9F1Cu: goto label_1e9f1c;
            case 0x1E9F38u: goto label_1e9f38;
            case 0x1E9F5Cu: goto label_1e9f5c;
            case 0x1E9F80u: goto label_1e9f80;
            case 0x1E9FA0u: goto label_1e9fa0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E9FB0u;
}
