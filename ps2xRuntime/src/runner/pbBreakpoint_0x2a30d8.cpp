#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

// Function: pbBreakpoint
// Address: 0x2a30d8 - 0x2a3148
void pbBreakpoint_0x2a30d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {

    ctx->pc = 0x2a30d8u;

    // 0x2a30d8: 0x27bdffd0
    ctx->pc = 0x2a30d8u;
    SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a30dc: 0xffbf0020
    ctx->pc = 0x2a30dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a30e0: 0xffb10010
    ctx->pc = 0x2a30e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a30e4: 0xffb00000
    ctx->pc = 0x2a30e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a30e8: 0x80882d
    ctx->pc = 0x2a30e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a30ec: 0x3c020037
    ctx->pc = 0x2a30ecu;
    SET_GPR_U32(ctx, 2, ((uint32_t)55 << 16));
    // 0x2a30f0: 0x8c428018
    ctx->pc = 0x2a30f0u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4294934552)));
    // 0x2a30f4: 0x10400003
    ctx->pc = 0x2A30F4u;
    {
        const bool branch_taken_0x2a30f4 = (GPR_U32(ctx, 2) == GPR_U32(ctx, 0));
        ctx->pc = 0x2A30F8u;
        SET_GPR_U32(ctx, 4, ((uint32_t)59 << 16));
        if (branch_taken_0x2a30f4) {
            ctx->pc = 0x2A3104u;
            goto label_2a3104;
        }
    }
    ctx->pc = 0x2A30FCu;
    // 0x2a30fc: 0xc0b4a34
    ctx->pc = 0x2A30FCu;
    SET_GPR_U32(ctx, 31, 0x2A3104u);
    ctx->pc = 0x2A3100u;
    SET_GPR_S32(ctx, 4, ADD32(GPR_U32(ctx, 4), 4294961144));
    ctx->pc = 0x2D28D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        LogfilePrintf_0x2d28d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3104u; }
    }
    if (ctx->pc != 0x2A3104u) { return; }
    ctx->pc = 0x2A3104u;
label_2a3104:
    // 0x2a3104: 0xc0abc02
    ctx->pc = 0x2A3104u;
    SET_GPR_U32(ctx, 31, 0x2A310Cu);
    ctx->pc = 0x2AF008u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetCPUTime_0x2af008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A310Cu; }
    }
    if (ctx->pc != 0x2A310Cu) { return; }
    ctx->pc = 0x2A310Cu;
    // 0x2a310c: 0x40802d
    ctx->pc = 0x2a310cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3110: 0xc0a8c34
    ctx->pc = 0x2A3110u;
    SET_GPR_U32(ctx, 31, 0x2A3118u);
    ctx->pc = 0x2A3114u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x2A30D0u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbBreakpoint1_0x2a30d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3118u; }
    }
    if (ctx->pc != 0x2A3118u) { return; }
    ctx->pc = 0x2A3118u;
    // 0x2a3118: 0xc0abc02
    ctx->pc = 0x2A3118u;
    SET_GPR_U32(ctx, 31, 0x2A3120u);
    ctx->pc = 0x2AF008u;
    {
        const uint32_t __entryPc = ctx->pc;
        pbGetCPUTime_0x2af008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3120u; }
    }
    if (ctx->pc != 0x2A3120u) { return; }
    ctx->pc = 0x2A3120u;
    // 0x2a3120: 0x508023
    ctx->pc = 0x2a3120u;
    SET_GPR_U32(ctx, 16, SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2a3124: 0x3c02002d
    ctx->pc = 0x2a3124u;
    SET_GPR_U32(ctx, 2, ((uint32_t)45 << 16));
    // 0x2a3128: 0x3442c6bf
    ctx->pc = 0x2a3128u;
    SET_GPR_U32(ctx, 2, OR32(GPR_U32(ctx, 2), 50879));
    // 0x2a312c: 0x50102b
    ctx->pc = 0x2a312cu;
    SET_GPR_U32(ctx, 2, SLTU32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2a3130: 0x38420001
    ctx->pc = 0x2a3130u;
    SET_GPR_U32(ctx, 2, XOR32(GPR_U32(ctx, 2), 1));
    // 0x2a3134: 0xdfbf0020
    ctx->pc = 0x2a3134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a3138: 0xdfb10010
    ctx->pc = 0x2a3138u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a313c: 0xdfb00000
    ctx->pc = 0x2a313cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a3140: 0x3e00008
    ctx->pc = 0x2A3140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3144u;
        SET_GPR_S32(ctx, 29, ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2A3104u: goto label_2a3104;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2A3148u;
}
