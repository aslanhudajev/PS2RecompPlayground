#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: start_controlsmenu
// Address: 0x20cea0 - 0x20cf24
void start_controlsmenu_0x20cea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x20cea0u;

    // 0x20cea0: 0x27bdffb0
    ctx->pc = 0x20cea0u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20cea4: 0xffbf0040
    ctx->pc = 0x20cea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x20cea8: 0xffb30030
    ctx->pc = 0x20cea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x20ceac: 0xffb20020
    ctx->pc = 0x20ceacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x20ceb0: 0xffb10010
    ctx->pc = 0x20ceb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x20ceb4: 0xffb00000
    ctx->pc = 0x20ceb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20ceb8: 0x882d
    ctx->pc = 0x20ceb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20cebc: 0x24130018
    ctx->pc = 0x20cebcu;
    SET_GPR_S32(ctx, 19, ADD32(GPR_U32(ctx, 0), 24));
    // 0x20cec0: 0x3c020032
    ctx->pc = 0x20cec0u;
    SET_GPR_U32(ctx, 2, ((uint32_t)50 << 16));
    // 0x20cec4: 0x2452f3f0
    ctx->pc = 0x20cec4u;
    SET_GPR_S32(ctx, 18, ADD32(GPR_U32(ctx, 2), 4294964208));
    // 0x20cec8: 0x2331018
    ctx->pc = 0x20cec8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
    // 0x20cecc: 0x0
    ctx->pc = 0x20ceccu;
    // NOP
label_20ced0:
    // 0x20ced0: 0x528021
    ctx->pc = 0x20ced0u;
    SET_GPR_U32(ctx, 16, ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x20ced4: 0x8e040000
    ctx->pc = 0x20ced4u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20ced8: 0x8e050004
    ctx->pc = 0x20ced8u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x20cedc: 0xc0b0c08
    ctx->pc = 0x20CEDCu;
    SET_GPR_U32(ctx, 31, 0x20CEE4u);
    ctx->pc = 0x20CEE0u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->pc = 0x2C3020u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBOX_NewBlit_0x2c3020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CEE4u; }
    }
    if (ctx->pc != 0x20CEE4u) { return; }
    ctx->pc = 0x20CEE4u;
    // 0x20cee4: 0xae020014
    ctx->pc = 0x20cee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x20cee8: 0x40202d
    ctx->pc = 0x20cee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ceec: 0x8e05000c
    ctx->pc = 0x20ceecu;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x20cef0: 0xc0b0cf6
    ctx->pc = 0x20CEF0u;
    SET_GPR_U32(ctx, 31, 0x20CEF8u);
    ctx->pc = 0x20CEF4u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->pc = 0x2C33D8u;
    {
        const uint32_t __entryPc = ctx->pc;
        MBBlitSetSize_0x2c33d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20CEF8u; }
    }
    if (ctx->pc != 0x20CEF8u) { return; }
    ctx->pc = 0x20CEF8u;
    // 0x20cef8: 0x26310001
    ctx->pc = 0x20cef8u;
    SET_GPR_S32(ctx, 17, ADD32(GPR_U32(ctx, 17), 1));
    // 0x20cefc: 0x2a220003
    ctx->pc = 0x20cefcu;
    SET_GPR_U32(ctx, 2, SLT32(GPR_S32(ctx, 17), 3));
    // 0x20cf00: 0x5440fff3
    ctx->pc = 0x20CF00u;
    {
        const bool branch_taken_0x20cf00 = (GPR_U32(ctx, 2) != GPR_U32(ctx, 0));
        if (branch_taken_0x20cf00) {
            ctx->pc = 0x20CF04u;
            { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint32_t)result; ctx->hi = (uint32_t)(result >> 32); }
            ctx->pc = 0x20CED0u;
            goto label_20ced0;
        }
    }
    ctx->pc = 0x20CF08u;
    // 0x20cf08: 0xdfbf0040
    ctx->pc = 0x20cf08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20cf0c: 0xdfb30030
    ctx->pc = 0x20cf0cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20cf10: 0xdfb20020
    ctx->pc = 0x20cf10u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20cf14: 0xdfb10010
    ctx->pc = 0x20cf14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20cf18: 0xdfb00000
    ctx->pc = 0x20cf18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20cf1c: 0x3e00008
    ctx->pc = 0x20CF1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20CF20u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20CED0u: goto label_20ced0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20CF24u;
}
